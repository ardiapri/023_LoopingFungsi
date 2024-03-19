#include <iostream>
using namespace std;

int main()
{
	int i;
	string nama[5];

	for (i = 0; i < 100; i++)
	{
		cout << i << ". " << "SELAMAT PUASA" << endl;
	
    }
    cout << "nilai i terakhir = " << i << endl;

    for (i = 0; i < 5; i++) {
        cout << "masukan nama ke-" << i << ":";
        cin >> nama [i];
    }

    for (i = 0; i < 5; i++){
        cout << "nama ke-" << i << ": " << nama[i] << endl;

    }
}