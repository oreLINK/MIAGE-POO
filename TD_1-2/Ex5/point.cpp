#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;
    char name;
};

void initialise(Point p);
void deplace(Point p, int x, int y);
void afficher(Point p);

main(int argc, char *argv[]) {
    Point pt;
    initialise(pt);
    afficher(pt);
    deplace(pt,5,3);
    afficher(pt);
}

void initialise(Point p) {
    p.x = 0;
    p.y = 0;
    p.name = 'a';
}

void deplace(Point p, int x, int y) {
    p.x = x;
    p.y = y;
}

void afficher(Point p) {
    cout << "name : " << p.name << endl;
    cout << "x : " << p.x << endl;
    cout << "y : " << p.y << endl;
}
