#include <iostream>
using namespace std;

main()
{
    int matrix[4][3];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter index: [" << i << "][" << j << "]";
            cin >> matrix[i][j];
        }
    }
    int identicalRows = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int z = 0; z < 4; z++)
        {
            bool flag = true;
            for (int j = 0; j < 3; j++)
            {
                if (matrix[i][j] != matrix[z][j])
                {
                    flag = false;
                    break;
                }
            }
            if (flag && i > z)
            {
                break;
            }
            if (flag && i < z)
            {
                identicalRows++;
            }
        }
    }
    if (identicalRows != 0)
    {
        identicalRows++;
    }
    cout << identicalRows<< endl;
}