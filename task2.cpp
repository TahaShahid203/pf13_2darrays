#include <iostream>
using namespace std;

main()
{
    int matrix[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter index: ["<< i << "]["<< j << "]";
            cin >> matrix[i][j];
        }
    }
    bool identityFlag = true;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0))
            {
                identityFlag = false;
                break;
            }
        }
    }
    if (identityFlag)
    {
        cout << "Identity matrix" << endl;
    }
    else
    {
        cout << "Not identity" << endl;
    }
}