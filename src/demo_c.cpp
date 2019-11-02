/*
 * Author: Paul Martin
 * Organisation: HYPED
 * Date: 02/11/2019
 * Description: Tests light-speed to m/s function
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

#include "utils/unit_conversions.hpp"
#include <cstdio>

using workshop5::utils::unit_conversions::speedOfLightToMps;

int main();

int main()
{
  double speed_in_c = 3.4;
  double speed_in_mps = speedOfLightToMps(speed_in_c);

  printf("%fc = %fm/s\n", speed_in_c, speed_in_mps);
  return 0;
}