#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

// This program will demonstrate 
// how Passing by Value, Pointer, and Reference
// are different via arbitrary Desk Structure
using namespace std;

struct Desk
{
	int id;
	string name;
};

void printDesk(Desk d) {
	d.id = 15;
	d.name = "Shady";

	cout << "Print Desk" << endl;
	cout << d.id << endl;
	cout << d.name << endl;
	cout << endl;
}

void printDesk2(Desk* d) {
	d->id = 45;
	d->name = "Poopy";

	cout << "Print Desk" << endl;
	cout << d->id << endl;
	cout << d->name << endl;
	cout << endl;
}

void printDesk3(Desk& d) {
	d.id = 36;
	d.name = "Kalli";

	cout << "Print Desk" << endl;
	cout << d.id << endl;
	cout << d.name << endl;
	cout << endl;
}

int main(void) {


	Desk s;
	Desk* sPtr = &s;
	s.id = 12;
	s.name = "happy";

	// pass by value
	printDesk(s);

	cout << "Main" << endl;
	cout << s.id << endl;
	cout << s.name << endl;
	cout << endl;

	// pass by pointer
	printDesk2(&s);

	cout << "Main" << endl;
	cout << s.id << endl;
	cout << s.name << endl;
	cout << endl;

	// pass by reference
	printDesk3(s);

	cout << "Main" << endl;
	cout << s.id << endl;
	cout << s.name << endl;
	cout << endl;

	system("PAUSE");
	return 0;
}