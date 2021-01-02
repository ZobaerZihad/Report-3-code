#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
#define fr(i,n) for(int i=1;i<=n;i++)
#define py printf("YES\n")
#define pn printf("NO\n")
#define pb push_back
#define ll long long
#define speed ios_base::sync_with_stdio(false); cin.tie(NUll);cout.tie(NUll);
#define D(x) cout << #x " = " << (x) << endl
#define endl "\n"
#define t(tt,val) printf("Case %d: %d\n",tt,val)
#define INF INT_MAX
#define MAXN 50000000
using namespace std;
const double eps = 1e-8;

 int a[1000];

 void init(){
 f(i,105)
 a[i]=i;
 }
 int find(int x)
 {
     if(x==a[x])
        return x;
     else
        return a[x]=find(a[x]);
 }
 int unio(int x,int y)
 {
     int c=find(x);
     int d=find(y);
     if(c!=d)
        a[c]=d;
 }

int main(void)
{


    int t;
    cin>>t;
    fr(i,t)
    {
        vector< pair < int , pair< int , int > > >edges;
        int n,x,y,w,k=2;
        cin>>n;
        while(1)
        {
            cin>>x>>y>>w;
            if(x==0&&y==0&&w==0)
                break;


            edges.pb(make_pair(w,make_pair(x,y)));
        }

    init();

    sort(edges.begin(),edges.end());
    ll weight1=0,ni=0,ed=0;
    for(int j=0;j<edges.size();j++)
    {
        int a=edges[j].second.first;
        int b=edges[j].second.second;
        int c=edges[j].first;
        if(find(a)!=find(b))
        {
            unio(a,b);
            weight1+=c;ed++;
        }
        ni++;
    }
     ll weight2=0;
     reverse(edges.begin(),edges.end());
     init();
     for(int j=0;j<edges.size();j++)
    {
        int a=edges[j].second.first;
        int b=edges[j].second.second;
        int c=edges[j].first;
        if(find(a)!=find(b))
        {
            unio(a,b);
            weight2+=c;ed++;
        }
        ni++;
    }
   if((weight1+weight2)%2==0)
		printf("Case %d: %lld\n",i,(weight1+weight2)/2);
		else
		printf("Case %d: %lld/%d\n",i,weight1+weight2,k);
    }

    return 0;
}
