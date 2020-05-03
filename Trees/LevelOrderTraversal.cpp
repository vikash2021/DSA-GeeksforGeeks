void levelOrder(Node* node)
{
  //Your code here
  
  if(node==NULL)
  return;
  
  queue <Node*> q;
  q.push(node);
  while(q.empty()==false)
  {
      int count=q.size();
      for(int i=0;i<count;i++)
      {
          Node *curr=q.front();
          q.pop();
          cout<<(curr->data)<<" ";
          if(curr->left!=NULL)q.push(curr->left);
          if(curr->right!=NULL)q.push(curr->right);
      }
  }
}
