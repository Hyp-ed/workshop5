#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

int dotProduct(vector<int> array1, vector<int> array2) {

   if (array1.size() != array2.size()) {
      printf("Arrays of different size\n");
      printf("Return zero\n"); 
      return 0;

   } else {
      int sum = 0;
      for(int i = 0; i < array1.size(); i++) {
         sum += array1[i] * array2[i];
      }
      return sum;
   }

}

int main(){
   vector<int> array{3,1,5,6};
   vector<int> array2{3,4,1,2};
   int result = dotProduct(array,array2);
   printf("%d\n",result);
   return 0;
}
