Node *concatenate(Node *leftList, Node *rightList)
{    
    // If either of the list is empty 
    // then return the other list 
    if (leftList == NULL)
        return rightList;
    if (rightList == NULL)
        return leftList;
        
    // Store the last Node of left List 
    Node *leftLast = leftList->left;
    
    // Store the last Node of left List 
    Node *rightLast = rightList->left;
    
    // Store the last Node of left List 
    leftLast->right = rightList;
    rightList->left = leftLast;
    
    // Store the last Node of left List 
    leftList->left = rightLast;
    
    // Store the last Node of left List 
    rightLast->right = leftList;
    return leftList;
}

Node *bTreeToCList(Node *root)
{
    if (root == NULL)
        return NULL;
        
    Node *left = bTreeToCList(root->left);
    Node *right = bTreeToCList(root->right);
    
    // Make a circular linked list of single node 
    // (or root). To do so, make the right and 
    // left pointers of this node point to itself 
    root->left = root->right = root;
    
    // Step 1 (concatenate the left list with the list  
    //         with single node, i.e., current node) 
    // Step 2 (concatenate the returned list with the 
    //         right List) 
    return concatenate(concatenate(left, root), right);
}

