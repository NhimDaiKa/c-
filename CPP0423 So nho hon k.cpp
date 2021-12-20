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

using namespace std;

int minSwap(long long *arr, long long n, long long k) {
    int count = 0;
    for (long long i = 0; i < n; ++i)
        if (arr[i] <= k)
            ++count;
    int bad = 0;
    for (long long i = 0; i < count; ++i)
        if (arr[i] > k)
            ++bad;
    int ans = bad;
    for (long long i = 0, j = count; j < n; ++i, ++j) {
        if (arr[i] > k)
            --bad;
        if (arr[j] > k)
            ++bad;
        ans = min(ans, bad);
    }
    return ans;
}
 
int main() {
	int t;
	cin >> t;
	while(t--){
	    long long n,k;
	    cin >> n >> k;
	    long long a[n+5];
	    for (int i=0; i<n; i++) cin >> a[i];
    	cout << minSwap(a,n,k) << endl;
	}
    return 0;
}
