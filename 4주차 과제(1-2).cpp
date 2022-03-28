#include <iostream>
using namespace std;
int main()
{
	int score;

	cout << "점수 (0~100)를 입력하세요 : ";  // 점수 입력
	cin >> score;
	cout << "점수 : " << score << endl;

	switch (score)  // switch 문
	{
	case 100: cout << "학점 : A\n"; break;  // 점수가 90점 이상이면 학점을 A라고 출력
	case 99: cout << "학점 : A\n"; break;
	case 98: cout << "학점 : A\n"; break;
	case 97: cout << "학점 : A\n"; break;
	case 96: cout << "학점 : A\n"; break;
	case 95: cout << "학점 : A\n"; break;
	case 94: cout << "학점 : A\n"; break;
	case 93: cout << "학점 : A\n"; break;
	case 92: cout << "학점 : A\n"; break;
	case 91: cout << "학점 : A\n"; break;
	case 90: cout << "학점 : A\n"; break;

	case 89: cout << "학점 : B\n"; break;  // 점수가 80점 이상, 89점 이하면 학점을 B라고 출력
	case 88: cout << "학점 : B\n"; break;
	case 87: cout << "학점 : B\n"; break;
	case 86: cout << "학점 : B\n"; break;
	case 85: cout << "학점 : B\n"; break;
	case 84: cout << "학점 : B\n"; break;
	case 83: cout << "학점 : B\n"; break;
	case 82: cout << "학점 : B\n"; break;
	case 81: cout << "학점 : B\n"; break;
	case 80: cout << "학점 : B\n"; break;

	case 79: cout << "학점 : C\n"; break;  // 점수가 70점 이상, 79점 이하면 학점을 C라고 출력
	case 78: cout << "학점 : C\n"; break;
	case 77: cout << "학점 : C\n"; break;
	case 76: cout << "학점 : C\n"; break;
	case 75: cout << "학점 : C\n"; break;
	case 74: cout << "학점 : C\n"; break;
	case 73: cout << "학점 : C\n"; break;
	case 72: cout << "학점 : C\n"; break;
	case 71: cout << "학점 : C\n"; break;
	case 70: cout << "학점 : C\n"; break;

	case 69: cout << "학점 : D\n"; break;  // 점수가 60점 이상, 69점 이하면 학점을 D라고 출력
	case 68: cout << "학점 : D\n"; break;
	case 67: cout << "학점 : D\n"; break;
	case 66: cout << "학점 : D\n"; break;
	case 65: cout << "학점 : D\n"; break;
	case 64: cout << "학점 : D\n"; break;
	case 63: cout << "학점 : D\n"; break;
	case 62: cout << "학점 : D\n"; break;
	case 61: cout << "학점 : D\n"; break;
	case 60: cout << "학점 : D\n"; break;

	default: cout << "학점 : F\n"; break;  // 위의 모든 경우에 해당되지 않는다면 학점을 F라고 출력

	}
}