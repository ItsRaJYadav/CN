#include <iostream>
#include <math.h>
using namespace std;
int i, j, p, d[5][5];
void disp(int m, int n)
{
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            cout << d[i][j] << " ";
        cout << endl;
    }
}
bool xor1(int a, int b)
{
    return !(a == b);
}
int main()
{
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            d[i][j] = rand() % 2;
    }
    disp(3, 3);

    // LRC
    for (i = 0; i < 3; i++)
    {
        p = 0;
        for (j = 0; j < 3; j++)
            p = xor1(p, d[i][j]);
        d[i][3] = p;
    }
    cout << "\nLRC : ";
    for (i = 0; i < 3; i++)
        cout << d[i][3] << " ";

    // VRC
    for (i = 0; i < 3; i++)
    {
        p = 0;
        for (j = 0; j < 3; j++)
            p = xor1(p, d[j][i]);
        d[3][i] = p;
    }
    cout << "\nVRC : ";
    for (i = 0; i < 3; i++)
        cout << d[3][i] << " ";

    // block parity
    p = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            p = xor1(p, d[i][j]);
        }
    }
    d[3][3] = p;

    cout << "\nBlock Parity : " << d[3][3];
    d[1][1] = 1 - d[1][1];

    // LRC
    for (i = 0; i < 4; i++)
    {
        p = 0;

        for (j = 0; j < 4; j++)
            p = xor1(p, d[i][j]);

        d[i][4] = p;
    }
    cout << "\nLRC : ";
    for (i = 0; i < 4; i++)
        cout << d[i][4] << " ";

    // VRC
    for (i = 0; i < 4; i++)
    {
        p = 0;
        for (j = 0; j < 4; j++)
            p = xor1(p, d[j][i]);
        d[4][i] = p;
    }
    cout << "\nVRC : ";
    for (i = 0; i < 4; i++)
        cout << d[4][i] << " ";

    // block parity
    p = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            p = xor1(p, d[i][j]);
        }
    }
    d[4][4] = p;
    cout << "\nBlock Parity : " << d[4][4] << endl;
    disp(5, 5);
    return 0;
}
