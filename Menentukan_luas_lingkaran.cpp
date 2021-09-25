#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

main()
{
    //Deklarasi

    const float PHI=3.14;
    float jari;
    float luas;

    //Algoritma//
    printf("PHI=%.2f \n", PHI);
    printf("Input Jari-jari="), scanf("%f", &jari);

    luas= PHI * jari * jari;
    printf("Luas lingkaran adalah =%.2f \n", luas);

  
    getch();
    return 0;
}