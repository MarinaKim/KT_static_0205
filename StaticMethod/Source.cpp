#include"Student.h"
int Students::std_count;

void example() {
	static int n; /*����� ������ �������, n, �� ��������,
	�� �������� ������ ��� ����� ������.
	������������� ���������� ������ � ����� ������,
	��� ��������� ���������-������������*/
	n += 10;
	cout << n << endl;
}

int main() {
	int n;
	cout << "Enter number of test:";
	cin >> n;
	switch (n) {

	case 1: {
		Students::init();
		Students s;
		Students s1("name", "surname");
		cout << Students::get_count() << endl;
	}break;

	case 2: {
		example();
		example();

	}break;
	}

	system("pause");
	return 0;
}