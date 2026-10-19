#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int limak = a, bob = b;
    int count = 0;

    while (limak <= bob)
    {
        limak = limak * 3;
        bob = bob * 2;
        count++;
    }

    cout << count << endl;

    return 0;
}
