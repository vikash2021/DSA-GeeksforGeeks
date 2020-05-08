void bToDLL(Node *root, Node **head)
{
static Node *prev=NULL;
if(!root)return;
bToDLL(root->left,head);
if(!(*head))
*head=root;
else{
root->left=prev;
prev->right=root;
}
prev=root;
bToDLL(root->right,head);

}
