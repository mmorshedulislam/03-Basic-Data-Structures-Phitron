#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s_i = n - 2;
    int s_o = 0;     
    int m = (n - 1) / 2;

    for (int k = 0; k < m; k++)
    {
        for (int i = 0; i < s_o; i++)
        {
            cout << " ";
        }
        cout << '\\';
        for (int i = 0; i < s_i; i++)
        {
            cout << " ";
        }
        cout << '/';

        s_i -= 2;
        s_o++;

        cout << endl;
    }
    for (int j = 0; j < s_o; j++)
    {
        cout << " ";
    }

    cout << 'X' << endl;

    s_o = m-1;
    s_i = 1;
    
    for (int l = 0; l < m; l++)
    {
        for (int j = 0; j < s_o; j++)
        {
            cout << " ";
        }
        cout << '/';

        for (int j = 0; j < s_i; j++)
        {
            cout << " ";
        }
        cout << '\\';

        s_i+=2;
        s_o--;
        cout << endl;
    }

    return 0;
}

// input
// 5

// output
// \   /
//  \ /
//   X
//  / \
// /   \
