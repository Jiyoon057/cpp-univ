#include <iostream>
using namespace std;
int main()
{
	int A, B, C;  // 정수 A,B,C

	cout << "첫 번째 정수를 입력하세요 : ";  // 정수 입력
	cin >> A;
	cout << "두 번째 정수를 입력하세요 : ";
	cin >> B;
	cout << "세 번째 정수를 입력하세요 : ";
	cin >> C;

	if (A > B)  // A > B가 참이면 아래 블록 실행
	{
		if (A > C) cout << "가장 큰 값은 " << A << "입니다.\n";  // A > C라면 A가 B,C보다 더 큼
		else cout << "가장 큰 값은 " << C << "입니다.\n";  // A > C가 아니라면(즉, C > A > B) C가 가장 크다
	}
	else  // A > B가 거짓(즉, B > A)이면 아래 블록 실행
	{
		if (B > C) cout << "가장 큰 값은 " << B << "입니다.\n";  // B > C라면 B가 A,C보다 더 큼
		else cout << "가장 큰 값은 " << C << "입니다.\n";  // B > C가 아니라면(즉, C > B > A) C가 가장 크다
	}
}