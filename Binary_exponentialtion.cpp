#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll binpow(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main(){

    ll t;
    cin>>t;
    while(t--){
        ll a,b,m;
        cin>>a>>b>>m;

        ll ans = binpow(a,b,m);

        cout<<ans<<endl;

    }


    
    return 0;
}