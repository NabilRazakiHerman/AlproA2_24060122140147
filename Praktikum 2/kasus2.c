/*
Nama Program  : Kasus2
Deskripsi     : Menunjukan hari melalui input i
Nama Pembuat  : NABIL RAZAKI HERMAN
NIM           : 24060122140147
Tanggal       : 14 Maret 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KAMUS
    int i;

    //ALGORITMA
    printf("Masukkan nomor hari : ");
    scanf("%d", &i);
    if (i>=1 &&i<=7){
        if (i == 1){
            printf("Hari Senin");
        }else if (i == 2){
            printf("Hari Selasa");
        }else if (i == 3){
            printf("Hari Rabu");
        }else if (i == 4){
            printf("Hari Kamis");
        }else if (i == 5){
            printf("Hari Jumat");
        }else if (i == 6){
            printf("Hari Sabtu");
        }else{
            printf("Hari Minggu");
        }
    }else{
        printf("Masukkan nomor hari tidak tepat");
    }
    return 0;
}
