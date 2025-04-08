#include "test_framework/TestFramework.hpp"

int main(void)
{
	TestFramework tf;

	tf.expectTrue(1 + 1 == 2, "1 + 1 should equal 2");
	tf.expectFalse(1 - 1 == 2, "1 - 1 should not equal 2");

	tf.printSummary();
}
