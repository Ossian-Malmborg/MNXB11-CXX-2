/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include <iostream>

using namespace homework;

int main() { 
//as1
std::cout << "Assignment 1:" << std::endl;

int a = 1;
int b = 2;
int c = 3;  

std::cout << "Before the swap: (1,2,3)" << std::endl;
homework::swap_ptr(&a, &b, &c);
std::cout << "After the swap: (" << a << ", " << b << ", " << c << ")" << std::endl;

int d = 37;
std::cout << "My value is: " << d << std::endl;
homework::UniqueData mydata(d);
int val = mydata.get();
std::cout << "My data value is now: " << mydata.get() << std::endl;
mydata.set(73);
std::cout << "My data value is now: " << mydata.get() << std::endl;
val = mydata.get();

//as2
std::cout << "Assignemnt 2:" << std::endl;

homework::Knight knight{"Hornet"};

knight.setWeapon("Pale Nail");
knight.attack();

homework::Sorcerer sorcerer{"Snail Shaman"};

sorcerer.setSpell("Vengeful spirit");
sorcerer.attack();

}

