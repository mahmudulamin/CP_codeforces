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
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cont=0;
        for(int i=0;i<s.size();i++)
        {
            cont+=(s[i]=='@');
            if(s[i]=='*' && s[i+1]=='*')
                break;
        }
        cout<<cont<<endl;

    }
}
