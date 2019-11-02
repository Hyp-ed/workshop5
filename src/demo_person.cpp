/*
 * Authors : Robertas Norkus
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

#include "things/person.hpp"
#include <iostream>

using workshop5::things::Person;

int main()
{
  //create new Person
  Person person_("Robertas", 42, 199);

  //output Person's data
  std::cout << "Person's name: " << person_.getName() << "\n";
  std::cout << "Person's age: " << person_.getAge() << "\n";
  std::cout << "Person's height: " << person_.getHeight() << "\n";

  return 0;
}
