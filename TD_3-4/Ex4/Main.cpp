#include <iostream>

#define MAX1 100 

int main(int argc, char **argv) {
    static const int MAX2 = 100;
    // int *p1 = &MAX1;
    const int *p2 = &MAX2;
    // std::cout << "Adresse MAX1 : " << p1 << std::endl;
    std::cout << "Adresse MAX2 : " << p2 << std::endl; 
}