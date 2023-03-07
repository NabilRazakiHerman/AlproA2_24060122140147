@@ -0,0 +1,32 @@
/*
Nama Program  : gayaSentr
Deskripsi     : Menghitung dan menampilkan gaya sentripetal
Nama Pembuat  : NABIl RAZAKI HERMAN
NIM           : 24060122140147
Tanggal       : 7 Maret 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    float m ;
    float v ;
    float r ;
    float F ;

    //algoritma
    printf("Masukin Nilai m :");
    scanf("%f", &m);
    printf("Masukin Nilai v :");
    scanf("%f", &v);
    printf("Masukin Nilai r :");
    scanf("%f", &r);

    F = m*((v*v)/r);

    printf("gaya Sentr : %f", F) ;
    return 0;

}
