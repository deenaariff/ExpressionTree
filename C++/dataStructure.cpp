#include <iostream>
using namespace std;


	// Value Object
	struct data {
		char comparator;
		int value;
	}

	// NODE DATA STUCTURE
	struct node {
		struct data data;
		struct node* left;
		struct node* right;
	};

	// LOOKUP
	static int lookup (struct node* node, int target) {
		if (node == NULL)
	    	return (false);
		else {
	    	if (target == node->data) return(true);
	        else {
		    	if (target < node-> data)
			    	return(lookup(node->left, target));
			    else
			    	return (lookup(node->right,target));
			}
	    }
	} 

	// CREATES NEW NODE
	node* NewNode (int data) {
		struct node* node = new(struct node);
	    node-> data = data;
	    node->left = NULL;
	    node->right = NULL;
	    return(node);
	}


	// INSERT DATA 
	struct node* insert(struct node* node, int data) {
		if (node == NULL)
	    	return(NewNode(data));
		else {
	    	if (data <= node->data) 
	    		node->left = insert(node->left, data);
	    	else 
	    		node -> right = insert(node->right, data);
	     	return(node); // returned the (unchanged) pointerj         
	    }
	}



	