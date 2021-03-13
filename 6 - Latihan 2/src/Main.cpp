#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
using namespace std;

struct Komponen
{
    int No;
    string Nama;
    int skor;
};

struct Mahasiswa
{
    string NoMhs;
    string Nama;
    string MTKul;
    int BanyakKomponen;
    Komponen Komp[10];
};



int main(int argc, char const *argv[])
{ 
    Mahasiswa Mhs[100];

    // batas banyaknya mahasiswa
    int n;
    cout << "Banyak mahasiswa: ";
    cin >> n;
    cin.ignore();

    cout << "\n\n";
    // Input Data Mahasiswa
    for (int i = 0; i < n; i++)
    {
        // Input NoMhs
        cout << "Mhs[" << i << "].NoMhs = ";
        getline(cin, Mhs[i].NoMhs);

        // Input Nama
        cout << "Mhs[" << i << "].Nama  = ";
        getline(cin, Mhs[i].Nama);

        // Input MTKul
        cout << "Mhs[" << i << "].MTKul = ";
        getline(cin, Mhs[i].MTKul);

        // Input Banyak Komponen
        cout << "Mhs[" << i << "].BanyakKomponen = ";
        cin >> Mhs[i].BanyakKomponen;
        cin.ignore();
        
        // Input Struct Array Komponen
        for (int j = 0; j < Mhs[i].BanyakKomponen; j++)
        {
            // Input No Komponen
            cout << "Mhs[" << i << "].Komp[" << j << "].No   = ";
            cin >> Mhs[i].Komp[j].No; cin.ignore();
            
            // Input Nama Komponen
            cout << "Mhs[" << i << "].Komp[" << j << "].Nama = ";
            getline(cin, Mhs[i].Komp[j].Nama);

            // Input Skor Komponen
            cout << "Mhs[" << i << "].Komp[" << j << "].Skor = ";
            cin >> Mhs[i].Komp[j].skor; cin.ignore();
        }
        
    }

    cout << "\n\n";
    
    // Output Data Mahasiswa
    for (int i = 0; i < n; i++)
    {
        cout << "No.Mhs     : " << Mhs[i].NoMhs << endl;
        cout << "Nama       : " << Mhs[i].Nama << endl;
        cout << "Matakuliah : " << Mhs[i].MTKul << endl;
        
        // Output Data komponen berbentuk Tabel/Tabulasi
        // Pengaturan Alignment Tabelnyaaaa pake setw dan " "

        cout << setw(5) << " No " << setw(6) << " Nama Komponen " << setw(0)  << " Nilai " << endl << endl;
        for (int j = 0; j < Mhs[i].BanyakKomponen; j++)
        {
            cout << setw(4) << right << Mhs[i].Komp[j].No << "  " << setw(15) << left <<  Mhs[i].Komp[j].Nama << " " <<  setw(22) << left << Mhs[i].Komp[j].skor << endl;

        }
        cout << "\n\n";
    }
    
    
    
    return 0;
}
