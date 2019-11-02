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

#include "person.hpp"

namespace workshop5 {
namespace things {

Person::Person(std::string name, int age, int height) 
  : name_(name),
    age_(age),
    height_(height)
{
  // empty constructor
}

std::string Person::getName()
{
  return name_;
}

void Person::setName(std::string name)
{
  name_ = name;
}

int Person::getAge()
{
  return age_;
}

void Person::setAge(int age) {
  age_ = age;
}

int Person::getHeight() {
  return height_;
}

void Person::setHeight(int height)
{
  height_ = height;
}
  
}}