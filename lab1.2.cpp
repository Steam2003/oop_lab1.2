#include "Рядок_символів.h"
#include <Windows.h>

Рядок_символів makeStr(char str[])
{
	Рядок_символів bb;
	if (!bb.Init(str))
		cout << "Помилка введення даних" << endl;
	return bb;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Рядок_символів a;
	char str[] = "text";
	a = makeStr(str);
	a.Display();
	Рядок_символів b;
	b.Read();
	b.Display();
	b.soutPos();
	b.Display();
	if (b.isOrNot())
		cout << "Входження знайдено";
	else
		cout << "Входження не знайдено";
}