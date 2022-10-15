

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, c, x1, x2, d;
	cin >> a;
	cin >> b;
	cin >> c;

	d = b * b - 4 * a * c;
	if (d > 0) {
		x1 = ((-b) + sqrt(d)) / (2 * a);
		x2 = ((-b) - sqrt(d)) / (2 * a);
		cout << "x1 = " << x1 << "\n";
		cout << "x2 = " << x2 << "\n";
	}
	if (d == 0); {
		x1 = -(b / (2 * a));
		cout << "x1 = x2 = " << x1 << "\n";
	}
	if (d < 0); {
		cout << "d<0=>Корней нет ";
	}
}
