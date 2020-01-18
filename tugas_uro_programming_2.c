#include <stdio.h>

void turunanPolinom(),kaliPolinom();

void main() {
    int o;
    printf("pilihan operasi polinom:\n");
    printf("1. penjumlahan\n2. pengurangan\n3. perkalian\n4. turunan\npilih angka: \n");
    scanf("%d", &o);

    if(o == 3) {
        kaliPolinom();
    } else if(o == 4) {
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

void kaliPolinom() {
    int a,b;
    int i,j,k;

    printf("orde polinom pertama: \n");
    scanf("%d", &a);

    int coef_a[a+1];

    for(i=0;i<=a;i++) {
        printf("koefisien x ^ %d : \n", i);
        scanf("%d", &coef_a[i]);
    }

    printf("orde polinom kedua: \n");
    scanf("%d", &b);

    int coef_b[b+1];

    for(i=0;i<=b;i++) {
        printf("koefisien x ^ %d : \n", i);
        scanf("%d", &coef_b[i]);
    }

    int coef_kali[(a+b)+1];

    for(i=0;i<=(a+b);i++) {
        coef_kali[i] = 0;
    }

    for(i=0;i<=a;i++) {
        for(j=0;j<=b;j++) {
            k = i + j;
            coef_kali[k] += (coef_a[i]*coef_b[j]); 
        }
    }

    printf("hasil kali fungsi = ");
    for(i=(a+b);i>=0;i--) {
        if(i != 0) {
            printf("%dx^%d + ", coef_kali[i],i);
        } else {
            printf("%d", coef_kali[i]);
        }
    }
}