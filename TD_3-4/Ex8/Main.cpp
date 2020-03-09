#include <iostream>

int somme(int a, int b) {
    return a+b;
}

float somme(float a, float b) {
    return a+b;
}

int somme(int *tab1, int *tab2) {
    int res = 0;
    for (int i=0; i < 10; i++) {
        res += tab1[i] + tab2[i];
    }
    return res;
}

int somme(int a, int b, int c) {
    return a+b+c;
}

float somme(int a, float b) {
    return a+b;
}

int main(int argc, char **argv) {
    std::cout << "Somme int de 2 et 3 = " << somme(2,3) << std::endl;
    std::cout << "Somme float de 2.7 et 3.2 = " << somme(2.7f,3.2f) << std::endl;
    int tab1[10] = {1,2,3,4,5,6,7,8,9,10};
    int tab2[10] = {1,2,3,4,5,6,7,8,9,10};
    std::cout << "Somme int de deux tableaux = " << somme(tab1,tab2) << std::endl;
    std::cout << "Somme int de 2 et 3 et 5 = " << somme(2,3,5) << std::endl;
    std::cout << "Somme int de 2 et float 3.2 = " << somme(2,3.2f) << std::endl;
}

