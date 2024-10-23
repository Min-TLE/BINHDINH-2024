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

    ll cnt1 = 1, cnt2 = 1;
    ll m1 = a[0];
    vector<ll> b;
    auto t = min_element(a.begin(), a.end());
    ll d = distance(a.begin(), t); 
    for(int i = d; i < n; i++) b.push_back(a[i]);
    for(int i = 0; i < d; i++) b.push_back(a[i]); 

    ll m2 = b[0];
    for(int i = 1; i < n; i++){
        if(a[i] > m1){
            m1 = a[i];
            cnt1++;
        }
        if(b[i] > m2){
            m2 = b[i];
            cnt2++;
        }
    }
    

    cout << max(cnt1, cnt2) << endline;

    return 0;
}