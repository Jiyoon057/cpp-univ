#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "������ �Է��Ͻÿ�: ";
	cin >> num;
	cout << "õ�� �ڸ�: " << num / 1000 << endl;
	cout << "���� �ڸ�: " << (num - (num / 1000) * 1000) / 100 << endl;
	cout << "���� �ڸ�: " << (num - ((num / 1000) * 1000) - (((num - (num / 1000) * 1000) / 100) * 100)) / 10 << endl;
	cout << "���� �ڸ�: " << (num - (num / 1000)*1000 - ((num - (num / 1000) * 1000) / 100)*100 - ((num - ((num / 1000) * 1000) - (((num - (num / 1000) * 1000) / 100) * 100)) / 10)*10 );
	return 0;
}