#include <iostream>
using namespace std;
int main()
{
	int score;

	cout << "���� (0~100)�� �Է��ϼ��� : ";  // ���� �Է�
	cin >> score;
	cout << "���� : " << score << endl;

	switch (score)  // switch ��
	{
	case 100: cout << "���� : A\n"; break;  // ������ 90�� �̻��̸� ������ A��� ���
	case 99: cout << "���� : A\n"; break;
	case 98: cout << "���� : A\n"; break;
	case 97: cout << "���� : A\n"; break;
	case 96: cout << "���� : A\n"; break;
	case 95: cout << "���� : A\n"; break;
	case 94: cout << "���� : A\n"; break;
	case 93: cout << "���� : A\n"; break;
	case 92: cout << "���� : A\n"; break;
	case 91: cout << "���� : A\n"; break;
	case 90: cout << "���� : A\n"; break;

	case 89: cout << "���� : B\n"; break;  // ������ 80�� �̻�, 89�� ���ϸ� ������ B��� ���
	case 88: cout << "���� : B\n"; break;
	case 87: cout << "���� : B\n"; break;
	case 86: cout << "���� : B\n"; break;
	case 85: cout << "���� : B\n"; break;
	case 84: cout << "���� : B\n"; break;
	case 83: cout << "���� : B\n"; break;
	case 82: cout << "���� : B\n"; break;
	case 81: cout << "���� : B\n"; break;
	case 80: cout << "���� : B\n"; break;

	case 79: cout << "���� : C\n"; break;  // ������ 70�� �̻�, 79�� ���ϸ� ������ C��� ���
	case 78: cout << "���� : C\n"; break;
	case 77: cout << "���� : C\n"; break;
	case 76: cout << "���� : C\n"; break;
	case 75: cout << "���� : C\n"; break;
	case 74: cout << "���� : C\n"; break;
	case 73: cout << "���� : C\n"; break;
	case 72: cout << "���� : C\n"; break;
	case 71: cout << "���� : C\n"; break;
	case 70: cout << "���� : C\n"; break;

	case 69: cout << "���� : D\n"; break;  // ������ 60�� �̻�, 69�� ���ϸ� ������ D��� ���
	case 68: cout << "���� : D\n"; break;
	case 67: cout << "���� : D\n"; break;
	case 66: cout << "���� : D\n"; break;
	case 65: cout << "���� : D\n"; break;
	case 64: cout << "���� : D\n"; break;
	case 63: cout << "���� : D\n"; break;
	case 62: cout << "���� : D\n"; break;
	case 61: cout << "���� : D\n"; break;
	case 60: cout << "���� : D\n"; break;

	default: cout << "���� : F\n"; break;  // ���� ��� ��쿡 �ش���� �ʴ´ٸ� ������ F��� ���

	}
}