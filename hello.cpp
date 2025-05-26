#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nama[5]; //inisialisasi array string untuk menampung 5 nama

    // Input memasukan data 5 buah nama  ke dalam array string 
    system("cls");
    cout << "Silakan masukkan 5 nama:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ". Nama: ";
        getline(cin, nama[i]);
    }

    return 0;
} 