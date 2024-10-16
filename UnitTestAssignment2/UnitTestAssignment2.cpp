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
		{  //Test Perimeter, length 2 and width 4 .P = 12
			int length = 2;
			int width = 4;
			int result = getPerimeter(&length, &width);
			Assert::AreEqual(12, result);
		}

		TEST_METHOD(TestGetArea)
		{ // Test Area, length 2 and width 4. A = 8
			int length = 2;
			int width = 4;
			int result = getArea(&length, &width);
			Assert::AreEqual(8, result);
		}

		TEST_METHOD(TestSetLengthNeagtiveInteger)
		{	// testing set length with negative input from user
			int length = 0;
			int input = -10;
			setLength(input, &length);
			Assert::AreEqual(input, length);

		}

		TEST_METHOD(TestSetLengthPostiveIntegerGreaterThan100)
		{	//testing set length >=100 input from user
			int length = 0;
			int input = 100;
			setLength(input, &length);
			Assert::AreEqual(input, length);

		}
		
		TEST_METHOD(TestSetLengthPositiveIntegerLessThan100)
		{ //testing set length between 0-100 (valid input)

			int length = 0;
			int input = 52;
			setLength(input, &length);
			Assert::AreEqual(input, length);
		
		}
	};
}
