#include "BinarySearch.hpp"
#include "BinaryNode.hpp"
#include <iostream>

using namespace std;

BinarySearchTree::BinarySearchTree() : root(NULL)
{
	
}

BinarySearchTree::~BinarySearchTree()
{
	root = NULL;
}

void BinarySearchTree::insert(int data)
{
	BinaryNode *leaf = new BinaryNode(data);
	if(root == NULL)
	{
		root = leaf;
		return;
	}
	BinaryNode *current = root;
	BinaryNode *parent;
	while(current != NULL)
	{
		parent = current;
		if(data <= current->getData())
		{
			current = current->getLeftChild();
			
		}else
		{
			current = current->getRightChild();
			
		}
	}

	//current = leaf;
	if(leaf->getData() <= parent->getData())
		parent->setLeftChild(leaf);
	else
		parent->setRightChild(leaf);

	
}


bool BinarySearchTree::lookup(int data)
{
	if (root == NULL)
	{
		return false;
	}
	BinaryNode *current = root;
	BinaryNode *parent;
	while (current != NULL)
	{
		if (current->getData() == data)
		{
			return true;
		}

		if(data < current->getData())
		{
			current = current->getLeftChild();
		}else{
			current = current->getRightChild();
		}
	}

	return false;
}

void BinarySearchTree::postOrderPrint()
{
	std::cout << "Post Order Print" << std::endl;
	postOrder(root);
	std::cout << std::endl;

}

void BinarySearchTree::postOrder(BinaryNode *node)
{
	if(node == NULL)
		return;
	if(node->getLeftChild() != NULL)
		postOrder(node->getLeftChild());
	if(node->getRightChild() != NULL)
		postOrder(node->getRightChild());

	std::cout << " " << node->getData() << " ";

}

void BinarySearchTree::preOrderPrint()
{
	std::cout << "Pre Order Print" << std::endl;
	preOrder(root);
	std::cout << std::endl;

}

void BinarySearchTree::preOrder(BinaryNode *node)
{
	if (node == NULL)
		return;
	
	std::cout << " " << node->getData() << " ";

	if (node->getLeftChild() != NULL)
		inOrder(node->getLeftChild());	

	if (node->getRightChild() != NULL)
		inOrder(node->getRightChild());
}

void BinarySearchTree::inOrderPrint()
{
	std::cout << "In Order Print" << std::endl;
	inOrder(root);
	std::cout << std::endl;

}

void BinarySearchTree::inOrder(BinaryNode *node)
{
	if (node == NULL)
		return;
	
	
	if (node->getLeftChild() != NULL)
		inOrder(node->getLeftChild());	

	std::cout << " " << node->getData() << " ";

	if (node->getRightChild() != NULL)
		inOrder(node->getRightChild());	

}