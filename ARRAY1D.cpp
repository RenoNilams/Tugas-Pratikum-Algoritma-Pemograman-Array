#include <iostream>

using namespace std;

int main()
{
    string nama[10], asal[10];
    int i;

    cout << "Nama : Reno Nilam Sari" << endl;
    cout << "NIM  : 22343068" << endl;

    cout << "PROGRAM MENGINPUT DATA DAERAH ASAL MAHASISWA INFORMATIKA" << endl;

    for(i=0; i<10; i++){
    cout << "Ketikkan nama : ";
    cin  >> nama[i];
    cout << "Ketikkan daerah asal : ";
    cin >> asal[i];
    }

    cout << "DATA DAERAH ASAL MAHASISWA INFORMATIKA" << endl;

    for(i=0; i<10; i++){
    cout << i+1 << ". " << nama[i] << " berasal dari " << asal[i] << endl;
    }

    return 0;

}
