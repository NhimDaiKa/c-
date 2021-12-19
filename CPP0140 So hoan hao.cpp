#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int snt(long long n)
{
    if(n < 2) return 0;
    for(long long i = 2; i <= sqrt(n);i++) 
		if(n%i==0) return 0;
    return 1;
}
int main()
{
    int t;
    cin >> t;
    long long a[100];
    int dem = 0;
    
    // cthuc EuClid
    for (long long i = 0; i < 32; i++)
    {
        long long b = pow(2, i) - 1;
        if (snt(i) == 1 && snt(b) == 1){
            a[dem] = b * pow(2, i - 1);
            dem++;
        }
    }
    
    while (t--)
    {
        long long n;
        cin >> n;
        int note = 0;
        for (int i = 0; i < dem; i++)
        {
            if (n == a[i]){
                note = 1;
            	break;
			}
			if ( n < a[i])
				break;
        }
        cout << note << endl;
    }
}
