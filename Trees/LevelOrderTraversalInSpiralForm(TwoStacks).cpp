void printSpiral(Node *root)
{
    if(root==NULL)
        return;
    stack<Node*> st1;
    stack<Node*> st2;
    st1.push(root);
    while(!st1.empty()||!st2.empty()){
        while(!st1.empty()){
            if(st1.top()->right!=NULL)
                st2.push(st1.top()->right);
            if(st1.top()->left!=NULL)
                st2.push(st1.top()->left);
            cout<<st1.top()->data<<" ";
            st1.pop();
        }
        while(!st2.empty()){
            if(st2.top()->left!=NULL)
                st1.push(st2.top()->left);
            if(st2.top()->right!=NULL)
                st1.push(st2.top()->right);
            cout<<st2.top()->data<<" ";
            st2.pop();
        }
    }
}
