#include <iostream>
extern double weighted_average(int array[], int arr1[], int n);

int main(){
    int array[5] = {1,2,1,1,3};
    int arr1[5] = {3,1,3,3,1};
    
    std::cout << "Weighted average of array: " << weighted_average(array, arr1, 5) << std::endl;

    return 0;
}