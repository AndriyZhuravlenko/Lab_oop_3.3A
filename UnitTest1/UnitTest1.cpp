#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\LEGION\source\repos\Lab_oop_3.3A\Lab_oop_3.3A\FuzzyNumber.cpp"
#include "C:\Users\LEGION\source\repos\Lab_oop_3.3A\Lab_oop_3.3A\Private.cpp"
#include "C:\Users\LEGION\source\repos\Lab_oop_3.3A\Lab_oop_3.3A\Public.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTOOP33A
{
	TEST_CLASS(UTOOP33A)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Public k;
			k++;
			Assert::AreEqual(k.get_l(), 0.);
		}
	};
}