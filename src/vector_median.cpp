/*
 * Author: Justas Zelnia
 * Organisation: HYPED
 * Date: 2/11/2019
 * Description: Implementation of median function
 *
 *    Copyright 2018 HYPED
 *    Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file
 *    except in compliance with the License. You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software distributed under
 *    the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 *    either express or implied. See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#include <iostream>
#include <vector>
#include <algorithm>
float median (std::vector<int>v) 
{
  std::sort(v.begin(), v.end());
  int N = (int)v.size();

  // if size is odd - return middle element
  // else return average of two middle elements
  if(N % 2 == 0) {
    return float (v[N / 2 - 1] + v[N / 2]) / 2;
  } 
  else {
    return v[N / 2];
  }
}
int main()
{
  // printf("%f", median({4, 3, 42, 4, 234, 2, 34, 23}));
  return 0;
}