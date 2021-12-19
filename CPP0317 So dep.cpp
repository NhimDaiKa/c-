#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin.ignore();
        string so;
        cin >> so;
        int len = so.length();
        int check = 1;
        for (int i=0; i<=len/2; i++){
        	if(so[i] != so[len-1-i] || so[i]%2!=0){
				check = 0;
				break;
			}	
        }
        if (check == 0) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
}
