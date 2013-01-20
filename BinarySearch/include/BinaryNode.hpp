#ifdef _BINARYNODE_HPP_
#define _BINARYNODE_HPP_


#include "Node.hpp"

/*!
 * \class BinaryNode
 *
 * \brief Interface for a simple BinaryNode.
 *
 * This is the interface for a binary node. The binary
 * node inherits from a Node object.  Members added to 
 * the BinaryNode are isRoot, leftChild, rightChild
 *
 */

class BinaryNode : public Node
{
private:
	//< Inherits int data from Node

	BinaryNode *leftChild;
	BinaryNode *rightChild;

public:
	//< Inherits int getData() from Node 


	BinaryNode() : leftChild(NULL), rightChild(NULL)
	{}

	BinaryNode(int data) 
	: Node(data), leftChild(NULL), rightChild(NULL)
	{}

	~BinaryNode()
	{
		leftChild = NULL;
		rightChild = NULL;
	}
	BinaryNode *getLeftChild() { return leftChild; }
	BinaryNode *getRightChild() { return rightChild; }

	void setLeftChild(BinaryNode *node) { leftChild = node; }
	void setRightChild(BinaryNode *node) { rightChild = node; }



};

#endif _BINARYNODE_HPP_