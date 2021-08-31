// author : Avishkar Hande
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxS = 2e5+100;
vector<ll> adj[maxS];
vector<ll> euler;

/*
    Generally use Segment/Fenwick Trees with Euler Subtree Questions.
*/

void dfs(ll node, ll par){
    euler.push_back(node);
    for(int child: adj[node]){
        if(child!=par){
            dfs(child, node);
        }
    }
    euler.push_back(node);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
}


