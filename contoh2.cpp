#include <iostream>
using namespace std;

int main(){
    int bilangan;

    srand(time(0));

    bilangan = rand() % 10;

    while (bilangan > 4)
    {
        cout << "nilangan lebih dari 4" << endl;
        bilangan = rand() % 10;
        cout << "bilangannya = " << bilangan << endl;
    }

    cout << "bilangan terakhir = " << bilangan << endl;
}