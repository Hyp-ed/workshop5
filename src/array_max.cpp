#include <cstdio>
#include <iostream>
#include <array>

int maxInt;
int array1[10];

int main() {

int loop = 0;
maxInt = array1[0];
while (loop < sizeof(array1)+1) { 
   if (array1[loop] > maxInt) {
   maxInt = array1[loop];
   }
   loop++;
}

return maxInt;  

}
