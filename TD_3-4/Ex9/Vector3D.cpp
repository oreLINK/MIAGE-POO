#include <cstring>
#include <iostream>
#include "Vector3D.hpp"

Vector3D::Vector3D() : x(0), y(0), z(0) {}

Vector3D::Vector3D(double x, double y, double z) : x(x), y(y), z(z) {}

void Vector3D::affiche() {
    std::cout << "Vecteur (" << x << ", " << y << ", " << z << ").\n" << std::endl;
}

void Vector3D::affiche(const char *name) {
    std::cout << name << " (" << x << ", " << y << ", " << z << ").\n" << std::endl;
}

int Vector3D::abscisse() {
    return x;
}

int Vector3D::ordonnee() {
    return y;
}

int Vector3D::cote() {
    return z;
}

void Vector3D::fixer_abscisse(int nouvelle_abscisse) {
    Vector3D::x = nouvelle_abscisse;
}

void Vector3D::fixer_ordonnee(int nouvelle_ordonnee) {
    Vector3D::y = nouvelle_ordonnee;
}

void Vector3D::fixer_cote(int nouvelle_cote) {
    Vector3D::z = nouvelle_cote;
}

bool Vector3D::coincide(Vector3D v) {
    bool ifOK = true;
    if((Vector3D::x != v.x) || (Vector3D::y != v.y) || (Vector3D::y != v.y)) {
        ifOK = false;
    }
    return ifOK;
}

