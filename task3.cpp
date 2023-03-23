#include <iostream>
using namespace std;

char battleStar[5][5] = {
    {'.', '.', '.', '*', '*'},
    {'.', '*', '.', '.', '.'},
    {'.', '*', '.', '.', '.'},
    {'.', '*', '.', '.', '.'},
    {'.', '.', '*', '*', '.'}};
string splashorNot(string coordinates);

main()
{
    string coordinate;
    while (true)
    {
        cout << "Enter coordinate: ";
        cin >> coordinate;
        cout << splashorNot(coordinate) << endl;
    }
}
string splashorNot(string coordinates)
{
    char numbers[5] = {'1','2','3','4','5'};
    char alphabets[5] = {'A', 'B', 'C', 'D', 'E'};
    int coordinateX, coordinateY;
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] == coordinates[1])
        {
            coordinateY = i;
            break;
        }

    }
    for (int i = 0; i < 5; i++)
    {
        if (alphabets[i] == coordinates[0])
        {
            coordinateX = i;
            break;
        }
    }
    if (battleStar[coordinateX][coordinateY] == '*')
    {
        return "Boom";
    }
    else 
    {
        return "Splash";
    }
}