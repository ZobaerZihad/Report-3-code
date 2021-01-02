#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
#define fr(i,n) for(int i=1;i<=n;i++)
#define py printf("YES\n")
#define pn printf("NO\n")
#define pb push_back
#define ll long long
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define D(x) cout << #x " = " << (x) << endl
#define endl "\n"
#define t(tt,val) printf("Case %d: %d\n",tt,val)
#define INF INT_MAX
using namespace std;


int main()
{

    int t;
    cin>>t;
    fr(i,t)
    {
        ll m,n,x,y;
        int a[50000];
        cin>>n>>m;
        f(j,n)
        {
            cin>>x>>y;
            a[j]=y;


        }
        sort(a,a+n);
        ll k=a[0]+m;
        ll z=1;
       for(int j=1;j<n;j++)
       {
           if(a[j]<=k)
            continue;
           else
           {
               k=a[j]+m;
               z++;
           }
       }
       t(i,z);

    }

    return 0;
}
