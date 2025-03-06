#include <iostream>
double weighted_average(int array[], int arr1[],int n){
    if (n < 1) return 0;
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += array[i] * arr1[i]; 
    } 
    return static_cast<double>(sum) / n;
}