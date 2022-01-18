#include <iostream>

using namespace std;

int x;

int& setX();

int main()
{
	setX() = 92;
	cout << "x = " << x << endl;

	system("pause");
	return 0;
}

int& setX()
{
	return x;
}