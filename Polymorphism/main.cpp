#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <stdarg.h>

// This program how to use polymorphism to take in 
// two or three arguments to a max min add and multiply functions
using namespace std;

int maxInteger(int x, int y) {
	int max = x;
	if (y > max) {
		max = y;
	}
	return max;
};

int maxInteger(int x, int y, int z) {
	int max = x;
	if (y > max) {
		max = y;
	}
	if (z > max) {
		max = z;
	}
	return max;	
};

int maxIntegerVariable(int n_args, ...)
{
	va_list ap;
	va_start(ap, n_args);
	int max = va_arg(ap, int);
	for (int i = 2; i <= n_args; i++) {
		int a = va_arg(ap, int);
		if (a > max) max = a;
	}
	va_end(ap);
	return max;
};

int main(void) {

	int a = 4;
	int b = 5;
	int c = 7;
	int d = 12;
	int e = 2;

	cout << maxInteger(a, b) << endl;
	cout << maxInteger(a, b, c) << endl;
	cout << maxIntegerVariable(a, b, c, d, e) << endl;
	

	system("PAUSE");
	return 0;
}