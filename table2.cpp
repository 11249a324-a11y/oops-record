#include <iostream>

class MyClass {
public:
    MyClass() {
        std::cout << "Constructor called!" << std::endl;
    }

    ~MyClass() {
        std::cout << "Destructor called!" << std::endl;
    }
};

int main() {
    MyClass obj;  // Constructor is called here

    // When main ends, obj goes out of scope
    // Destructor will be called automatically here
    return 0;
}
