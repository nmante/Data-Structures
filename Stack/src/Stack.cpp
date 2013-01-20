/*! \file Stack.cpp
 * \brief Implementation for a simple Stack class
 * \author Nii Mante
 * \date 10/28/2012
 *
 */

#include "Stack.hpp"
#include <cstddef>
#include <iostream>

 

Stack::Stack()
{
	top = NULL;
}


Stack::~Stack()
{
	
	if(top == NULL)
	{
		return;
	}
	Node *temp;
	while(top != NULL)
	{
		temp = top;
		top = top->getLink();
		delete temp;
	}

}


int Stack::pop()
{
	if(top == NULL)
	{
		return -1;
	}
	Node *retN = top;
	top = top->getLink();
	int data = retN->getData();
	delete retN;
	retN = NULL;

	return data;
}


void Stack::push(int data)
{
	Node *newN = new Node(data);
	if(newN == NULL)
	{
		std::cerr << "Stack full" << std::endl;
		return;
	}

	//Node *newNext = newN->getLink();
	newN->setLink(top);
	top = newN;
	



}

void Stack::display()
{
	if(top == NULL)
	{
		std::cout << "Stack Empty!!" << std::endl;
		return;
	}

	int i = 0;
	
	Node *temp = top;
	while (temp != NULL)
	{
		
		if(i == 0)
			std::cout << "TOP ";

		std::cout << temp->getData() << std::endl;
		temp = temp->getLink();
		i++;
	}
}
