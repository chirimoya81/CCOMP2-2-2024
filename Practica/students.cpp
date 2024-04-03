#include <iostream>
#include <string>
#include <students.h>

student::student(std::string aName, int aAge) : name(aName), age(aAge) {}

std::string student::getName() const {
    return name;
}

void student::setName(std::string newName) {
    name = newName;
}

int student::getAge() const {
    return age;
}

void student::setAge(int newAge){
    age = newAge;
}  

