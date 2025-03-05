#include <iostream>
extern void print_pass_fail(char grade);
int main() {
    char grade;
    std::cout << "Enter a grade (A, B, C, D, E): ";
    std::cin >> grade;

    print_pass_fail(grade);

    return 0;
}