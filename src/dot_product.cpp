/*
  * Author : Pablo Miró
  * Organisation: HYPED
  * Date: 2. November 2019
  * Description:
  * This is the main executable for Person demo
  *    Copyright 2019 HYPED
  *    Licensed under the Apache License, Version 2.0 (the "License");
  *    you may not use this file except in compliance with the License.
  *    You may obtain a copy of the License at
  *
  *    http://www.apache.org/licenses/LICENSE-2.0
  *
  *    Unless required by applicable law or agreed to in writing, software
  *    distributed under the License is distributed on an "AS IS" BASIS,
  *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  *    See the License for the specific language governing permissions and
  *    limitations under the License.
  */

#include <cstdio>
#include <vector>


int dotProduct(std::vector<int> array1, std::vector<int> array2) {

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
   std::vector<int> array{3,1,5,6};
   std::vector<int> array2{3,4,1,2};
   int result = dotProduct(array,array2);
   printf("%d\n",result);
   return 0;
}
