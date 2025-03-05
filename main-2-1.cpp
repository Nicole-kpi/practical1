#include <iostream>
int min_element(int array[], int n);

int main(){
    int array[6] = {2, 6, 7, 1, 0, 10};
    std::cout << "Min vlaue: " << min_element(array,6) <<std::endl;
    return 0;
}