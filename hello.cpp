#include <iostream>
#include <string>
#include <iomanip> 
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

     // Menampilkan output  data pada array 
    cout << "\nDaftar Nama yang Telah Dimasukkan:\n";
    cout << "+-------+--------------------------+" << endl;
    cout << "| No    | Nama                     |" << endl;
    cout << "+-------+--------------------------+" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "| " << setw(5) << right << i + 1 << " | "
             << setw(25) << left << nama[i] << "|" << endl;

    }

    cout << "+-------+--------------------------+" << endl;


    return 0;
} 