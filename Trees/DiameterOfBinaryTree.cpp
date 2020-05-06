int go(Node* n, int* dia) {
    if (!n) return 0;

    int l = go(n->left, dia);  // height of left subtree
    int r = go(n->right, dia); // height of right subtree

    if (l + r + 1 > *dia) *dia = l + r + 1; // l+r+1 is a possible max dia

    return 1 + max(l, r); // returning height of subtree
}

int diameter(Node* node) {
    int dia = 0;
    go(node, &dia);
    return dia;
}
