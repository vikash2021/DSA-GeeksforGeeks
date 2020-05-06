void convert(Node *head, TreeNode *&root) {
    queue<TreeNode *> q;
    if (head == NULL) {
        root = NULL;
        return;
    }
    root = new TreeNode(head->data);
    q.push(root);
    head = head->next;
    while (head) {
        TreeNode *k = q.front();
        q.pop();
        TreeNode *leftT = NULL;
        TreeNode *rightT = NULL;
        leftT = new TreeNode(head->data);

        q.push(leftT);
        head = head->next;
        if (head) {
            rightT = new TreeNode(head->data);
            q.push(rightT);
            head = head->next;
        }
        k->left = leftT;
        k->right = rightT;
    }
}
