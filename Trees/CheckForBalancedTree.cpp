int height(Node* node);
bool isBalanced(Node* root) 
{ 
   
    if (root == NULL) 
        return 1; 
  
   
    int lh = height(root->left); 
    int rh = height(root->right); 
  
    if (abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right)) 
        return 1; 
  
    return 0; 
} 

int height(Node* node) 
{ 
    
    if (node == NULL) 
        return 0; 
     
     return 1 + max(height(node->left), 
                   height(node->right)); 
} 
