#include <cstring>
#include <iostream>
#include "Person.hpp"

Person::Person(char * firstName, char * lastName, int age) {
    strcpy(this->firstName, firstName);
    strcpy(this->lastName, lastName);
    this->age = age;
}

Person::Person(const Person &person) {
    strcpy(this->firstName, person.firstName);
    strcpy(this->lastName, person.lastName);
    this->age = person.age;
}

Person::Person() {
    strcpy(this->firstName, " ");
    strcpy(this->lastName, " ");
    this->age = 0;
}

Person::~Person() = default;

void Person::display() {
    std::cout << "Je m'appelle " << this->firstName << " " << this->lastName << " et j'ai " 
        << this->age << "ans" << std::endl;
}

