#include <iostream>
extern double sum_even(double array[], int n);
int main(){
    double array[5] = {1,2,6,8,0};
    std::cout << "sum of even number is: " << sum_even(array, 5) << std::endl;
    return 0; 
} 