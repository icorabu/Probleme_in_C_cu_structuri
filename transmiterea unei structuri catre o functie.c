#include "stdio.h"
struct Schita{
    int tip;
    int culoare;
    float raza;
    float arie;
    float perimetru;
};
//transmiterea unei structuri catre o functie
void o_structura(struct Schita schita){
    printf("schita.tip = %d\n",schita.tip);
    printf("schita.culoare = %d\n",schita.culoare);
    printf("schita.raza = %f\nschita.arie = %f\nschita.perimetru = %f\n", schita.raza,schita.arie,schita.perimetru);
}

void main(void){
    struct Schita cerc;
    cerc.tip = 0;
    cerc.culoare = 1;
    cerc.raza = 5.0;
    cerc.arie = 20.0/7.0 * cerc.raza * cerc.raza;
    cerc.perimetru = 2.0 * 20.0 / 7.0 * cerc.raza;
    o_structura(cerc);
}
