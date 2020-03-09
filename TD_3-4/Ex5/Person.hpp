#ifndef PERSON_H
#define PERSON_H

class Person {
private:
    char *firstName;
    char *lastName;
    int age;
public:
    Person(char * firstName, char * lastName, int age);
    Person(const Person & person);
    Person();
    ~Person();
    void display();
    void affiche() const;
};

// void affiche(const int& n);

#endif PERSON_H