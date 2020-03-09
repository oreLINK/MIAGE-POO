#include <iostream>

#define copie1(source,dest) source=dest;

inline void copie2(int source, int dest) {
    source=dest;
}

int main(int argc, char **argv) {
    // copie1(443.55,8.675);
    copie2(443.55,8.675);
}