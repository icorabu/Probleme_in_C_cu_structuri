#include "stdio.h"
int main(){
    struct Date{
        char nume_luna[64];
        int month;
        int day;
        int year;
    }data_curenta = {"iulie",7,4,1994};
    int i;
    for (i=0; data_curenta.nume_luna[i];i++){
        //putchar(data_curenta.nume_luna[i]);
        printf("%c",data_curenta.nume_luna[i]);
        
    }
    printf("\n");
    return 0;
}
