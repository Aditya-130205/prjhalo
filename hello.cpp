#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

int main()
{
    int jumlahNama; //inisialisasi array string untuk menampung 5 nama
    system("cls");

    // Memasukkan input jumlah nama atau jumlah nama yang ingin di masukkan 
    cout << "Masukkan jumlah nama yang ingin dimasukkan: ";
    cin >> jumlahNama;
    cin.ignore();

    string* nama = new string[jumlahNama]; // Deklarasi array dinamis untuk menyimpan nama

    // Input memasukan data 5 buah nama  ke dalam array string 
    cout << "Masukkan " << jumlahNama << " nama:\n";
    for (int i = 0; i < jumlahNama; i++)
    {
        cout << i + 1 << ". Nama: ";
        getline(cin, nama[i]);
    }
    
    // Menampilkan output  data pada array 
    cout << "\nDaftar Nama yang Telah Dimasukkan:\n";
    cout << "+-------+--------------------------+" << endl;
    cout << "| No    | Nama                     |" << endl;
    cout << "+-------+--------------------------+" << endl;

    for (int i = 0; i < jumlahNama; i++)
    {
        cout << "| " << setw(5) << right << i + 1 << " | "
             << setw(25) << left << nama[i] << "|" << endl;

    }

    cout << "+-------+--------------------------+" << endl;

    delete[] nama;

    return 0;
} 