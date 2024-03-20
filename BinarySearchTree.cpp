#include "BinarySearchTree.h"
#include "BinaryTree.h"
#include "TreeNode.h"


template <typename T>
BinarySearchTree<T>::BinarySearchTree() : BinaryTree<T>()
{

}

template <typename T>
TreeNode<T>* BinarySearchTree<T>::InsertNodePrivate(TreeNode<T>* node, T value)
{
    if (node == nullptr) {
        return new TreeNode<T>(value); // Specify the template parameter <T>
    }

    if (value < node->data) {
        node->left = InsertNodePrivate(node->left, value);
    }
    else {
        node->right = InsertNodePrivate(node->right, value);
    }

    return node;
}

template <typename T>
void BinarySearchTree<T>::InsertNode(T value)
{
    root = InsertNodePrivate(root, value);
}




