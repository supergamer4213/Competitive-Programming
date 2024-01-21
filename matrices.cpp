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
    int m, n, temp;
    temp = 0;
    cin >> m >> n;
    int all[m+2][n+2];
    rep(y,0,m+2){
        rep(x,0,n+2){
            if(y == 0 || x == 0 || x == n+1 || y == m+1){
                all[y][x] = 0;
            } else {
           cin >> all[y][x];
            }
        }
    }
    
    rep(y,0,m+1){
        rep(x,0,n+2){
            if(y != 0 || x != 0 || x != n+1 || y != m+1){     
           temp += all[y-1][x] + all[y+1][x] + all[y][x+1] + all[y][x-1];
           if(all[y][x] >= temp){
                cout << all[y][x] << " " << y-1 << " " << x-1 << endl;
           }
            }
           temp = 0;
        }
        
    }

    return 0;
}