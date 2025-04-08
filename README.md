# 🧪 C++98 Test Framework

A lightweight, zero-dependency testing framework built for **C++98** — perfect for **42 school modules** (Module 00–07). It makes testing your code easy and fun, with colored output, basic test assertions, and a stylish test summary.

---

## 📦 Features

- ✅ `expectTrue()` and `expectFalse()` assertions
- 📊 Tracks total tests, passed, and failed
- 🌈 Terminal color output
- 📘 Final summary with clear pass/fail count

---

## 🔧 Usage

### 1. Include in your `main.cpp`:

```cpp
#include "test_framework/TestFramework.hpp"
```

### 2. Create a framework instance:

```cpp
TestFramework tf;
```

### 3. Run your tests:

```cpp
tf.expectTrue(1 + 1 == 2, "1 + 1 should equal 2");
tf.expectFalse(2 * 2 == 5, "2 * 2 should not equal 5");
```

### 4. Print the summary:

```cpp
tf.printSummary();
```

---

## 📄 Example

```cpp
#include "test_framework/TestFramework.hpp"

int main(void)
{
	TestFramework tf;

	tf.expectTrue(10 > 5, "10 is greater than 5");
	tf.expectFalse(3 == 4, "3 should not equal 4");

	tf.printSummary();
	return 0;
}
```

---

## 📥 Quick Install Script

To install this into your project as a **local folder** (no `.git`, no history):

```bash
bash <(curl -s https://raw.githubusercontent.com/tanamaroby/cplusplus_testing_framework/main/install.sh)
```

This will download the framework into a folder named `test_framework`.

---

## 🛠 Manual Installation (Alternative)

```bash
git clone --depth 1 https://github.com/tanamaroby/cplusplus_testing_framework.git
mv cplusplus_testing_framework/test_framework ./test_framework
rm -rf cplusplus_testing_framework
```

---

## 📁 File Structure

```
test_framework/
├── TestFramework.hpp
└── TestFramework.cpp
```

Add `test_framework/TestFramework.cpp` to your Makefile compile list.

---

## 🧼 Cleanup

```bash
rm -rf test_framework
```

---

## 🧠 Notes

- Written in **C++98**, no STL containers or templates
- Self-contained with only `<iostream>` and `<string>`
- Use it in **Module 00–07** with zero worries


## 🔗 Repository

[github.com/tanamaroby/cplusplus_testing_framework](https://github.com/tanamaroby/cplusplus_testing_framework)
