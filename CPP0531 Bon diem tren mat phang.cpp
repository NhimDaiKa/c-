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

typedef struct Poin{
    int x,y,z;
}Pn;
int check(Pn a,Pn b){
    int sum= a.x*b.x+a.y*b.y +a.z*b.z;
    if(sum==0){
        return 1;
    }
    return 0;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        Pn a,b,c,d;
        cin >> a.x >> a.y >> a.z;
        cin >> b.x >> b.y >> b.z;
        cin >> c.x >> c.y >> c.z;
        cin >> d.x >> d.y >> d.z;
        Pn d1, d2, d3;
        d1.x=b.x-a.x; d1.y= b.y-a.y; d1.z=b.z-a.z;
        d2.x=c.x-a.x; d2.y= c.y-a.y; d2.z=c.z-a.z;
        d3.x=d.x-a.x; d3.y= d.y-a.y; d3.z=d.z-a.z;
        Pn k;
        k.x= d1.y*d2.z - d2.y*d1.z;
        k.y= d1.z*d2.x - d2.z*d1.x;
        k.z= d1.x*d2.y -d2.x*d1.y;
        if(check(k,d3)==1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}
