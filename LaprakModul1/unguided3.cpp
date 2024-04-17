#include <iostream>
#include <map>

using namespace std;

int main() {
    // Mendeklarasikan map dengan key string dan value integer
    map<string, int> umur;

    // Menambahkan data ke dalam map
    umur["Tsaqif"] = 25;
    umur["Rizky"] = 30;
    umur["Ridho"] = 35;

    // Mengakses dan mencetak nilai pada map
    cout << "Umur Yudhis: " << umur["Tsaqif"] << " tahun" << endl;
    cout << "Umur Rizky: " << umur["Rizky"] << " tahun" << endl;
    cout << "Umur Ridho: " << umur["Ridho"] << " tahun" << endl;

    return 0;
}