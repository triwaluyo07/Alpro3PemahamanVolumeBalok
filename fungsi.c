#include"header.h"

int volume1(int panjang, int lebar, int tinggi)
{
    vol1=panjang*lebar*tinggi;

    return(vol1);
}

int volume2(int panjang2, int lebar2, int tinggi2)
{
    vol2=panjang2*lebar2*tinggi2;
    return(vol2);
}

int maxVol(int vol1,int vol2)
{
    if(vol1>vol2)
    {
        return(vol1);
    }
    else
    {
        return(vol2);
    }
}

