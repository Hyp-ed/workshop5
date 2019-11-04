/*
 * Author: Thanakrit (New) Anutrakulchai
 * Organisation: HYPED
 * Date: 2nd November 2019
 * Description: A struct modeling a person
 *
 *    Copyright 2019 HYPED
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
#include <string>

struct Person {
    int age_;
    double height_;
    std::string name_;
};


int main() 
{
    Person bob;
    bob.age_ = 19;
    bob.height_ = 176;
    bob.name_ = "Bobby Bobster";

    return 0;
}


