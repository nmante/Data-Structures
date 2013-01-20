#include "Queue.hpp"
#include "Node.hpp"
#include <cstddef>
#include <iostream>

Queue::Queue()
{
	front = NULL;
	rear = NULL;
}

Queue::~Queue()
{
	while(front != NULL)
	{
		Node *temp = front;
		front = front->getLink();
		int data = temp->getData();
		delete temp;
	}

}

int Queue::del()
{
	if(front == NULL)
	{
		return -1;
	}
	Node *temp = front;
	front = front->getLink();
	int data = temp->getData();
	delete temp;

	return data;

}

void Queue::add(int initData)
{
	if(front == NULL)
	{
		front = new Node(initData);
		front->setLink(rear);
		rear = front;
		return;
	}

	Node *newNode = new Node(initData);
	rear->setLink(newNode);
	newNode->setLink(NULL);
	rear = newNode;

}

void Queue::display()
{
	Node *temp = front;
	while(temp != NULL)
	{
		if(temp == front)
		{
			std::cout << "FRONT " << std::endl;
		}

		std::cout << temp->getData() << std::endl;
		temp = temp->getLink();
	}
}

