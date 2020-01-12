#include "header.h"

int main()
{
    printf("Masukkan panjang volume 1\t : ");
    scanf("%d",&p);
    printf("Masukkan lebar volume 1\t\t : ");
    scanf("%d",&l);
    printf("Masukkan tinggi volume 1\t : ");
    scanf("%d",&t);

    hasil1=volume1(p,l,t);
    printf("Volume Balok 1 : %d\n",hasil1);

    printf("Masukkan panjang volume 1\t : ");
    scanf("%d",&p2);
    printf("Masukkan lebar volume 1\t\t : ");
    scanf("%d",&l2);
    printf("Masukkan tinggi volume 1\t : ");
    scanf("%d",&t2);

    hasil2=volume2(p2,l2,t2);
    printf("Volume Balok 2 : %d\n",hasil2);

    max=maxVol(hasil1,hasil2);
    printf("volume terbesar = %d",max);
    return 0;
}
