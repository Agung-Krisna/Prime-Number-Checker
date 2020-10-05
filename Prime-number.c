#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;

    printf ("Masukkan Angka Pertama:\n");
    scanf ("%d", &a);

    printf ("Masukkan Angka Kedua:\n");
    scanf ("%d", &b);

    if (a < 0){
        printf ("Bilangan tidak terdefinisi, cek kembali input anda");
    }


    if (a > 0){
        printf ("Bilangan Hasil:\n");
    while (a <= b){
        if (a == 2){
            printf ("2\n");
        }
        if (a == 9){
            printf ("");}
        else if (a % 2 != 0){
            printf ("%d\n", a);
        }
        a++;
    }
    }
}
