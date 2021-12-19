#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long arr[a + 5] = {};
        long long m = -999999999999;
        int c = 1;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            m = max(arr[i], m);
        }
        for (int i = 0; i < a; i++)
        {
            if (arr[i] < 0)
                cout << arr[i] << " ";
        }
        for (int i = 0; i < a; i++)
        {
            if (arr[i] == m && c == 1)
            {
                cout << b << " ";
                c = 0;
            }

            if (arr[i] >= 0)
                cout << arr[i] << " ";
        }
        cout << endl;
    }
}