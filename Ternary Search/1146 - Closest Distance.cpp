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
struct node
{
    double x,y;
};

node a,b,c,d;
double dis(node a,node b)
{
    return (a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y);
}

double cal(double mid)
{
    node p1, p2;
    p1.x = a.x + (b.x - a.x) * mid;
    p1.y = a.y + (b.y - a.y) * mid;
    p2.x = c.x + (d.x - c.x) * mid;
    p2.y = c.y + (d.y - c.y) * mid;
    double d = dis(p1, p2);
    return d;
}

int main(void)
{
    int T;
    scanf("%d",&T);
    int cas = 1;
    while(T--)
    {
        cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y;
        double l = 0,r = 1;
        double ans = r;
        while(r - l > eps)
        {
            double mid = (l + r) /2;
            double mmid = (mid + r)/2;
            if(cal(mid) < cal(mmid))
            {
                ans = mid;
                r = mmid;
            }
            else
                l = mid;
        }
        printf("Case %d: %.6f\n",cas++,sqrt(cal(ans)));
    }

    return 0;
}
