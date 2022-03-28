#include <iostream>
using namespace std;
int main()
{
	int score = 85;
	
	if (score >= 90) cout << "합격: 학점 A" << endl;
	else if (score >= 80) cout << "합격: 학점 B" << endl;
	else if (score >= 70) cout << "합격: 학점 C" << endl;
	else if (score >= 60) cout << "합격: 학점 D" << endl;
	else cout << "불합격: 학점 F" << endl;

}