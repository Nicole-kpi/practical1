#include <iostream>
#include <algorithm> 
extern int median_array(int array[], int n);

int main(){
    int array[5] = {1,4,6,2,4};
    std::cout << "Median of array: " << median_array(array, 5) << std::endl;
    return 0;
}

