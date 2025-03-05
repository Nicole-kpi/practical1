#include <iostream>
extern bool is_fanarray(int array[], int n);

int main(){
    int array[8] = {1,2,3,4,4,3,2,1};
    std::cout << "array: " << std::boolalpha << is_fanarray(array, 8) << std::endl;  
}