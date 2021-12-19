#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

long long fibo[2000006];
void fb(){
	fibo[0]=0;
	fibo[1]=1;
	for (int i=2; i<=2e6; i++)
		fibo[i]=fibo[i-1] + fibo[i-2];	
}

int main()
{
    int t;
    cin >> t;
    fb();
    while (t--)
    {
        long long n;
        cin >> n;
        for (int i=0; i<=2e6; i++){
        	if(n==fibo[i]){
        		cout << "YES" << endl;
				break;	
        	}
        	if (n < fibo[i]){
        		cout << "NO" << endl;
				break;	
        	}
        }
    }
}
