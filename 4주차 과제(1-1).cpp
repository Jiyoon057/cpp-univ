#include <iostream>
using namespace std;
int main()
{
	int score;  // �������� ����(������) ����

	cout << "���� (0~100)�� �Է��ϼ��� : ";  // �Է�
	cin >> score;
	cout << "���� : " << score << endl;

	if (score >= 90) cout << "���� : A" << endl;  // ������ 90�� �̻��̸� ������ A��� ���
	else if  (score >= 80) cout << "���� : B" << endl;  // ������ 90�� �̸��̰� 80�� �̻��̸� ������ B��� ���
	else if (score >= 70) cout << "���� : C" << endl;  // ������ 80�� �̸��̰� 70�� �̻��̸� ������ C��� ���
	else if (score >= 60) cout << "���� : D" << endl;  // ������ 70�� �̸��̰� 60�� �̻��̸� ������ D��� ���
	else  cout << "���� : F" << endl;  // ���� ��찡 ��� �ƴ϶�� ������ F��� ���

	return 0;
}