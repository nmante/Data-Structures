/*! \file main.cpp
 * \brief Test Suite for classic Data Structures.
 * \author Nii Mante
 * \date 10/28/2012
 *
 */

#include "TestSuite.hpp"
#include <iostream>


int main(int argc, char *argv[])
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Welcome to the Test Suite for Data Structures" << std::endl;

	StackTest();
	QueueTest();
	BinarySearchTest();
	LinkedListTest();



	return 0;
}