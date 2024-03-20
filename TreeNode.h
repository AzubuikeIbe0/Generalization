#pragma once
#include <iostream>

template <typename T>
class TreeNode
{
    friend class BinaryTree; 
    friend class BinarySearchTree;
private:
    T data;
    TreeNode<T>* left;
    TreeNode<T>* right;

public:
    TreeNode(T val);
};


