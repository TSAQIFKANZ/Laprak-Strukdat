#include <iostream> 

using namespace std;

int fungsi1(int a, int b){
    int angka = a + b;
    cout << angka << endl; 

    return angka;
}

string fungsi2(string a){
    cout << a;
    return a;
}

int main (){

    int a, b;
    string nama;
    cout << "Masukan Nama Anda : ";
    cin >> nama;
    cout << "Masukan Dua Angka Yang Ingin Dijumlahkan :" << endl;
    cin >> a >> b;
    cout << "Nama Anda : " << endl;
    fungsi2(nama);
    cout << endl;
    cout << "Hasil Perjumlahan : " << endl;
    fungsi1(a,b);
    return 0;
}