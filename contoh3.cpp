#include <iostream>
using namespace std;

int ntelor, nmie, nair;
int htelor = 2000, hmie = 2800, hair = 3000;
string nama;

void input()
{
    cout << "masukan nama = ";
    cin >> nama;
    cout << "masukan jumlah telur = ";
    cin >> ntelor;
    cout << "masukan jumlah mie = ";
    cin >> nmie;
    cout << "masukan jumlah air mineral = ";
    cin >> nair;
}

int hitungharga()
{
    return (ntelor * htelor) + (nmie *hmie) + (nair * hair);
}

void display ()
{
    cout << "nama = " << nama << endl;
    cout << "jumlah telor = " << ntelor << endl;
    cout << "jumlah mie = " << nmie << endl;
    cout << "jumlah air = " << nair << endl;
    cout << "total harga rp." << hitungharga() << endl;
}

int main()
{
    char pilihan;
    do
    {
         input();
         display();

         cout << "apakah anda ingin mengulangi (y/n) ? ";
         cin >> pilihan;

    }while (pilihan == 'y' || pilihan == 'y');
}
    
    