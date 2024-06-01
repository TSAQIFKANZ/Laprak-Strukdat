#include <iostream>
using namespace std;
#include <conio.h>
#include <iomanip>
int DATA[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;
void selection_sort()
{
    int temp, min, i, j;
    for (i = 0; i < 7; i++)
    {
        min = i;
        for (j = i + 1; j < 7; j++)
        {
            if (DATA[j] < DATA[min])
            {
                min = j;
            }
        }
        temp = DATA[i];
        DATA[i] = DATA[min];
        DATA[min] = temp;
    }
}
void binarysearch()
{
    // searching
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 7;
    while (b_flag == 0 && awal <= akhir)
    {
        tengah = (awal + akhir) / 2;
        if (DATA[tengah] == cari)
        {
            b_flag = 1;
            break;
        }
        else if (DATA[tengah] < cari)
            awal = tengah + 1;
        else
            akhir = tengah - 1;
    }
    if (b_flag == 1)
        cout << "\n Data ditemukan pada index ke-"<<tengah<<endl;
    else cout << "\n Data tidak ditemukan\n";
}
int main()
{
    cout << "\t BINARY SEARCH " << endl;
    cout << "\n Data : ";
    // tampilkan DATA awal
    for (int x = 0; x < 7; x++)
    cout << setw(3) << DATA[x];
    cout << endl;
    cout << "\n Masukkan DATA yang ingin Anda cari :";
    cin >> cari;
    cout << "\n Data diurutkan : ";
    // urutkan DATA dengan selection sort
    selection_sort();
    // tampilkan DATA setelah diurutkan
    for (int x = 0; x < 7; x++)
    cout << setw(3) << DATA[x];
    cout << endl;
    binarysearch();
    _getche();
    return EXIT_SUCCESS;
}