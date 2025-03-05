#include <iostream>

extern int count_evens(int number);
 int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << "Even number count: " << count_evens(num) << std::endl;

    return 0;
}
