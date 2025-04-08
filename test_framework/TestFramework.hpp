#ifndef TEST_FRAMEWORK_HPP
#define TEST_FRAMEWORK_HPP

#include <iostream>
#include <string>

/* ---------------------------- ANSI COLOR CODES ---------------------------- */
#define RESET "\033[0m"
#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"

class TestFramework
{
private:
	int _testCount;
	int _passCount;
	int _failCount;

public:
	/* ----------------------------------- OCF ---------------------------------- */
	TestFramework(void);
	TestFramework(const int testCount);
	TestFramework(const TestFramework &other);
	TestFramework &operator=(const TestFramework &other);

	/* --------------------------------- GETTER --------------------------------- */
	int getTestCount(void) const;
	int getPassCount(void) const;
	int getFailCount(void) const;

	/* --------------------------------- SETTER --------------------------------- */
	void setTestCount(const int testCount);
	void setPassCount(const int passCount);
	void setFailCount(const int failCount);

	/* -------------------------------- UTILITIES ------------------------------- */
	void incrementTestCount(void);
	void decrementTestCount(void);
	void incrementPassCount(void);
	void decrementPassCount(void);
	void incrementFailCount(void);
	void decrementFailCount(void);

	/* ----------------------------- TEST FUNCTIONS ----------------------------- */
	void expectTrue(bool condition, const std::string &testName);
	void expectFalse(bool condition, const std::string &testName);

	/* --------------------------------- LOGGING -------------------------------- */
	void printSummary(void);
};

#endif
