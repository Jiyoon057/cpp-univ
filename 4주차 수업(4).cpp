#include <iostream>
using namespace std;
int main()
{
	const int RATE = 10000;
	int pay, hours;

	cout << "�ð��� �Է��ϼ���.: ";
	cin >> hours;

	if (hours > 8) pay = RATE * 8 + (int)(1.5 * RATE * (hours - 8));
	else pay = RATE * hours;
	cout << "�ӱ��� " << pay << "�Դϴ�.";
}