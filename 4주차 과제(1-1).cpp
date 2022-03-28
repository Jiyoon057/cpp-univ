#include <iostream>
using namespace std;
int main()
{
	int score;  // 정수형인 점수(변수명) 선언

	cout << "점수 (0~100)를 입력하세요 : ";  // 입력
	cin >> score;
	cout << "점수 : " << score << endl;

	if (score >= 90) cout << "학점 : A" << endl;  // 점수가 90점 이상이면 학점을 A라고 출력
	else if  (score >= 80) cout << "학점 : B" << endl;  // 점수가 90점 미만이고 80점 이상이면 학점을 B라고 출력
	else if (score >= 70) cout << "학점 : C" << endl;  // 점수가 80점 미만이고 70점 이상이면 학점을 C라고 출력
	else if (score >= 60) cout << "학점 : D" << endl;  // 점수가 70점 미만이고 60점 이상이면 학점을 D라고 출력
	else  cout << "학점 : F" << endl;  // 위의 경우가 모두 아니라면 학점은 F라고 출력

	return 0;
}