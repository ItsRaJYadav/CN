#include <bits/stdc++.h>
using namespace std;
void check(int mat[4][4])
{
    int sum = 0;
    int one = 0;
    int two = 0;
    int nminus1 = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum = sum + mat[i][j];
        }
        if (sum == 1)
            one++;
        else if (sum == 2)
            two++;
        else if (sum == 3)
            nminus1++;
        sum = 0;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    if (one == 0 && two == 0 && nminus1 == 4)
        cout << "Mesh topology" << endl;
    cout << endl;

    if (one == 3 && two == 0 && nminus1 == 1)
        cout << "Star topology" << endl;
    cout << endl;

    if (one == 0 && two == 4 && nminus1 == 0)
        cout << "Ring topology" << endl;
    cout << endl;
}
int main()
{
    // mat1 is ring
    int mat1[4][4] = {0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0};
    // mat2 is mesh
    int mat2[4][4] = {0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0};
    // mat3 is star
    int mat3[4][4] = {0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0};
    cout << "mat1 is: " << endl;
    check(mat1);
    cout << "mat2 is: " << endl;
    check(mat2);
    cout << "mat3 is: " << endl;
    check(mat3);
    return 0;
}
