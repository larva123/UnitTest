#include "pch.h"
#include "CppUnitTest.h"
#include "..\UnitTest\UnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1) //和运算测试
		{
			Assert::AreEqual(add(20, 30), 50);
			Assert::AreEqual(add(32, 48), 80);
			Assert::AreEqual(add(60, 80), -1);
			Assert::AreEqual(add(72, 95), -1);
		}
		TEST_METHOD(TestMethod2) //差运算测试
		{
			Assert::AreEqual(sub(60, 40), 20);
			Assert::AreEqual(sub(72, 36), 36);
			Assert::AreEqual(sub(18, 56), -1);
			Assert::AreEqual(sub(22, 63), -1);
		}
		TEST_METHOD(TestMethod3) //积运算测试
		{
			Assert::AreEqual(mul(7, 8), 56);
			Assert::AreEqual(mul(17, 5), 85);
			Assert::AreEqual(mul(42, 8), -1);
			Assert::AreEqual(mul(30, 50), -1);
		}
		TEST_METHOD(TestMethod4) //商运算测试
		{
			Assert::AreEqual(divi(72, 8), 9);
			Assert::AreEqual(divi(64, 16), 4);
			Assert::AreEqual(divi(83, 15), -1);
			Assert::AreEqual(divi(50, 0), -1);
		}
	};
}
