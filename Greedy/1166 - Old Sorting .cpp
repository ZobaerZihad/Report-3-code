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
          int n,ans=0;
          cin>>n;
          int a[n],b[n];
          f(j,n)
          {cin>>a[j];b[j]=a[j];}
          map<int , int >h;
          sort(a,a+n);
          f(j,n)
          {
              h[a[j]]=j;
          }
          f(j,n)
          {
              if(a[j]!=b[j])
              {
                  ans++;
                  int init = a[j];
                  swap(a[j],a[h[b[j]]]);
              h[init] = h[b[j]];
      h[b[j]] = j;
              }

          }
          t(i,ans);

      }
}
