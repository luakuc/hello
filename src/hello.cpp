//============================================================================
// Name        : hello.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class A {
	
	public :
	 int age;
	 int height;
	 A():age(20),height(173){}
	};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	int number ;
	cin  >> number;
	cout << "you are "<< number << endl;

	std::cout << number << endl;

	return 0;
}
