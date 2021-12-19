#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int x[500][500], anh[500][500], kq[500][500];
		int n, m, l;
		cin >> n >> m >> l;
		int di = l*l;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> x[i][j];
		for (int i = 0; i < n; i++){
			for (int j = 0; j <= m-l; j++){
				if(j==0){
					int sum = 0;
					for(int k = 0; k < l; k++)
						sum += x[i][k];
					anh[i][j] = sum;
				}
				else anh[i][j] = anh[i][j-1] - x[i][j-1] + x[i][j+l-1]; 
			}	
		}
		for (int i = 0; i <= n-l; i++){
			for (int j = 0; j <= m-l; j++){
				if(i==0){
					int sum = 0;
					for(int k = 0; k < l; k++)
						sum += anh[k][j];
					kq[i][j] = sum;
				}		
				else kq[i][j] = kq[i-1][j] - anh[i-1][j] + anh[i+l-1][j];
			}
		}
		for (int i = 0; i <= n-l; i++){
			for (int j = 0; j <= m-l; j++){
				cout << kq[i][j]/di << " ";
			}
			cout << endl;
		}
    }
    return 0;
}
