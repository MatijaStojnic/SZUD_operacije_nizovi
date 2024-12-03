#include <stdlib.h>
#include <stdio.h>
int main()
{
    int niz[50],n;
    printf("=================================\n");
    printf("Pocetna verzija projekta bez ikakvih funkcija.\n");
    printf("=================================\n");
    unosniza(niz,&n);
    ispisniza(niz,n);
    max_min_prosek(niz,n);
    return 0;
}
