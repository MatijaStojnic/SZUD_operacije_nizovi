#include <stdio.h>
#include "funkcije.h"
void unosniza(int niz[], int *n)
{
    printf("Unesite broj elemenata: ");
    scanf("%d",n);
    printf("Unesite elemente: ");
    for(int i=0;i<*n;i++)
    {
        scanf("%d", &niz[i]);
    }
}
void ispisniza(int niz[], int n)
{
    printf("\nIspis: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",niz[i]);
    }
    printf("\n");
}
