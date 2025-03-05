#include <iostream>
extern bool is_ascending(int array[], int n);

int main(){
    int array[6] = {1,2,3,4,5,4};
    std::cout << "Is ascending? " << std::boolalpha << is_ascending(array,6) <<std::endl;
    return 0;
}