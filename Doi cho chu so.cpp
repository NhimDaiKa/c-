#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		scanf("\n");
		string s;
        cin >> s;
        int dem = 0, len = s.length();
        int max =-1;
        int k =-1;
        int note = -1;
        if(s[0] == '0') cout << -1;
        else{
        	int i = len-1;
        	while(s[i]>s[i-1] && i>0) i--;
        	if(i==0) cout << -1;
        	else{
        		note = i-1;
		        for (int i=len-1; i>note; i--){
			        if(s[i] - '0' >= max && s[i] < s[note]){
						max = s[i]-48;
						k=i;	
					}
				}
				swap(s[note], s[k]);
		        if(s[0] != '0')
		        	cout << s;
		        else cout << -1;
		    }
        }
        cout << endl;
	}
}
