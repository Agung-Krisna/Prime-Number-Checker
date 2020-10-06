#include <stdio.h>
#include <stdlib.h>


void prime(int a, int b){

    if (a > 1){
    while (a <= b){
        if (a % 2 == 0 || a % 3 == 0){//Apabila angka bisa dibagi dengan dua dan tiga, maka bilangan tersebut bukanlah bilangan prima.
            printf ("");
        }
        else {
            printf ("%d\n", a);
        }
        a ++;
    }
    }
}

int main(){
    int a;
    int b;

    printf ("Masukkan angka pertama:\n");
    scanf ("%d", &a);

    printf ("Masukkan angka kedua:\n");
    scanf ("%d", &b);

    if (a <= 1){
        printf ("Tidak terdefinisi! Cek kembali input anda.");
    }
    else if (a > 1){
    prime (a, b);//pemanggilan fungsi "prime"
    }
    return 0;
}
