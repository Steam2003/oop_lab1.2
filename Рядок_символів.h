#pragma once
#include <iostream>
using namespace std;
class Рядок_символів
{
private:
	char* str = new char[101];
public:
	void Read();
	bool Init(char* string);
	void sin() { cout << "Введіть рядок: "; cin >> str; };
	void Display() const;
	void soutPos() const;
	bool isOrNot() const;
};

