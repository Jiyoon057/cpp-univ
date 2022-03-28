#include <iostream>
using namespace std;
int main()
{
	int income, tax;

	cout << "과세 표준 금액을 입력하세요: ";
	cin >> income;

	if (income <= 1000) tax = (int)(0.09 * income);
	else if (income <= 4000) tax = (int)(0.18 * income);
	else if (income < 8000) tax = (int)(0.27 * income);

}