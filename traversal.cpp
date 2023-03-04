#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int value;       // value stored in node of tree
    TreeNode *left;  // pointer to left child of node
    TreeNode *right; // pointer to right child of node

    TreeNode() // default constructor
    {
        value = 0;
        left = NULL;
        right = NULL;
    }

    TreeNode(int v) // parameterised constructor
    {
        value = v;
        left = NULL;
        right = NULL;
    }
};

class BST
{
public:
    TreeNode *root;

    BST() //default constructor
    {
        root = NULL;
    }

    void insertNode(TreeNode *new_node) // function to insert nodes in the BST
    {
        if (root == NULL) // checking if tree is empty
        {
            root = new_node;
            cout << "Value inserted as the root node" << endl;
        }
        else
        {
            TreeNode *temp = root; // temporary pointer to address of root node
            while (temp != NULL)
            {
                if (new_node->value == temp->value) // checking if the value of node is a duplicate
                {
                    cout << "Value already exists, "
                         << "enter another value" << endl;
                    return;
                }
                else if ((new_node->value < temp->value) && (temp->left == NULL)) // checking if the value of node to be inserted is lesser than value of current node and if left child of current node is not there, then new node can be inserted as left child
                {
                    temp->left = new_node;
                    cout << "Value inserted" << endl;
                    break;
                }
                else if (new_node->value < temp->value) // checking if the value of node to be inserted is lesser than value of current node and if left child of current node is there, current node is shifted to left child
                {
                    temp = temp->left;
                }
                else if ((new_node->value > temp->value) && (temp->right == NULL)) // checking if the value of node to be inserted is greater than value of current node and if right child of current node is not there, then new node can be inserted as right child
                {
                    temp->right = new_node;
                    cout << "Value inserted" << endl;
                    break;
                }
                else // checking if the value of node to be inserted is greater than value of current node and if right child of current node is there, current node is shifted to right child
                {
                    temp = temp->right;
                }
            }
        }
    }

    void printPreOrder(TreeNode *r) //function to carry out pre-order traversal of the tree
    {
        if (r == NULL) //base condition
            return;
        cout << r->value << " ";
        printPreOrder(r->left); //recursive call to function with left child of current node as argument
        printPreOrder(r->right); //recursive call to function with right child of current node as argument
    }

    void printInOrder(TreeNode *r) //function to carry out in-order traversal of the tree
    {
        if (r == NULL) //base condition
            return;
        printInOrder(r->left); //recursive call to function with left child of current node as argument
        cout << r->value << " ";
        printInOrder(r->right); //recursive call to function with right child of current node as argument
    }

    void printPostOrder(TreeNode *r) //function to carry out post-order traversal of the tree
    {
        if (r == NULL) //base condition
            return;
        printPostOrder(r->left); //recursive call to function with left child of current node as argument
        printPostOrder(r->right); //recursive call to function with right child of current node as argument
        cout << r->value << " ";
    }
};

int main()
{
    int val;
    BST obj;
    for (int i = 0; i < 10; i++)
    {
        TreeNode *new_node = new TreeNode();
        cout << "Enter element:" << endl;
        cin >> val;
        new_node->value = val;
        obj.insertNode(new_node);
    }
    cout << "Preorder Traversal of tree: ";
    obj.printPreOrder(obj.root);
    cout << endl;
    cout << "Inorder Traversal of tree: ";
    obj.printInOrder(obj.root);
    cout << endl;
    cout << "Postorder Traversal of tree: ";
    obj.printPostOrder(obj.root);
    cout << endl;
    return 0;
}