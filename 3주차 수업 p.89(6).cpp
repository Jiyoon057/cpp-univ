#include <iostream>
using namespace std;
int main()
{
	double w;
	cout << "무게를 입력하시오: ";
	cin >> w;
	cout << w << "킬로그램은 " << w * 2.2 << "파운드입니다." << endl;
	cout << w << "킬로그램은 " << w * 2.2 * 16 << "온스입니다.";
	return 0;
}