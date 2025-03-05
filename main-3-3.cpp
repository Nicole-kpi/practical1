#include <iostream>
extern double weighted_average(int array[], int n);

int main(){
    int array[5] = {1,4,5,3,3};
    std::cout << "Weighted average of array: " << weighted_average(array, 5) << std::endl;

    return 0;
}