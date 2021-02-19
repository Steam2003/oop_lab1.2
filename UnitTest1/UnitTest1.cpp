#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Patiuk\ООП\Лаби\lab1.2\Рядок_символів.h"
#include "D:\Patiuk\ООП\Лаби\lab1.2\Рядок_символів.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char* str = new char;
			str = { "text" };
			Рядок_символів a;
			bool test = a.Init(str);
			Assert::AreEqual(test, true);
		}
	};
}
