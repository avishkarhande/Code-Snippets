#include<bits/stdc++.h>
#define ll long long int   

using namespace std;

vector<int> phi(int(1e5));



void phi_1_to_n(int n) {
    phi[0] = 0;
    phi[1] = 1;
    for (int i = 2; i <= n; i++)
        phi[i] = i;

    for (int i = 2; i <= n; i++) {
        if (phi[i] == i) {
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }
}

int main(){

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        phi_1_to_n(n);

        cout<<phi[n]<<endl;

    }
    
    return 0;
}