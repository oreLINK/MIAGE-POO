#include <cstring>
#include <iostream>
#include "Person.hpp"

Person::Person(char * firstName, char * lastName, int age) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->age = age;
}

Person::Person(const Person &person) {
    this->firstName = person.firstName;
    this->lastName = person.lastName;
    this->age = person.age;
}

Person::Person() {
    this->firstName = " ";
    this->lastName = " ";
    this->age = 0;
}

Person::~Person() = default;

void Person::display() {
    std::cout << "Je m'appelle " << this->firstName << " " << this->lastName << " et j'ai " 
        << this->age << "ans" << std::endl;
}

void Person::affiche() const {
    this->age = 0;
}

// void affiche(const int& n) {
//     n = 4;
// }

