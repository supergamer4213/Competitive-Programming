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
    int n;
    bool rev = true;
    cin >> n;
    vector<int> all = {3, 1, 4, 2};
    vector<int> alls;
    if(n == 1){
        cout << 1;
    } else if( n <= 3){
        cout << "NO SOLUTION";
    } else {
        rep(i,5,n+1){
            if(rev){
                all.push_back(i);
                rev = false;
            } else {
                alls.push_back(i);
                rev = true;
            }
        }
        rep(i,0,alls.size()){
            cout << alls[i] << " ";
        }
        rep(i,0,all.size()){
            cout << all[i] << " ";
        }


    }

    
    return 0;
}