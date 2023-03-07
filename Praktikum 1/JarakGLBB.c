/*
Nama Program  : jarakGLBB
Deskripsi     : Menghitung dan menampilkan jarak GLBB
Nama Pembuat  : NABIL RAZAKI HERMAN
NIM           : 24060122140147
Tanggal       : 7 MARET 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KAMUS
    float v0;
    float t;
    float a;
    float s;

    //ALGORITMA
    printf("Masukkan nilai v0: ");
    scanf("%f",&v0);
    printf("Masukkan nilai t: ");
    scanf("%f",&t);
    printf("Masukkan nilai a: ");
    scanf("%f",&a);

    s = v0*t + 0.5*a*t*t ;

    printf("Jarak GLBB : %.1f", s);
    return 0;
}
