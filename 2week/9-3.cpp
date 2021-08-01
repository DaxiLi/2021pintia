#include <iostream>

using namespace std;

int main() {
    int Arow,Acol,Brow,Bcol;
    cin >> Arow >> Acol;
    int matA[Arow][Acol];
    for (int i = 0;i < Arow;i++)
    {
        for (int j = 0;j < Acol;j++)
        {
            cin >> matA[i][j];
        }
    }
    cin >> Brow >> Bcol;
    if (Acol != Brow)
    {
        cout << "Error: " << Acol << " != " << Brow << endl;
        return 0;
    }
    int matB[Brow][Bcol];
    for (int i = 0 ; i< Brow;i++)
    {
        for (int j = 0 ;j < Bcol;j++)
        {
            cin >> matB[i][j];
        }
    }

    cout << Arow << " " << Bcol;
    for (int i = 0;i < Arow;i++)
    {
        
        cout <<endl;
        for (int j = 0;j < Bcol;j++)
        {
            int sum = 0;
            for (int k = 0;k < Acol;k++)
            {
                sum += (matA[i][k] * matB[k][j]);
            }
            cout << sum <<" ";
        }
    }

    return 0;
}