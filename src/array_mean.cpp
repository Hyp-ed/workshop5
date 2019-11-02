/*
 * Author: Elisa
 * Organisation: HYPED
 * Date: Nov 2 2019
 * 
 */

double meanArray(int a[])
{
    int l = sizeof(a);
    double sum = 0;

    for(int x = 0; x++; x < l){
        sum += a[x];
    }

    return sum/l;
}