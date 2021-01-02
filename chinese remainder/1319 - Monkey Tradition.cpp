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

void exgcd(ll a, ll b, ll &d, ll &x, ll &y)
{
    if(b == 0) {d = a, x = 1, y = 0;}
    else
    {
        exgcd(b, a%b, d, y, x);
        y -= x * (a/b);
    }
}
ll gcd(ll a, ll b){
    return b == 0 ? a : gcd(b, a%b);
}
void CRT(int l, int r, ll *m, ll *a)
{
    ll LCM = 1;
    for(int i = l; i <= r; i++)
        LCM = LCM/gcd(LCM, m[i]) * m[i];
    for(int i = l+1; i <= r; i++)
    {
        ll A = m[l], B = m[i], d, x, y, c = a[i]-a[l];
        exgcd(A, B, d, x, y);
        if(c % d)
        {
            printf("Impossible\n");
            return ;
        }
        ll mod = m[i]/d;
        ll k = ((x * c/d) % mod + mod) % mod;
        a[l] = m[l] * k + a[l];
        m[l] = m[i]/d * m[l];
    }

    printf("%lld\n", a[l]);
}
ll a[MAXN], m[MAXN];
int main()
{
    int t, kcase = 1;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        for(int i = 0; i < n; i++)
            cin>>m[i]>>a[i];
        printf("Case %d: ", kcase++);
        CRT(0, n-1, m, a);
    }
    return 0;
}
