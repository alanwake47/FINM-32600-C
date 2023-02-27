#include "pch.h"
#include "CppUnitTest.h"

#include <Add.h>


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(AddInts)
		{
			Assert::AreEqual(Add(1, 2), 3);
		}

		TEST_METHOD(AddDoubles)
		{
			Assert::AreEqual(Add(1., 2.), 3.);
		}
	};
}
