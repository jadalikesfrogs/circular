#include <iostream>
using namespace std;

double circ(double r);
double area(double r);
double vol(double r);
//this is a global constant, the value of this cannot be changed 
// use all caps for constants
const double PI = 3.14159;
int main() {
	double r = 0.0;
	cout << "Radius? ";
	cin >> r;

	cout << "Circumference? " << circ(r) << endl;
	cout << "Area: " << area(r) << endl;
	cout << "Volume: " << vol(r) << endl;
	// brand new "i" for purpose of the loop 
	// after it's done using i, goess back to what it was before aka 5.
	//variables are redined inside of this block.
	int i = 5;
	cout << "Block block i = " << i << endl;
	for (int i = 1; i < 10; i++) {
		cout << "In block i = " << i << endl;
	}
	cout << "After block i = " << i << endl;

	return 0;
}
// using scope you can reuse the same variable names (ex: pi)
double circ(double r) {
	
	return (2 * PI * r);
}

double area(double r) {
	
	return (PI * r * r);
}

double vol(double r) {
	// you can overwrite global constants
	double PI = 3.1;
	return (4.0 / 3.0 * r * r * r * PI);
} 