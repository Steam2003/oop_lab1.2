#include "�����_�������.h"
void �����_�������::soutPos() const
{
    int x;
	cout << "������ ������� �����: "; cin >> x;
	if (x > 0 && x < 101 && x <= strlen(str))
		cout << "\"" << str[x - 1] << "\"" << endl;
	else
		cout << "������� ���������� ��������" << endl;
}
void �����_�������::Read()
{
	char *s = new char;
	do {
		cout << "������ �����: "; cin.getline(s, 100);
	} while (!(Init(s)));
}
bool �����_�������::Init(char* value)
{
	if (strlen(value) < 101)
	{
		str = value;
		return true;
	}
	else
		return false;
}
void �����_�������::Display() const
{
	for (int n = 0; n < strlen(str); ++n)
	{
		cout << str[n];
	}
	cout << endl;
}
bool �����_�������::isOrNot() const
{
	char ch;
	cout << "������ ������: "; cin >> ch;
	for (int n = 0; n < strlen(str); ++n)
	{
		if (str[n] == ch)
		return true;
	}
	return false;
}