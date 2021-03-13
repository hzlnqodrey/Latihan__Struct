#include <iostream>
#include <iomanip>
using namespace std;

struct Mahasiswa {
        char NoMhs[11];
        char Nama[50];
        char Kelas[2];
        int nilaiAngka;
        string nilaiHuruf;
    };

int main(int argc, char const *argv[])
{ 
    // deklarasi struct Mahasiswa dengan nama mhs
    Mahasiswa mhs[5];

    cout << setfill('-') << setw(42) << "\n";
    cout << "Program untuk input/output data mahasiswa" << endl;
    cout << setfill('-') << setw(42) << "\n";
    cout << "\n\n";

    // input data mahasiswa
    cout << "INPUT DATA" << endl << endl;
    for(int i = 0; i < 5; i++) {
        cout << "|Data Mahasiswa ke-" << i+1 << "|" << endl;
        // input NoMhs
        cout << "No. Mahasiswa : ";
        cin.getline(mhs[i].NoMhs, 11);
        // Input Nama 
        cout << "Nama Mahasiswa: ";
        cin.getline(mhs[i].Nama, 50);
        // Input Kelas
        cout << "Kelas         : ";
        cin.getline(mhs[i].Kelas, 2);
        // Input Nilai
        cout << "Nilai Angka   : ";
        cin >> mhs[i].nilaiAngka;
        cin.ignore();
        
        if( (mhs[i].nilaiAngka > 0) && (mhs[i].nilaiAngka < 20) ) {
            mhs[i].nilaiHuruf = "E";
        } else if ( (mhs[i].nilaiAngka >= 20) && (mhs[i].nilaiAngka < 40) ) {
            mhs[i].nilaiHuruf = "D";
        } else if ( (mhs[i].nilaiAngka >= 40) && (mhs[i].nilaiAngka < 60) ) {
            mhs[i].nilaiHuruf = "C";
        } else if ( (mhs[i].nilaiAngka >= 60) && (mhs[i].nilaiAngka < 75) ) {
            mhs[i].nilaiHuruf = "B";
        } else if ( (mhs[i].nilaiAngka >= 75) && (mhs[i].nilaiAngka <= 100) ) {
            mhs[i].nilaiHuruf = "A";
        }
        
        cout << endl;
    }

    // output data mahasiswa
    cout << "OUTPUT DATA" << endl << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << setfill('=') << setw(20) << "\n";
        cout << "Data Mahasiswa ke-" << i+1 << "" << endl;
        cout << setfill('=') << setw(20) << "\n";

        cout << "No. Mahasiswa : " << mhs[i].NoMhs << endl;
        cout << "Nama Mahasiswa: " << mhs[i].Nama << endl;
        cout << "Kelas         : " << mhs[i].Kelas << endl;
        cout << "Nilai Angka   : " << mhs[i].nilaiAngka << endl;
        cout << "Nilai Huruf   : " << mhs[i].nilaiHuruf << endl;

        cout << "\n\n";   
    }
    

    

    return 0;
}
