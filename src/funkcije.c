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
void max_min_prosek(int niz[],int n)
{
    int max=niz[0];
    int min=0;
    int suma=0;
    for(int i=0;i<n;i++)
    {
        if(max<niz[i])
        {
            max=niz[i];
        }
        if(min>niz[i])
        {
            min=niz[i];
        }
        suma+=niz[i];
    }
    float prosek=(float)suma/n;
    printf("\nNajveci element je %d, najmanji %d, a prosek niza %.2f\n",max,min,prosek);
}
void sortiranje(int niz[],int n)
{
    printf("Sortirani niz: ");
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(niz[i]>niz[j])
            {
                int z=niz[i];
                niz[i]=niz[j];
                niz[j]=z;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",niz[i]);
    }
}
void brojanjePonavljanja(int niz[], int n)
{
    int brojac = 0, element;
    printf("\n\nUnesite broj koji zelite da prebrojite u nizu: ");
    scanf("%d", &element);
    
    for(int i=0;i<n;i++)
    {
        if(niz[i]==element)
        {
            brojac++;
        }
    }
    if(brojac>0)
    {
        printf("Broj %d se pojavljuje u nizu %d puta.\n", element, brojac);
    }else{
        printf("Broj %d se ne pojavljuje u nizu.\n", element);
    }
}
