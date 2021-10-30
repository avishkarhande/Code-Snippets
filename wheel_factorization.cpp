#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector<long long> factorization;

vector<long long> trial_division2(long long n) {

    while (n % 2 == 0) {
        factorization.push_back(2);
        n /= 2;
    }
    for (long long d = 3; d * d <= n; d += 2) {
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

    trial_division2(n);

    for(ll i=0;i<factorization.size();i++){
        cout<<factorization[i]<<" ";
    }cout<<endl;
    
    return 0;
}