#include <stdlib.h>
#include <stdio.h>
int main()
{
    int niz[50],n;
    printf("============================================\n");
    printf("Projekat sa svim implementiranim funkcijama!\n");
    printf("============================================\n");
    unosniza(niz,&n);
    ispisniza(niz,n);
    max_min_prosek(niz,n);
    sortiranje(niz,n);
    brojanjePonavljanja(niz,n);
    return 0;
}
