#include <iostream>
#include "Person.hpp"

#define NUMBER 3

int main(int argc, char **argv) {
    Person list[NUMBER] = {
        Person("Aurélien", "Bertrand", 22), 
        Person(Person("Damien", "Siu", 4)), 
        Person(),
        };
    for (Person &item : list) {
        item.display();
    }
}