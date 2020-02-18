#include <iostream>
#include <stdlib.h>
#include <vector>   
using namespace std;

class point {
    private:
        int x;
        int y;
        char name;
    public:
        point(char name) {
            name = *this.name;
            x = rand() % 100;
            y = rand() % 100;
        }
        ~point() {
           
        }
        void afficher() {
            cout << 
            "Le point " << name << 
            " a été crée aux coordonnées x = " << x << 
            " et y = " << y << endl;
        }
}

main(int argc, char *argv[]) {

    point p = new point;
    p.afficher();

    /**
    if(argc == 2) {
        Point p = {};
        p.name = *argv[1];
        p.x = rand() % 100;
        p.y = rand() % 100;
        afficher(p);
        deplace(p,5,32);
    }
    else if(argc == 4) {
        Point p = {};
        p.name = *argv[1];
        p.x = atoi(argv[2]);
        p.y = atoi(argv[3]);
        afficher(p);
    } else {
        cout << "FAUX" << endl;
    }
    **/

}
/**
void deplace(Point p, int x, int y) {
    int old_x = p.x;
    int old_y = p.y;
    p.x = x;
    p.y = y;
    cout << "Le point " << p.name 
    << " a changé des coord. (" 
    << old_x << "," 
    << old_y << ") aux coord. (" 
    << p.x << "," 
    << p.y << ")."<< endl;
}
**/