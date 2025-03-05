#include <iostream>
extern int num_count(int array[], int n, int number);

int main(){
    int array[8] = {1,3,7,4,5,7,8,7};

    std::cout<< "Count of 2 in the array: "<<num_count(array, 8, 7) << std::endl;

    return 0;
}