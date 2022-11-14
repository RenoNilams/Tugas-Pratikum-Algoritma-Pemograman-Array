#include <iostream>

using namespace std;

int main()
{
    string data[10][2];
    int i;

    cout << "Nama : Reno Nilam Sari" << endl;
    cout << "NIM  : 22343068" << endl;

    cout << "PROGRAM MENGINPUT DATA DAERAH ASAL MAHASISWA INFORMATIKA" << endl;

    for(i=0; i<10; i++){
        cout << "Ketikkan nama : ";
        cin  >> data[i][0];
        cout << "Ketikkan daerah asal : ";
        cin  >> data[i][1];
    }

    cout << "DATA DAERAH ASAL MAHASISWA INFORMATIKA" << endl;

    for(i=0; i<10; i++){
    cout << i+1 << ". " << data[i][0] << " berasal dari " << data[i][1] << endl;
    }

    return 0;
}
