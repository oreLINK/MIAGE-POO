#ifndef VECTOR3D_H
#define VECTOR3D_H

class Vector3D {
private:
    double x;
    double y;
    double z;
public:
    Vector3D();
    Vector3D(double x, double y, double z);
    void affiche();
    void affiche(const char * string);
    int abscisse();
    int ordonnee();
    int cote();
    void fixer_abscisse(int nouvelle_abscisse);
    void fixer_ordonnee(int nouvelle_ordonnee);
    void fixer_cote(int nouvelle_cote);
    bool coincide(Vector3D v);
};

#endif VECTOR3D_H