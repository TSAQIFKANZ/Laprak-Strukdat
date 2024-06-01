#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void selection_sort(vector<char>& data) {
    int n = data.size();
    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (data[j] < data[min_idx]) {
                min_idx = j;
            }
        }
        swap(data[i], data[min_idx]);
    }
}

bool binary_search(const vector<char>& data, char target) {
    int left = 0, right = data.size() - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (data[middle] == target) {
            return true;
        } else if (data[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return false;
}

int main() {
    string input;
    char target;

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, input);

    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> target;

    // Mengubah kalimat menjadi array karakter dan mengurutkannya
    vector<char> data(input.begin(), input.end());

    // Mengurutkan array karakter
    selection_sort(data);

    // Menampilkan array karakter setelah diurutkan
    cout << "Kalimat setelah diurutkan: ";
    for (char c : data) {
        cout << c << ' ';
    }
    cout << endl;

    // Melakukan pencarian biner
    if (binary_search(data, target)) {
        cout << "Huruf '" << target << "' ditemukan dalam kalimat." << endl;
    } else {
        cout << "Huruf '" << target << "' tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}
