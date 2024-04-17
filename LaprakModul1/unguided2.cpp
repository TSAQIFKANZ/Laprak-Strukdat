#include <iostream>
using namespace std;

//menggunakan struct
struct dewasiswa{
    string nama;
    string nim;
    int semester;
};

//menggunakan class
class DataDiri {
    private:
        int umur;
        string jurusan;

    public:
        DataDiri(int _umur, string _jurusan){
            umur = _umur;
            jurusan = _jurusan;       
         }

    void display(){
        cout << "Umur : " << umur << endl;
        cout << "Jurusan : " << jurusan << endl;
    }


};


int main(){

    //menggunakan struct
    struct dewasiswa mahasiswa;
    mahasiswa.nama = "Tsaqif Kanz";
    mahasiswa.nim = "2311102075";
    mahasiswa.semester = 2;

    cout << "Data Mahasiswa" << endl;
    cout << "Nama Mahasiswa : " << mahasiswa.nama << endl;
    cout << "NIM : " << mahasiswa.nim << endl;
    cout << "Semester : " << mahasiswa.semester << endl;

    //menggunakan class
    DataDiri mhs(19, "Informatika");
    mhs.display();
    


    return 0;
}
