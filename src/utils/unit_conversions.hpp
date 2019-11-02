/*
 * Author: Branislav Pilnan, Paul Martin
 * Organisation: HYPED
 * Date: 02/11/2019
 * Description: Utility functions for converting between different units of measurement.
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

#ifndef WORKSHOP5_UTILS_UNIT_CONVERSIONS_HPP_
#define WORKSHOP5_UTILS_UNIT_CONVERSIONS_HPP_

namespace workshop5
{
namespace utils
{
namespace unit_conversions
{

// Constants relating different units go here
constexpr int kMinutesInHour = 60;
constexpr int kC = 299792458; // speed of light in m/s

// Conversion function declarations go here
double hoursToMinutes(double hours);
double minutesToHours(double minutes);
double speedOfLightToMps(double speed_of_light);
} // namespace unit_conversions
} // namespace utils
} // namespace workshop5

#endif // WORKSHOP5_UTILS_UNIT_CONVERSIONS_HPP_
