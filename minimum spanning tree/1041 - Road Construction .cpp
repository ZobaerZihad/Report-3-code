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
map<string,int>mp;
 int a[1000];

 void init(){
 f(i,105)
 a[i]=i;
 }
 int finder(int x)
 {
     if(x==a[x])
        return x;
     else
        return a[x]=finder(a[x]);
 }
 struct edge{
    int a, b, c;
}arr[55];

bool cmp(edge x,edge y){
    return x.c<y.c;
}

int main(void)
{


    int t;
    cin>>t;
    fr(i,t)
    {
        mp.clear();
        int n,j=1,y=0;
        cin>>n;
        for(int x=0;x<n;x++)
        {
            string s1,s2;
        int d;
        cin>>s1>>s2>>d;
         if(mp.find(s1)==mp.end()){
                mp[s1]=j;
                j++;
            }
        if(mp.find(s2)==mp.end())
        {
            mp[s2]=j;
            j++;
        }
        arr[y].a=mp[s1];
        arr[y].b=mp[s2];
        arr[y].c=d;
        y++;
        }
        init();
        sort(arr,arr+y,cmp);
        int ed=0,sum=0;

        for(int q=0;q<y;q++){
            int x = finder(arr[q].a);
            int y = finder(arr[q].b);
            if(x!=y){
                a[x]=y;
                ed++;
                sum = sum+ arr[q].c;
            }
        }

        if(ed != j-2){
            printf("Case %d: Impossible\n",i);
        }
        else{
            printf("Case %d: %d\n",i,sum);
        }

    }

    return 0;
}
