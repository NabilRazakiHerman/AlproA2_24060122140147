/*
Nama Program  : Kasus4
Deskripsi     : Menunjukan jumlah tahanan
Nama Pembuat  : NABIL RAZAKI HERMAN
NIM           : 24060122140147
Tanggal       : 14 Maret 2023
*/#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KAMUS
    int a;
    int b;
    int c;
    int total;

    //ALGORITMA
    printf("Tahanan 1 : ");
    scanf("%d", &a);
    printf("Tahanan 2 : ");
    scanf("%d", &b);
    printf("Tahanan 3 : ");
    scanf("%d", &c);

    if (a>0 && b>0 && c>0){
        total = a+b+c;
        printf("Total Tahanan : %d", total);
    }else{
        printf("Masukan Tahanan Tidak Boleh Negatif");
    }
    return 0;
}
