#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long a[100000];
    for (int i=0; i<n; i++)
    	cin >> a[i];
    sort(a,a+n);
    cout << a[0] << " ";
    for (int i=1; i<n; i++){
    	if (a[i]!=a[i-1]) cout << a[i] << " ";	
    }
    cout << endl;
}
