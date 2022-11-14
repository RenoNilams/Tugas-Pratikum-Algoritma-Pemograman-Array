#include <iostream>

using namespace std;

int main()
{

    string nama[2][2][2] = {{
                           {"yam", "cece"},
                           {"uul", "fara"}
                           },
                           {
                           {"Reno Nilam Sari", "Chindy Rahmawati"},
                           {"Zhulma Fitrah", "Farastika Allistio Putri"}
                           }};


    cout << "PROGRAM MENAMPILKAN NAMA LENGKAP" << endl;


    for(int brs=0; brs<2; brs++){;
        for(int klm=0; klm<2; klm++){

            cout<< "Nama lengkap " << nama[0][brs][klm] << " adalah " << nama[1][brs][klm] << endl;

        }
    }
    return 0;
}
