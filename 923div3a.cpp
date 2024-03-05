#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"



int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        //int n;
        cin>>n;
        int sum = 0;
        vector<int>v(n);
        for(int i=0;i<v.size();i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<v.size();i++)
        {
            sum += abs(v[i]);
        }
        cout<<sum<<endl;

    }
    return 0;
}
