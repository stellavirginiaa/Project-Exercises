#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

main()
{
    float celc, fahr, kelv, ream;

    char Option;
    cout << "Menu Konversi Suhu" << endl;
    cout << "1. Celcius to ( Fahrenheit-Kelvin-Reamur )."<< endl;
    cout << "2. Fahreinheit to ( Celcius-Kelvin-Reamur )."<< endl;
    cout << "3. Kelvin to ( Celcius-Fahrenheit-Reamur )."<< endl;
    cout << "4. Reamur to ( Celcius-Fahrenheit-Kelvin )."<< endl;
    cout << " Masukkan pilihan anda : ";
    cin >> Option;

    if (Option== '1')
        {
            cout << "\nMasukkan Suhu Celcius : ";
            cin >> celc;

            fahr = ( 9 * celc )/ 5 + 32;
            kelv = celc + 273.15;
            ream = celc * 4/5;

            cout << "\n" << celc << " C = " << fahr << "F";
            cout << "\n" << celc << " C = " << kelv << "K";
            cout << "\n" << celc << " C = " << ream << "R";
        }
            else if (Option=='2')
        {
            cout << "\nMasukkan Suhu Fahrenheit : ";
            cin >> fahr;

            celc = (fahr-32)*5/9;
            kelv = (fahr-32)*5/9+273.15;
            ream = (fahr-32)*4/9;

            cout << "\n" << fahr << " F = " << celc << "C";
            cout << "\n" << fahr << " F = " << kelv << "K";
            cout << "\n" << fahr << " F = " << ream << "R";

        }
            else if (Option=='3')
        {
            cout << "\nMasukkan Suhu Kelvin : ";
            cin >> kelv;

            celc = kelv-273.15;
            fahr = (kelv-273.15)*9/5+32;
            ream = (kelv-273)*4/5;

            cout << "\n" << kelv << " K = " << celc << "C";
            cout << "\n" << kelv << " K = " << fahr << "F";
            cout << "\n" << kelv << " K = " << ream << "R";

        }
            else if (Option=='4')
        {
            cout << "\nMasukkan Suhu Reamur : ";
            cin >> ream;

            celc = ream*5/4;
            fahr = ream*9/4+32;
            kelv = celc+273;

            cout << "\n" << ream << " R = " << celc << "C";
            cout << "\n" << ream << " R = " << fahr << "C";
            cout << "\n" << ream << " R = " << kelv << "K";

        }

            else
            cout << "Inputan salah." << endl;

        getch();
        return 0;
}