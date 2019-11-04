/*
 * Author: Branislav Pilnan and Laura Masselos
 * Organisation: HYPED
 * Date: 02/11/2019
 * Description: <What is this file for?>
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

#include "unit_conversions.hpp"

namespace workshop5 {
namespace utils {
namespace unit_conversions {

double hoursToMinutes(double hours)
{
  return hours * kMinutesInHour;
}

double minutesToHours(double minutes)
{
  return minutes / kMinutesInHour;
}

// Function definition to convert from Mach init to Mph
double speedOfSoundMachMph(double speed_mach)
{
  return speed_mach * miles_in_mach;
}
  
double inchesToCm(double inches)
{
  return inches * kCmInInches;
}

double cmToInches(double cm)
{
  return cm / kCmInInches;
}

}}}  // namespace workshop5::utils::unit_conversions
