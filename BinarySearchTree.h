#pragma once
#include "BinaryTree.h"

template <typename T>
class BinarySearchTree : public BinaryTree<T> 
{

private:
    TreeNode<T>* InsertNodePrivate(TreeNode<T>* node, T value);

public:
    void InsertNode(T value);
};

