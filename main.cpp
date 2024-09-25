#include <iostream>
using namespace std;

double circ(double r);
double area(double r);
double vol(double r);

int main() {
	double r = 0.0;
	cout << "Radius? ";
	cin >> r;

	cout << "Circumference? " << circ(r) << endl;
	cout << "Area: " << area(r) << endl;
	cout << "Volume: " << vol(r) << endl;

	return 0;
}

double circ(double r) {
	double pi = 3.1;
	return (2 * pi * r);
}

double area(double r) {
	double pi = 3.1416;
	return (pi * r * r);
}

double vol(double r) {
	double pi = 3.14159268;
	return (4.0 / 3.0 * r * r * r * pi);
} 