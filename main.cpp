#include <iostream>
#include <cmath>
#include <numbers>
#include <format>

using namespace std;

int main() {

	cout << "Programm counts all values of trygonometric functions" << endl;

	float x_deg;
	float x_rad;
	cout << "Enter please value of angle in degrees : ";
	cin >> x_deg;

	x_rad = x_deg / 180 * numbers::pi;
	

	cout << "|    x    |    cos(x)    |    sin(x)    |    tan(x)    |    ctg(x)    |" << endl;
	cout << format("|{:^9.1f}|{:^14.1f}|{:^14.1f}|{:^14.1f}|{:^14.1f}|", x_deg, cos(x_rad), sin(x_rad), tan(x_rad), 1 / tan(x_rad));




	return 0;
}