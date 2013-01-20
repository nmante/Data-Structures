#ifndef _QUEUE_HPP_
#define _QUEUE_HPP_

#include "Node.hpp"

class Queue
{
private:
	Node *front;
	Node *rear;

public:

	/*!
	 * \brief Default Queue Constructor
	 *
	 */
	Queue();

	/*!
	 * \brief Queue Destructor
	 *
	 * Need to remove each element one by one. There are two pointers maintained,
	 * the front Node and the rear Node. Must delete from front variable, while keeping track of
	 * next node so that we don't lose our Queue.  
	 * This can be done by calling our del function in a while loop.
	 *
	 * \sa Queue::del()
	 */
	~Queue();

	/*!
	 * \brief Function for removing a single Queue node
	 *
	 * The Queue::del() function removes the least recently
	 * added node on the Queue. It also simultaneously updates the pointer
	 * to the front and rear of the Queue.
	 *
	 * \return The data from the removed node.
	 */
	int del();

	/*!
	 * \brief add function for adding Queue variables
	 *
	 * The add function adds a new Queue node to the top of the Queue. 
	 *
	 * \param[in] data Data to be added to front of Queue. This data is wrapped by a Node.
	 * 
	 * \note To avoid Memory Allocation issues, if allocation fails (i.e. overflow)
	 	Queue::add() is returned from immediately.
	 */

	void add(int);


	/*!
	 * \brief A function to display the contents of the Queue.
	 * 
	 * This function iterates over and prints each node in the Queue.
	 * The first node printed is the top Node.
	 */
	void display();

};

#endif //_QUEUE_HPP_