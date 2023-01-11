/*
Problem:
1. Write a function to add two integers.
2. Read any two integer values from the keyboard. 3. Add them using the function you wrote.
4. Write the result to console.*/

#include <iostream>
#include <string>

int add(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    std::cout << "The sum of " << a << " and " << b << " is " << add(a, b) << std::endl;
    return 0;
}