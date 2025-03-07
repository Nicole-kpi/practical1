#include <iostream>
double weighted_average(int array[],int n){
    if (n <= 0){
        return false;
    }
    int sum[n];
    for(int i = 0; i < n; i++){
        sum[i] = 0;
    }   

    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(array[j] == array[i]){
                sum[i]++;
            }
        }
    }
    double weighted_average = 0;
    for(int i = 0; i < n; i++){
        weighted_average += (double)array[i] * (double)sum[i] / (double)n;
    } 
    return weighted_average;
}