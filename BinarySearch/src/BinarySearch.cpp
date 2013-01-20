#include "BinarySearch.hpp"
#include "Node.hpp"


BinarySearchTree::BinarySearchTree()
{

}

BinarySearchTree::~BinarySearchTree()
{

}

//COME BACK TO THIS ONE!!!!!
BinaryNode * BinarySearchTree::insert(BinaryNode *bnode, int data)
{

	if(leaf == NULL)
	{
		BinaryNode *newNode = new BinaryNode(data);
		leaf = newNode;
		return newNode;
	}

	if(bnode == NULL)
	{
		BinaryNode *newNode = new BinaryNode(data);
		//leaf = newNode;
		return newNode;
	}
	
	Node *temp;
	if(data <= bnode->getData())
	{
		temp = bnode->getLeftChild();
		BinaryNode *newLeft = insert(temp, data);
		bnode->setLeftChild(newLeft);
	}else
	{
		temp = bnode->getRightChild();
		BinaryNode *newRight = insert(temp, data);
		bnode->setRightChild(newRight);
	}

	return bnode;

}

BinaryNode * BinarySearchTree::insert(BinaryNode *bnode, int data)
{
	
}

bool BinarySearchTree::lookup(BinaryNode *bnode, int data)
{
	if(bnode == NULL)
	{
		return false;
	}else{
		if(bnode->getData() == data){
			return true;
		}else{
			if (data <= bnode->getData())
			{
				return lookup(bnode->getLeftChild(), data);
			}else{
				return lookup(bnode->getRightChild(), data);
			}
			
		}
	}
}

void postOrderPrint()
{

}

void preOrderPrint()
{

}

void inOrderPrint()
{

}

