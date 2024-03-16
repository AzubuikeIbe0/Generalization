#pragma once
#include "TreeNode.h"
template <typename T>

class BinaryTree
{
	friend class TreeNode;
protected:
	TreeNode<T>* root;
public:
	BinaryTree();
	void AddToLeft(TreeNode<T>* current, TreeNode<T>* node);
	void AddToRight(TreeNode<T>* current, TreeNode<T>* node);
};
