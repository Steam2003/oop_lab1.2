#include "Рядок_символів.h"
void Рядок_символів::soutPos() const
{
    int x;
	cout << "Введіть позицію літери: "; cin >> x;
	if (x > 0 && x < 101 && x <= strlen(str))
		cout << "\"" << str[x - 1] << "\"" << endl;
	else
		cout << "Введено некоректне значення" << endl;
}
void Рядок_символів::Read()
{
	char *s = new char;
	do {
		cout << "Введіть рядок: "; cin.getline(s, 100);
	} while (!(Init(s)));
}
bool Рядок_символів::Init(char* value)
{
	if (strlen(value) < 101)
	{
		str = value;
		return true;
	}
	else
		return false;
}
void Рядок_символів::Display() const
{
	for (int n = 0; n < strlen(str); ++n)
	{
		cout << str[n];
	}
	cout << endl;
}
bool Рядок_символів::isOrNot() const
{
	char ch;
	cout << "Введіть символ: "; cin >> ch;
	for (int n = 0; n < strlen(str); ++n)
	{
		if (str[n] == ch)
		return true;
	}
	return false;
}