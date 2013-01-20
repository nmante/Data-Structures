#include "Node.hpp"
#include <cstddef>

Node::Node(int initData)
{
	data = initData;
}

Node::~Node()
{
	link = NULL;
}

Node::Node(int initData, Node *node)
{
	data = initData;
	link = node;
}

