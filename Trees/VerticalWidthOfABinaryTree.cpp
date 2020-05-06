void lengthUtil(Node* root, int &maximum, int &minimum, int curr)
{
    // base case
	if (root == NULL)return;
	
	// traverse for left
	lengthUtil(root->left, maximum, minimum, curr - 1);
	
	// update maximum and minimum
	if (minimum > curr)minimum = curr;
	if (maximum < curr)maximum = curr;
	
	// traverse for right
	lengthUtil(root->right, maximum, minimum, curr + 1);
}

int verticalWidth(Node* root)
{
    if (!root) {
        return 0;
    }
	int maximum = 0, minimum = 0;
	lengthUtil(root, maximum, minimum, 0);
	return (abs(minimum) + maximum) + 1;
}
