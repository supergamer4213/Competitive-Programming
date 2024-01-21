#include <bits/stdc++.h>
#define pii pair<int,int>
#define fi first
#define se second
#define endl "\n"
#define rep(a,b,c) for(int a=b; a<c; a++)
#define repr(a,b,c) for(int a=b-1; a>c-1; a--)
#define repa(a,b) for(const auto &a: b)
#define multicase() int t; cin>>t; while(t--)
#define fastIO() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define valid(c) cout<<(c ? "YES" : "NO")<<endl;
#define valid2(c,a,b) cout<<(c ? a : b)<<endl;
#define low(a) a-'a'
#define upp(a) a-'A'
#define num(a) a-'0'
#define mayus(a) ((low(a) < 0) ? true : false)
#define ll long long
#define pq_min(a) priority_queue<a, vector<a>, greater<a>>
#define pq_max(a) priority_queue<a>
 
 
using namespace std;
 
int main()
{
    fastIO();
    multicase(){
    ll n, m, offm, offp, sol, sols;
    offm = 0;
    offp = 0;
    sol = 0;
    sols = 0;
    cin >> n >> m;
    vector<ll> ns(n);
    vector<ll> ms(m);
    rep(i,0,n){
        cin >> ns[i];
    }
    rep(i,0,m){
        cin >> ms[i];
    }
    sort(ms.begin(), ms.end());
    sort(ns.begin(), ns.end(), greater<ll>());
    rep(i,0,n){
        if(ms[m-offp-1] - ns[i] > ns[i] -  ms[offm]){
            sol += ms[m-offp-1] - ns[i];
            offp++;
        } else {
            sol += ns[i] -  ms[offm];
            offm++;
        }
    }
    offm = 0;
    offp = 0;
    rep(i,0,n){
        if(ms[m-offp-1] - ns[n-i-1] > ns[n-i-1] -  ms[offm]){
            sols += ms[m-offp-1] - ns[n-i-1];
            offp++;
        } else {
            sols += ns[n-i-1] -  ms[offm];
            offm++;
        }
    }
    cout << max(sol, sols) << endl;
    }
    return 0;
}