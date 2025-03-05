#include <iostream>
extern int sum_two_arrays(int array1[], int secondary[], int n);

int main(){
    int array[] = {1,4,7,9,35};
    int secondary[] = {3,7,-1,0,23};
    int size = 5;
    std::cout << "sum of tow arrays: " << sum_two_arrays(array, secondary, size) <<std::endl;
    return 0; 
}