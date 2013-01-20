#include "LinkedList.hpp"
#include <cstddef>
#include <iostream>


LinkedList::LinkedList()
{
	head = NULL;
	tail = NULL;
	length = 0;
}

LinkedList::~LinkedList()
{
	Node *temp = head;
	while(temp != NULL)
	{
		head = head->getLink();
		delete temp;
		temp = head;
		length--;
	}
	temp = NULL;
}

int LinkedList::removeHead()
{
	if(head == NULL)
	{
		std::cout << "LinkedList Empty!!" << std::endl;
		return -1;
	}
	Node *temp = head;
	head = head->getLink();
	int data = temp->getData();
	delete temp;
	temp = NULL;
	length--;

	return data;

}

void LinkedList::append(int data)
{
	if(head == NULL)
	{
		Node *newNode = new Node(data);
		newNode->setLink(NULL);
		head = newNode;
		length++;
		return;

	}

	Node *temp = head;
	while(true)
	{
		if(temp->getLink() == NULL)
		{
			Node *newNode = new Node(data);
			newNode->setLink(NULL);
			temp->setLink(newNode);
			length++;
			return;
		}
		temp = temp->getLink();
	}
}

void LinkedList::prepend(int data)
{
	Node *newNode = new Node(data);
	newNode->setLink(head);
	head = newNode;
	length++;
}

void LinkedList::insertAfter(int existData, int newData)
{
	if(head == NULL)
	{
		Node *newNode = new Node(newData);
		newNode->setLink(NULL);
		head = newNode;
		length++;
		return;
	}

	Node *temp = head;
	while(temp != NULL)
	{
		if(temp->getData() == existData)
		{
			Node *newNode = new Node(newData);
			newNode->setLink(temp->getLink());
			temp->setLink(newNode);
			length++;
			return;
		}
		temp = temp->getLink();
	}
}

int LinkedList::removeTail()
{
	/*
	 * Could use the length variable, but I want to implement
	 * it using pointers only.  Length is a debugging tool.
	 */
	if(head == NULL)
	{
		std::cout << "LinkedList Empty!!" << std::endl;
		return -1;
	}

	Node *current = head;
	Node *prev = NULL;
	while(current != NULL)
	{
		if(current->getLink() == NULL)
		{
			int data = current->getData();
			prev->setLink(NULL);
			delete current;
			length--;
			current = NULL;
			return data;
		}
		prev = current;
		current = current->getLink();
	}

	return -2;
}

void LinkedList::insertAtIndex(int index, int newData)
{
	if(index + 1 > length)
	{
		std::cout << "Index too large." << std::endl;
		return;
	}
	if(head == NULL)
	{
		Node *newNode = new Node(newData);
		newNode->setLink(NULL);
		head = newNode;
		length++;
		return;
	}

	Node *temp = head;
	Node *prev = NULL;
	int i = 0;
	while(temp != NULL)
	{
		if(i == index)
		{
			Node *newNode = new Node(newData);
			newNode->setLink(temp);
			prev->setLink(newNode);
			length++;
			return;
		}
		i++;
		prev = temp;
		temp = temp->getLink();
	}
}

void LinkedList::display()
{
	if(head == NULL)
	{
		std::cout << "LinkedList Empty!!" << std::endl;
		return;
	}

	Node *temp = head;
	while(temp != NULL)
	{
		if(temp == head)
		{
			std::cout << "HEAD ";;
		}
		std::cout << temp->getData() << std::endl;
		temp = temp->getLink();

	}
}


