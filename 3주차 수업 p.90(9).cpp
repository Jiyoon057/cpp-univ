#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "정수를 입력하시오: ";
	cin >> num;
	cout << "천의 자리: " << num / 1000 << endl;
	cout << "백의 자리: " << (num - (num / 1000) * 1000) / 100 << endl;
	cout << "십의 자리: " << (num - ((num / 1000) * 1000) - (((num - (num / 1000) * 1000) / 100) * 100)) / 10 << endl;
	cout << "일의 자리: " << (num - (num / 1000)*1000 - ((num - (num / 1000) * 1000) / 100)*100 - ((num - ((num / 1000) * 1000) - (((num - (num / 1000) * 1000) / 100) * 100)) / 10)*10 );
	return 0;
}