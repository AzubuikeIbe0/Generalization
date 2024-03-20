#include "BinarySearchTree.h"
#include "BinaryTree.h"
#include "TreeNode.h"
#include <iostream>

using namespace std;

template <typename T>
BinaryTree<T>::BinaryTree() : root(nullptr) {}

template <typename T>
void BinaryTree<T>::AddToLeft(TreeNode<T>* current, TreeNode<T>* node) {
    current->left = node;
}

template <typename T>
void BinaryTree<T>::AddToRight(TreeNode<T>* current, TreeNode<T>* node) {
    current->right = node;
}
