#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && c+a>b)
        cout<<0<<endl;
    else
    {
        int m = max(a,max(b,c));
        int mi = (a+b+c)-m;
        cout<<m-mi+1<<endl;
    }
}
