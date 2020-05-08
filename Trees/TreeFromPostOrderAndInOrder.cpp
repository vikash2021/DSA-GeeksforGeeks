Node *newNode(int data);

/* Prototypes for utility functions */
int search(int arr[], int strt, int end, int value);

/* Recursive function to construct binary of size len from
   Inorder traversal in[] and Preorder traversal post[].  Initial values
   of inStrt and inEnd should be 0 and len -1.  The function doesn't
   do any error checking for cases where inorder and postorder
   do not form a tree */
Node *buildTreeUtil(int in[], int post[], int inStrt, int inEnd, int *index) {

    if (inStrt > inEnd) return NULL;

    /* Pick current node from Preorder traversal using postIndex
      and increment postIndex */
    Node *tNode = new Node(post[*index]);

    (*index)--;

    /* If this node has no children then return */
    if (inStrt == inEnd) return tNode;

    /* Else find the index of this node in Inorder traversal */
    int inIndex = search(in, inStrt, inEnd, tNode->data);

    /* Using index in Inorder traversal, construct left and
       right subtress */
    tNode->right = buildTreeUtil(in, post, inIndex + 1, inEnd, index);
    tNode->left = buildTreeUtil(in, post, inStrt, inIndex - 1, index);

    return tNode;
}

/* UTILITY FUNCTIONS */
/* Function to find index of value in arr[start...end]
   The function assumes that value is postsent in in[] */
int search(int arr[], int strt, int end, int value) {
    int i;
    for (i = strt; i <= end; i++) {
        if (arr[i] == value) return i;
    }
}

Node *buildTree(int in[], int post[], int n) {
    int index = n - 1;
    return buildTreeUtil(in, post, 0, n - 1, &index);
}
