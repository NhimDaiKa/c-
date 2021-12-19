#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
#define mod 1000000007
#define PI 3.141592653589793238
#define a() a

using namespace std;

void sortA1ByA2(int A1[], int N, int A2[], int M, int ans[])
{
    map<int, int> mp;
 
    int ind = 0;
 
    for (int i = 0; i < N; i++) {
        mp[A1[i]] += 1;
    }
 
  
    for (int i = 0; i < M; i++) {
 
     
        if (mp[A2[i]] != 0) {
            for (int j = 1; j <= mp[A2[i]]; j++)
                ans[ind++] = A2[i];
        }
 
        mp.erase(A2[i]);
    }
 

    for (auto it : mp) {
 
       
        for (int j = 1; j <= it.second; j++)
            ans[ind++] = it.first;
    }
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        int a[1000006],b[1000006];
        cin>>n>>m;
        for(int i=0; i<n;i++)
            cin>>a[i];
        for(int i=0; i<m;i++)
            cin>>b[i];
        int ans[n];
        sortA1ByA2(a, n, b, m, ans);
        printArray(ans, n);
    }
    return 0;
}
