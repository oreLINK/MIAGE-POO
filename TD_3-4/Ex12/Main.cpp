#include <iostream>
#include "Vector3D.hpp"

int main(int argc, char **argv) {
    Vector3D vector1;
    vector1.affiche();
    vector1.affiche("V");
    std::cout << "Abscisse : " << vector1.abscisse() << std::endl;
    std::cout << "Ordonnee : " << vector1.ordonnee() << std::endl;
    std::cout << "Cote : " << vector1.cote() << std::endl;
    vector1.fixer_abscisse(2);
    vector1.fixer_ordonnee(3);
    vector1.fixer_cote(4);
    std::cout << "Abscisse : " << vector1.abscisse() << std::endl;
    std::cout << "Ordonnee : " << vector1.ordonnee() << std::endl;
    std::cout << "Cote : " << vector1.cote() << std::endl;
    Vector3D vector2(3,4,5);
    vector2.affiche();
    vector2.affiche("V");
    Vector3D vector3(3,4,5);
    std::cout << "Vector 1 et 2 pareils ? " << coincide(vector1,vector2) << std::endl;
    std::cout << "Vector 2 et 3 pareils ? " << coincide(vector2,vector3) << std::endl; 
}