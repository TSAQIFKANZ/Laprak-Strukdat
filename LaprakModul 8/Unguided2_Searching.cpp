#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk mengecek apakah sebuah karakter adalah huruf vokal
bool isVowel(char c) {
    c = tolower(c); // Mengubah karakter menjadi huruf kecil
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Fungsi untuk menghitung jumlah huruf vokal dalam kalimat
int countVowels(const string& sentence) {
    int count = 0;
    for (char c : sentence) {
        if (isVowel(c)) {
            count++;
        }
    }
    return count;
}

int main() {
    string sentence;
    
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, sentence);
    
    int vowelCount = countVowels(sentence);
    
    cout << "Jumlah huruf vokal dalam kalimat: " << vowelCount << endl;
    
    return 0;
}
