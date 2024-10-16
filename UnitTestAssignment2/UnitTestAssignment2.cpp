#include "pch.h"
#include "CppUnitTest.h"

extern "C" {void setLength(int input, int* length);
void setWidth(int input, int* width);
int getPerimeter(int* length, int* width);
int getArea(int* length, int* width);
void printWelcomeMenu();
void printOptions();
int getIntInput(char message[]);
};


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestAssignment2
{
	TEST_CLASS(UnitTestAssignment2)
	{
	public:
		
		TEST_METHOD(TestGetPerimeter)
		{
			int length = 2;
			int width = 4;
			int result = getPerimeter(&length, &width);
			Assert::AreEqual(12, result);
		}

		TEST_METHOD(TestGetArea)
		{
			int length = 2;
			int width = 4;
			int result = getArea(&length, &width);
			Assert::AreEqual(8, result);
		}
	};
}
