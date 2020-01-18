#include <stdio.h>

void turunanPolinom();

void main() {
    int o;
    printf("pilihan operasi polinom:\n");
    printf("1. penjumlahan\n2. pengurangan\n3. perkalian\n4. turunan\npilih angka: \n");
    scanf("%d", &o);

    if(o == 4) {
        turunanPolinom();
    }
}

void turunanPolinom() {
    int n,i;

    printf("orde fungsi polinom: \n"); 
    scanf("%d", &n); // n = pangkat tertinggi polinom

    int coefPolinom[n+1]; // array berisi koefisien2 
    int coefTurunan[n]; //array berisi koefisien2 turunan

    for(i=0;i<=n;i++) {
        printf("koefisien x ^ %d : \n", i);
        scanf("%d", &coefPolinom[i]); 
    }

    printf("fungsi turunan = ");
    for(i=n-1;i>=0;i--) {
        coefTurunan[i] = (i+1)*coefPolinom[i+1];
        if(i != 0) {
            printf("%dx^%d + ", coefTurunan[i],i);
        } else {
            printf("%d", coefTurunan[i]);
        }
    }
}