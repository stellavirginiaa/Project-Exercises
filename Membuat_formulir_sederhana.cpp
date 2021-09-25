#include <iostream >
#include <conio.h>
#include <stdio.h>
#include <string>
#include <time.h>

using namespace std;

int main()

    {
        time_t now = time(0);
        char* dt = ctime(&now);
        string email;
        string nama;
        string nIM;
        string gender;
        string tanggal_lahir;
        string alamat;
        string no_tlp;

        
            
                std::cout<<"==================================="<<endl;
                std::cout<<" "<<endl;
                std::cout<<"    Formulir Data Diri Mahasiswa "<<endl;
                std::cout<<"      "<< %c << endl;
                std::cout<<"==================================="<<endl;
                std::cout<<" "<<endl;
                std::cout<<" "<<endl;
                std::cout<<"Email           :" ; getline(cin,email);
                std::cout<<"Nama            :" ; getline(cin,nama);
                std::cout<<"NIM             :" ; getline(cin,nIM);
                std::cout<<"Jenis Kelamin   :" ; getline(cin,gender);
                std::cout<<"Tanggal lahir   :" ; getline(cin,tanggal_lahir);
                std::cout<<"Alamat          :" ; getline(cin,alamat);
                std::cout<<"No tlp          :" ; getline(cin,no_tlp);
                std::cout<<" "<<endl;
                std::cout<<"        ==Terima Kasih==";
    

            

        getch();
        return 0;

    }

