#include "BinarySearchTree.h"


template<typename T>

inline TreeNode<T>* BinarySearchTree<T>::InsertNodePrivate(TreeNode<T>* node, T value)
{
    if (node == nullptr) {
        return new TreeNode(value);
    }

    if (value < node->data) {
        node->left = InsertNodePrivate(node->left, value);
    }
    else {
        node->right = InsertNodePrivate(node->right, value);
    }

    return node;
}

template<typename T>
void BinarySearchTree<T>::InsertNode(T value)
{
    root = InsertNodePrivate(root, value);
        
}





