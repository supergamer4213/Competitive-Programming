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
        int n;
        ll sol = 0;
        ll of = 0;
        pair<int,ll> range;
        range = {0,0};
        cin >> n;
        vector<pair<int,ll>> all(n);
        vector<ll> nolist;
        rep(i,0,n){
            cin >> all[i].fi;
            cin >> all[i].se;
        }
        rep(i,0,n){
            if(all[i].fi == 1){
                if(range.fi < all[i].se){
                range.fi = all[i].se;
                }
 
            } else if (all[i].fi == 2)
            {
                if(range.se > all[i].se || range.se == 0){
               range.se = all[i].se;
                }
            } else if (all[i].fi == 3)
            {
                nolist.push_back(all[i].se);
            }
        }
        sol = range.se + 1 - range.fi;
        if(sol > 0){
        rep(i,0,nolist.size()){
            if(nolist[i] >= range.fi && nolist[i] <= range.se){
               of++;
            }
            
        }
        
        cout << sol-of << endl;
        } else {
            cout << 0 << endl;
        }
        
        
    }
    
 
    return 0;
}