# tdd-cmake-cpp
Template repo for c++ TDD w/ CMake and gtest

- A quick introduction to the Google C++ Testing Framework: https://developer.ibm.com/technologies/systems/articles/au-googletestingframework/
- C++ project setup with CMake & unit tests (google test): https://raymii.org/s/tutorials/Cpp_project_setup_with_cmake_and_unit_tests.html
- Udemy course: 
    - https://www.udemy.com/course/beginning-test-driven-development-in-c/
    - https://www.udemy.com/course/free-learn-c-tutorial-beginners/

   Multiple Main () Method: http://www.cplusplus.com/forum/beginner/46664/

C++ 
C vs C++
C: procedural, munual if/else logic, static members
C++ OO/procedural, exception handling, encapsultation

# Strings
char[n] from cstring library
string from std library

# Question
- What is the use case for reference, pointer, paramter
- How to manually rebuild everyhing when adding new file? 
- Why do I need to clean everything when adding a new file?
- Scope for access modifier for static variable?
```
class Machine {
private:
    int count;
public:
    static int MAX_CNT;
}

// why is this allowed?
int Machine::count = 0;
int Machine::MAX_CNT = 10;
```