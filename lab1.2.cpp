#include "�����_�������.h"
#include <Windows.h>

�����_������� makeStr(char str[])
{
	�����_������� bb;
	if (!bb.Init(str))
		cout << "������� �������� �����" << endl;
	return bb;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	�����_������� a;
	char str[] = "text";
	a = makeStr(str);
	a.Display();
	�����_������� b;
	b.Read();
	b.Display();
	b.soutPos();
	b.Display();
	if (b.isOrNot())
		cout << "��������� ��������";
	else
		cout << "��������� �� ��������";
}