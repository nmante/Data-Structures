/*! \file Stack.hpp
 * \brief Interface for a simple Stack class
 * \author Nii Mante
 * \date 10/28/2012
 *
 */

#ifndef _STACK_HPP_
#define _STACK_HPP_

#include "Node.hpp"


/*!
 * \class Stack
 *
 * \brief Interface for a simple Stack class.
 *
 * This is the interface for a simple stack class.
 * The class utilizes the \class Node class as stack objects.
 * Thus, the stack is implemented as a Linked List.
 *
 */

class Stack
{

private:
	Node *top; //< Pointer to the top of the Stack


public:
	/*!
	 * \brief Default Stack Constructor
	 *
	 */
	Stack();

	/*!
	 * \brief Stack Destructor
	 *
	 * Need to remove each element one by one. The only pointer maintained
	 * is the top Node. Must delete top variable, while keeping track of
	 * next node so that we don't lose our stack.  
	 * This can be done by calling our pop function in a while loop.
	 *
	 * \sa Stack::pop()
	 */
	~Stack();

	/*!
	 * \brief Function for removing a single stack node
	 *
	 * The Stack::pop() function removes the most recently
	 * added node on the stack. It also simultaneously updates the pointer
	 * to the top of the stack.
	 *
	 * \return The data from the removed node.
	 */
	int pop();

	/*!
	 * \brief Push function for adding stack variables
	 *
	 * The push function adds a new stack node to the top of the stack. 
	 *
	 * \param[in] data Data to be added to top of stack. This data is wrapped by a Node.
	 * 
	 * \note To avoid Memory Allocation issues, if allocation fails (i.e. overflow)
	 	Stack::push() is returned from immediately.
	 */
	void push(int);


	/*!
	 * \brief A function to display the contents of the stack.
	 * 
	 * This function iterates over and prints each node in the stack.
	 * The first node printed is the top Node.
	 */
	void display();


};


#endif //_STACK_HPP_