#ifndef PERSON_H
#define PERSON_H

class Person {
private:
    char firstName[20];
    char lastName[20];
    int age;
public:
    Person(char * firstName, char * lastName, int age);
    Person(const Person & person);
    Person();
    virtual ~Person();
    void display();
};

#endif PERSON_H