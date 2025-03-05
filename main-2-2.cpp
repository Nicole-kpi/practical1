#include <iostream>
int max_element(int array[], int n);

int main(){
    int array[6] = {2, 6, 7, 1, 0, 10};
    std::cout << "Max vlaue: " << max_element(array,6) <<std::endl;
    return 0;
}
