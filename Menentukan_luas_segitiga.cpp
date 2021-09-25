#include <iostream>
#include <stdio.h>
#include <conio.h>

main()
{
    //Deklarasi

    const float konstanta=0.5;
    float alas;
    float tinggi;
    float luas;

    //Algoritma//
    printf("Satuan=%.1f \n", konstanta);
    printf("Input Alas="), scanf("%f", &alas);
    printf("Input Tinggi="), scanf("%f", &tinggi);

    luas= konstanta * alas * tinggi;
    printf("Luas segitiga= %.f \n", luas);

  
    getch();
    return 0;
}