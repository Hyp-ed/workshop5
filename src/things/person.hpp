/*
 * Authors : Robertas Norkus
 * Organisation: HYPED
 * Date: 2. November 2019
 * Description:
 * Class for storing Person's info (name, age, height)
 *
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

#ifndef THINGS_PERSON_HPP_
#define THINGS_PERSON_HPP_

#include <string>

namespace workshop5 {
namespace things {
class Person {
 public:
  Person(std::string name, int age, int height);
  std::string getName();
  void setName(std::string name);
  int getAge();
  void setAge(int age);
  int getHeight();
  void setHeight(int height);

 private:
  std::string name_;
  int age_;
  int height_;
};
}}

#endif