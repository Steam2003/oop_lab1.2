#pragma once
#include <iostream>
using namespace std;
class �����_�������
{
private:
	char* str = new char[101];
public:
	void Read();
	bool Init(char* string);
	void sin() { cout << "������ �����: "; cin >> str; };
	void Display() const;
	void soutPos() const;
	bool isOrNot() const;
};

