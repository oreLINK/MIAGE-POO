#include <iostream>
using namespace std;

main () {
    int n=10, p=20;
    cout << "ONE" << endl;
    void fct(int=1, int=12); //modif mettre valeurs par défaut
    cout << "TWO" << endl;
    fct(n,p);
    cout << "THREE" << endl;
    fct(n);
    cout << "FOUR" << endl;
    fct();
}

void fct(int a, int b) {
    cout << "premier argument : " << a << "\n";
    cout << "second argument : " << b << "\n";
}

