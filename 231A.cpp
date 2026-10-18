#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = 0;

    for (int j = 0; j < n; j++)
    {
        int a[3];

        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }

        int count = 0;

        for (int i = 0; i < 3; i++)
        {
            if (a[i] == 1)
            {
                count++;
            }
        }

        if (count >= 2)
        {
            x++;
        }
    }

    cout << x << endl;

    return 0;
}