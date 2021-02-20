#include "pch.h"
#include "CppUnitTest.h"
#include "../Летняя практика/working_with_strings.h";

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual("branches", max_lenght_word("The mermaid is sitting on the branches"));
		}
	};
}
