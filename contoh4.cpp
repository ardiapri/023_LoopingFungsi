#include <iostream>
using namespace std;

int main()
{
    int bilangan;

    srand(time(0));

    bilangan = rand() % 10;

    cout << "bilangan awal = " << bilangan << endl;
    do
    {
        cout << "perulangan DO..WHILE" << endl;
        bilangan = rand() % 10;
        cout << "bilangannya = " << bilangan << endl;

    } while (bilangan > 5);
}