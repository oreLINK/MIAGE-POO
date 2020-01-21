#include <iostream>
using namespace std;

void echange1(int, int); //1.1 valeur par copie donc cas facile
void echange2(int*, int*); //2.1 on utilise les pointeurs
void echange3(int &, int &);

main(int argc, char *argv[]){
    int n=10; 
    int p=20;
    echange1(n,p);
    echange2(&n,&p);
    echange3(n,p);
}

void echange1(int a, int b){
    cout << "ECHANGE 1" << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    int c;
    c = a;
    a = b;
    b = c;
    cout << "-----" << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
}

void echange2(int *a, int *b){
    cout << "ECHANGE 2" << endl;
    cout << "a : " << *a << endl;
    cout << "b : " << *b << endl;
    int *c;
    c = a;
    a = b;
    b = c;
    cout << "-----" << endl;
    cout << "a : " << *a << endl;
    cout << "b : " << *b << endl;
}

void echange3(int &a, int &b){
    cout << "ECHANGE 3" << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    int c;
    c = a;
    a = b;
    b = c;
    cout << "-----" << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
}