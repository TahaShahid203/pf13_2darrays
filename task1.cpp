#include <iostream>
using namespace std;

main()
{
    int sum = 0;
    int matrix[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter index: ["<< i << "]["<< j << "]";
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += matrix[i][j];
        }
    }
    cout << sum << endl;

}