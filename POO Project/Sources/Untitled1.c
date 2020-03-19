#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double t,m;
int i,j,k,l,n;
float s,a[20][20],b[10];


void  main()
{
    printf("Introduceti nr. de linii si de coloane ale matricei: \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
    {
        printf("a[%d][%d]= ",i,j);
        scanf("%f",&a[i][j]);
    }
    printf("Dati termenii liberi: \n");
    for(i=1;i<=n;i++)
    {
        printf("b[%d]: ",i);
        scanf("%f",&b[i]);
    }

    for(k=1;k<=n;k++)
    {
        l=k;
        for(i=k+1;i<=n;i++)
        if(abs(a[i][k])>abs(a[k][k]))
        l=i;
        if(l!=k)
        {
            for(j=1;j<=n;j++)
            {
                t=a[k][j];
                a[k][j]=a[l][j];
                a[l][j]=t;

            }
            t=b[k];
            b[k]=b[l];
            b[l]=t;

        }

        for(i=k+1;i<=n;i++)
        {
            m=a[i][k]/a[k][k];
            a[i][k]=0;
            for(i=k+1;j<=n;j++)
                a[i][j]=a[i][j]-m*a[k][j];
            b[i]=b[i]-m*b[k];
        }
    }
    printf("Dupa eliminarea gaussiana matricea este: \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            printf("a[%d][%d]=%f",i,j,a[i][j]);
        printf("b[%d]=%f",i,b[i]);
        printf("\n");
    }
    getch();
}
