#include "TestFramework.hpp"

/* -------------------------------------------------------------------------- */
/*                                     OCF                                    */
/* -------------------------------------------------------------------------- */
TestFramework::TestFramework(void) {}

TestFramework::TestFramework(const int testCount) : _testCount(testCount) {}

TestFramework::TestFramework(const TestFramework &other) { *this = other; }

TestFramework &TestFramework::operator=(const TestFramework &other)
{
	if (this != &other)
	{
		this->_testCount = other._testCount;
		this->_passCount = other._passCount;
		this->_failCount = other._failCount;
	}
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                                   GETTER                                   */
/* -------------------------------------------------------------------------- */
int TestFramework::getTestCount(void) const { return _testCount; }

int TestFramework::getPassCount(void) const { return _passCount; }

int TestFramework::getFailCount(void) const { return _failCount; }

/* -------------------------------------------------------------------------- */
/*                                   SETTER                                   */
/* -------------------------------------------------------------------------- */
void TestFramework::setTestCount(const int testCount)
{
	_testCount = testCount;
}

void TestFramework::setPassCount(const int passCount)
{
	_passCount = passCount;
}

void TestFramework::setFailCount(const int failCount)
{
	_failCount = failCount;
}

/* -------------------------------------------------------------------------- */
/*                                  UTILITIES                                 */
/* -------------------------------------------------------------------------- */
void TestFramework::incrementTestCount(void) { _testCount += 1; }

void TestFramework::decrementTestCount(void) { _testCount -= 1; }

void TestFramework::incrementPassCount(void) { _passCount += 1; }

void TestFramework::decrementPassCount(void) { _passCount -= 1; }

void TestFramework::incrementFailCount(void) { _failCount += 1; }

void TestFramework::decrementFailCount(void) { _failCount -= 1; }

/* -------------------------------------------------------------------------- */
/*                               TEST FUNCTIONS                               */
/* -------------------------------------------------------------------------- */
void TestFramework::expectTrue(bool condition, const std::string &testName)
{
	// Increasing Test Count
	incrementTestCount();

	if (condition)
	{
		incrementPassCount();
		std::cout << GREEN << "[PASS] " << RESET << testName << std::endl;
	}
	else
	{
		incrementFailCount();
		std::cout << RED << "[FAIL] " << RESET << testName << std::endl;
	}
}

void TestFramework::expectFalse(bool condition, const std::string &testName)
{
	// Increasing Test Count
	incrementTestCount();

	if (!condition)
	{
		incrementPassCount();
		std::cout << GREEN << "[PASS] " << RESET << testName << std::endl;
	}
	else
	{
		incrementFailCount();
		std::cout << RED << "[FAIL] " << RESET << testName << std::endl;
	}
}

/* -------------------------------------------------------------------------- */
/*                                   LOGGING                                  */
/* -------------------------------------------------------------------------- */
void TestFramework::printSummary(void)
{
	std::cout << std::endl;
	std::cout << BLUE
			  << "╔══════════════════════════════╗" << RESET << std::endl;
	std::cout << BLUE
			  << "║        🧪 TEST SUMMARY        ║" << RESET << std::endl;
	std::cout << BLUE
			  << "╚══════════════════════════════╝" << RESET << std::endl;

	std::cout << YELLOW
			  << " Total tests  : " << RESET << _testCount << std::endl;
	std::cout << GREEN
			  << " ✅ Passed     : " << RESET << _passCount << std::endl;
	std::cout << RED
			  << " ❌ Failed     : " << RESET << _failCount << std::endl;

	std::cout << std::endl;

	if (_failCount == 0)
	{
		std::cout << GREEN
				  << "🎉 All tests passed! Great job! 🎉"
				  << RESET << std::endl;
	}
	else
	{
		std::cout << RED
				  << "💥 Some tests failed. Time to debug! 💥"
				  << RESET << std::endl;
	}
	std::cout << std::endl;
}
