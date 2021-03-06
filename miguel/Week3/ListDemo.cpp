// ListDemo.cpp : Defines the entry point for the console application.
// See: https://www.tutorialspoint.com/cpp_standard_library/list.htm
// and  https://www.cs.usfca.edu/%7Egalles/visualization/Algorithms.html
// and  http://cathyatseneca.github.io/DSAnim/web/singlylinked.html
// and  http://www.cs.northwestern.edu/~riesbeck/programming/c++/stl-summary.html
//
#include <iostream>
#include <list>
#include <iterator>
#include <windows.h>

int main()
{
	std::list<int> listOfNumbers;

	//Inserting elements at end in list
	listOfNumbers.push_back(5);
	listOfNumbers.push_back(6);

	//Inserting elements at front in list
	listOfNumbers.push_front(2);
	listOfNumbers.push_front(1);

	// Iterating over list elements and display them
	std::list<int>::iterator it = listOfNumbers.begin();
	while (it != listOfNumbers.end())
	{
		std::cout << (*it) << "  ";
		it++;
	}
	std::cout << std::endl;
	Sleep(5000);

	//Inserting elements in between the list using
	// insert(pos,elem) member function. Let's iterate to
	// 3rd position
	it = listOfNumbers.begin();
	it++;
	it++;
	// Iterator 'it' is at 3rd position.
	listOfNumbers.insert(it, 4);


	// Iterating over list elements and display them
	it = listOfNumbers.begin();
	while (it != listOfNumbers.end())
	{
		std::cout << (*it) << "  ";
		it++;
	}
	std::cout << std::endl;
	Sleep(10000);

	//Erasing elements in between the list using
	// erase(position) member function. Let's iterate to
	// 3rd position
	it = listOfNumbers.begin();
	it++;
	it++;
	// Iterator 'it' is at 3rd position. Now erase this element.
	listOfNumbers.erase(it);


	// Iterating over list elements and display them
	it = listOfNumbers.begin();
	while (it != listOfNumbers.end())
	{
		std::cout << (*it) << "  ";
		it++;
	}
	std::cout << std::endl;
	Sleep(10000);

	//Lets remove all elements with value greater than 3. 
	listOfNumbers.remove_if([](int elem) { if (elem > 3)
		return true;
	else
		return false;
	});

	it = listOfNumbers.begin();
	while (it != listOfNumbers.end())
	{
		std::cout << (*it) << "  ";
		it++;
	}
	std::cout << std::endl;
	Sleep(10000);

	return 0;
}