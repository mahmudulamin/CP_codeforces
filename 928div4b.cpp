#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"


void solve()
{
    int n;
    cin>>n;
    vector<string>v;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    bool triangle = false;
    //int cnt = 0;
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(v[i][j]=='1')
            cnt++;
        }
        if(cnt==1)
        {
            triangle =true;
        }
        if(cnt>1)
        {
            break;
        }
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(v[i][j]=='1')
            {
                cnt++;
            }
        }
        if(cnt==1)
        {
            triangle = true;
        }
        if(cnt > 1)
        {
            break;
        }
    }
    if(triangle)
    {
        cout<<"TRIANGLE"<<endl;
    }
    else
    {
        cout<<"SQUARE"<<endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
