#include <iostream>

double meanArray(int a[])
{
    int length = sizeof(a);
    double sum = 0;

    for(int x = 0; x++; x < length){
        sum += a[x];
    }

    return sum/length;
}