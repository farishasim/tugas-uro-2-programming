# include <stdio.h>
int main (){
printf ("Pilihan Operasi \n");
printf ("1. Penjumlahan \n");
printf ("2. Pengurangan \n");
printf ("3. Perkalian \n");
printf ("4. Pembagian \n");
printf ("5. Differensial \n");
char op;
scanf ("%s", &op);
int x,y;
int polx[100]={};
int poly[100]={};
printf ("Masukkan derajat polinom pertama \n");
scanf ("%d", x);
for (int i=0;i<x;i++){
printf ("masukkan koefisien polinom derajat %d\n",i);
scanf("%d", polx[i]);
}
printf ("Masukkan derajat polinom kedua \n");
scanf ("%d", y);
for (int i=0;i<y;i++){
printf ("masukkan koefisien polinom derajat %d\n",i);
scanf("%d", poly[i]);
}
if (op=="1")
penjumlahan ();
return 1;
}
int penjumlahan(){
    int x,y;
int polx[100]={};
int poly[100]={};
printf ("Masukkan derajat polinom pertama \n");
scanf ("%d", x);
int i;
for (i=0;i<x;i++){
printf ("masukkan koefisien polinom derajat %d\n",i);
scanf("%d", polx[i]);
}
printf ("Masukkan derajat polinom kedua \n");
scanf ("%d", y);
for (i=0;i<y;i++){
printf ("masukkan koefisien polinom derajat %d\n",i);
scanf("%d", poly[i]);
}
int hasil [100]={};
for (int i=0;i<x;i++){
hasil[i]=polx[i]+poly[i];
}
for (int n=0;n<x;n++){
printf("%d x^%d ", &hasil[n],&n);
}
}
int pengurangan(int pol1 [],int pol2 [],int x){
int hasil [100]={};
for (int i=0;i<x;i++){
hasil[i]=pol1[i]-pol2[i];
}
}