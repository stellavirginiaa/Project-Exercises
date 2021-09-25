#include <iostream>
#include <stdio.h>
#include <conio.h>

main()
{
    //Deklarasi

    int panjang;
    int lebar;
    int luas;

    //Algoritma//

    printf("input panjang segiempat = "); scanf("%d", &panjang);
    printf("input lebar segiempat = "); scanf("%d", &lebar);

    luas = panjang * lebar;
    printf("Luas segi empat adalah = %d \n", luas);
     
    getch();
    return 0;
}

