/*  Program treba izracunat: S=1+(1+2)+(1+2+3)+..….+(1+2+3+…+n)  */

#include<stdio.h>

int main()
{
        int N,suma,suma1=0,i,j;

        printf("Unesi vrijednost za N = ");
        scanf("%d",&N);

        for(i=1;i<=N;i++)
    {
                suma=0;
                for(j=1;j<=i;j++)
                {
                    suma=suma+j;
                }
                suma1=suma1+suma;
        }

        printf("\nZbroj brojeva do [ %d ]  = [ %d ]\n",N,suma1);

        return 0;
}
