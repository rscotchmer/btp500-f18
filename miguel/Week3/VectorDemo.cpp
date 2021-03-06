// VectorDemo.cpp : Defines the entry point for the console application.
// See: https://www.tutorialspoint.com/cpp_standard_library/vector.htm
//

#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

int main() {

	// create a vector to store int
	vector<int> vec;
	int i;

	// display the original size of vec
	cout << "vector size = " << vec.size() << endl;
	Sleep(3000);

	// push 5 values into the vector
	for (i = 0; i < 5; i++) {
		vec.push_back(i*10);
	}

	// display extended size of vec
	cout << "extended vector size = " << vec.size() << endl;
	Sleep(3000);

	// access 5 values from the vector
	for (i = 0; i < 5; i++) {
		cout << "value of vec [" << i << "] = " << vec[i] << endl;
		Sleep(1000);
	}

	// use iterator to access the values
	vector<int>::iterator v = vec.begin();
	while (v != vec.end()) {
		cout << "value of v = " << *v << endl;
		Sleep(1000);
		v++;
	}

	Sleep(5000);
	return 0;
}

