#include "pch.h"
#include "CppUnitTest.h"
#include "c:\users\pavilion\desktop\універ\ооп\lab 1.3\lab1.3\lab1.3\Point.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Point a, b, c;
			a.Init(9, 5);
			b.Init(5, 2);
			double k = c.GetLength(a, b);
			double i = 5;
			Assert::AreEqual(k, i);
		}
	};
}
