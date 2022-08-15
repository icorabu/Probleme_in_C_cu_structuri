#include "stdio.h"
struct Angajat{
    char nume[64];
    //int varsta;
    //int categ_salarizare;
    //float salariu;
    unsigned nr_angajat;
} personal[100];
int main(){
    int angaj;
    for (angaj = 0; angaj <100; angaj++){
        printf("Angajat: %s Numar: %d\n", personal[angaj].nume, personal[angaj].nr_angajat);
    }
}
