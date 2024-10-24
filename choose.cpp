#include <bits/stdc++.h>
using namespace std;
#define endline "\n"
#define ll long long
#define ld long double
#define FOR(i,a,b,c) for(int i = (a); i <= (b); i+=c)
#define FOD(i,a,b,c) for(int i = (a); i <= (b); i-=c)
#define AnDepTrai ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define file(name) freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout);
const int MOD = 1e9 + 7;
int main(){
    AnDepTrai
    file("choose");
    int n; cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll k = a.size();
    ll ans = 0;
    for(int i = 0; i < n; i++){
        vector<ll> b;
        b.insert(b.end(), a.end() - i, a.end());
        b.insert(b.end(), a.begin(), a.end() - i);

        ll m = -1;
        ll cr_rmv = 0;
        for(auto it : b){
            if(it > m){
                cr_rmv++;
                m = it;
                
            }
        }
        ans = max(ans,cr_rmv);
    }
    cout << ans;
    
    return 0;
}