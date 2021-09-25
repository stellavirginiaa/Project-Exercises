#include <iostream>

int main()
{
    typedef struct 

        { int jam;   // jam
         int menit; // menit
         int detik; // detik
         } Jam; 
// Di berikan spasi agar terlihat lebih rapih

    Jam j;
    // Algoritma program mengubah durasi waktu ke detik
            std::cout << "Jam: ";
            std::cin >> j.jam;
            std::cout << "Menit: ";
            std::cin >> j.menit;
            std::cout << "Detik: ";
            std::cin >> j.detik;

    // Algoritma menghitung detik
    /*
       Narasi:
       1. Ubah jam menjadi detik dengan mengalikan bilangan 3600
       2. Ubah menit menjadi detik dengan mengalikan bilangan 60
       3. Setelah semua diubah menjadi detik, tambahkan hasil perkaliannya
    */
        int total_detik = (j.jam * 3600) + (j.menit * 60) + j.detik;

        std::cout << "Total detik adalah " << total_detik << std::endl;
}