#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector<long long> factorization;

vector<long long> trial_division1(long long n) {

    for (long long d = 2; d * d <= n; d++) {
        while (n % d == 0) {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
}

int main(){

    ll n;
    cin>>n;

    trial_division1(n);

    for(ll i=0;i<factorization.size();i++){
        cout<<factorization[i]<<" ";
    }cout<<endl;
    
    return 0;
}