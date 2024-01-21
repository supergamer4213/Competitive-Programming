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
    ll n, f, a, b, con, pos;
    con = 0;
    pos = 0;
    cin >> n >> f >> a >> b;
    vector<ll> all(n+1);
    rep(i,0,n){
        cin >> all[i]; 
    }

    rep(i,0,n) {
        if((all[i] - con)*a < b){
            pos += (all[i] - con)*a;
            con = all[i];
        } else {
            pos += b;
            con = all[i];
        }  
        
    }

    if(pos >= f){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

        
    }
    return 0;
}