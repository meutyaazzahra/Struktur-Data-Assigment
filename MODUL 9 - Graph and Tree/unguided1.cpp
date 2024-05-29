/// Meutya Azzahra Efendi
/// 2311102166

#include <iostream>
#include <iomanip>

using namespace std;

// Penamaan variabel global unutk index array dan data cin
int vertexAmount_2311102166;
int vertexWeight_2311102166;
string vertexName_2311102166;

// Fungsi untuk mengisi simpul
void fillVertex(string vertex[])
{
    cout << "Silahkan masukkan nama simpul" << endl;
    for (int i = 0; i < vertexAmount_2311102166; i++)
    {
        cout << "Simpul " << i + 1 << " : ";
        cin >> vertexName_2311102166;

        vertex[i] = vertexName_2311102166;
    }

    cout << endl;
}

int main()
{
    // Penginputan index oleh user
    cout << "Masukkan jumlah simpul : ";
    cin >> vertexAmount_2311102166;

    //  Deklarasi array sesuai index
    string vertex_2311102166[vertexAmount_2311102166];
    int matrix_2311102166[vertexAmount_2311102166][vertexAmount_2311102166];

    // Pemanggilan fungsi
    fillVertex(vertex_2311102166);

    cout << "Silahkan masukkan bobot antar simpul" << endl;

    // Pengisian bobot simpul
    for (int i = 0; i < vertexAmount_2311102166; i++)
    {
        for (int j = 0; j < vertexAmount_2311102166; j++)
        {
            cout << vertex_2311102166[i] << " ------> " << vertex_2311102166[j] << " = ";
            cin >> vertexWeight_2311102166;

            matrix_2311102166[i][j] = vertexWeight_2311102166;
        }

        cout << endl;
    }

    cout << endl;

    cout << "Matriks bobot antar simpul" << endl;
    cout << setw(12) << "";

    // Mencetak header untuk nama simpul
    for (int i = 0; i < vertexAmount_2311102166; i++)
    {
        cout << setw(12) << vertex_2311102166[i];
    }

    cout << endl;

    //  Mencetak bobot setiap simpul
    for (int i = 0; i < vertexAmount_2311102166; i++)
    {
        // Mencetak kolom untuk nama simpul
        cout << setw(12) << vertex_2311102166[i];

        for (int j = 0; j < vertexAmount_2311102166; j++)
        {
            cout << setw(12) << matrix_2311102166[i][j];
        }

        cout << endl;
    }
}