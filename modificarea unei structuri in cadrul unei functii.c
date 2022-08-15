#include "stdio.h"
struct Schita{
    int tip;
    int culoare;
    float raza;
    float arie;
    float perimetru;
};

//modificarea unei structuri in cadrul unei functii
void modif_structura(struct Schita *schita){
    (*schita).tip = 0;
    (*schita).culoare = 1;
    (*schita).raza = 5.0;
    (*schita).arie = 22.0/7.0 * (*schita).raza * (*schita).raza;
    (*schita).perimetru = 2 * 22.0/7.0 * (*schita).raza;
}

int main(void){
    struct Schita cerc;
    modif_structura(&cerc);
    printf("cerc.tip = %d\n", cerc.tip);
    printf("cerc.culoare = %d\n", cerc.culoare);
    printf("cerc.raza = %f\ncerc.arie = %f\ncerc.perimetru = %f\n",cerc.raza,cerc.arie,cerc.perimetru);
}
