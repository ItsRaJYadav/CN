#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d[4][4], i, j, k, t = 1;
    int u[10] = {0};

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            d[i][j] = rand() % 10;
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << d[i][j] << " ";
        }
        cout << endl;
    }

    while (t == 1)
    {
        t = 0;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = j + 1; k < 4; k++)
                {
                    if (d[i][j] == d[i][k])
                    {
                        t = 1;
                        d[i][j] = rand() % 10;
                    }
                }
            }
        }
    }

    float s;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 10; k++)
            {
                if (d[i][j] == k)
                    u[k] = u[k] + 1;
            }
        }
    }
    cout << "\nPackets in each slot : ";
    for (i = 0; i < 10; i++)
        cout << u[i] << " ";
    cout << endl;

    for (i = 0; i < 10; i++)
    {
        if (u[i] == 1)
            s = s + 1.0;
    }
    cout << "Efficiency = " << (s * 100) / 16 << endl;

    cout << "\nFinal Packets transmission : \n";
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            cout << d[i][j] << " ";
        cout << endl;
    }
}
