#include <iostream>
using namespace std;
int main()
{
	double a, b, c, d;
	cout << "컴퓨터 개론 과목의 점수를 입력하시오: ";
	cin >> a;
	cout << "C언어 프로그래밍 과목의 점수를 입력하시오: ";
	cin >> b;
	cout << "영어 과목의 점수를 입력하시오: ";
	cin >> c;
	cout << "일반 수학 과목의 점수를 입력하시오: ";
	cin >> d;
	cout << "평균 점수는 " << (a + b + c + d) / 4 << "입니다.";
	return 0;
}