#include <iostream>
using namespace std;
int main()
{
	int number;
	cout << "������ �Է��Ͻÿ�: ";
	cin >> number;

	switch (number)
	{
	case 0: cout << "����\n"; break;
	case 1: cout << "�ϳ�\n"; break;
	case 2: cout << "��\n"; break;
	default: cout << "����\n"; break;
	}
}