#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        stack<string> st;
        string x = "6";
        string y = "8";
        int i = 1;
        queue<string> q;
        q.push(x);
        q.push(y);
        st.push(x);
        st.push(y);
        string dai = q.front();
        while (dai.size() < k)
        {
            q.push(q.front() + "6");
            q.push(q.front() + "8");
            st.push(q.front() + "6");
            st.push(q.front() + "8");
            q.pop();
            dai = q.front();
        }
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
}
