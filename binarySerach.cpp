#include <iostream>
using namespace std;

intelement[10];
intnPanjang;
int X;

void input()
{
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array (maksimal 10): ";
        cin >> nPanjang;

        if (nPanjang <= 10)
        {
            break;
        }
        else
        {
            cout << "\n[!] jumlah elemen tidak boleh lebih dari 10. silahkan coba lagi.\n";
        }
    }

    cout << "\n==================================\n";
    cout << "            Masukan elemen array   \n";
    cout << "===================================\n";