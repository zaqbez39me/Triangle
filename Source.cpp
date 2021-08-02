#include <iostream>
#include <cmath>
using namespace std;

double leng(int px, int py, int gx, int gy) {
	return sqrt(pow(gx - px, 2) + pow(gy - py, 2));
}

int main() {
	int ax, ay, bx, by, cx, cy;
	cin >> ax >> ay >> bx >> by >> cx >> cy;
	double a = leng(ax, ay, bx, by), b = leng(ax, ay, cx, cy), c = leng(cx, cy, bx, by);
	cout << a << b << c;

	if (a + b > c && a + c > b && b + c > a) {
		cout << "Exist";	
	}
	else {
		cout << "Not exist";
	}

}