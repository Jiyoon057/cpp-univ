#include <iostream>
using namespace std;
int main()
{
	int score = 80;
	if (score >= 60)
	{
		cout << "합격입니다.\n";
		cout << "장학금도 받을 수 있습니다." << endl;
	}
	else
	{
		cout << "불합격입니다.\n";
		cout << "공부하세요." << endl;
	}
	
}