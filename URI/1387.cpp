#include <iostream>
#include<bits/stdc++.h>
#include <cmath>
using namespace std;
#define SORT(v) sort(v.begin(),v.end())
#define si(n) scanf("%d",&n)
#define sii(n,m) scanf("%d %d",&n,&m)
#define siii(n,m,o) scanf("%d %d %d",&n,&m,&o)
#define sl(n) scanf("%lld",&n)
#define sll(n,m) scanf("%lld %lld",&n,&m)
#define ss(cad) scanf("%s",cad)
#define PB push_back
#define fst first
#define scn second
#define DBG(x) cerr<< #x << "=" << (x) <<endl
#define M (__int128)4300000013
#define N_MAX 1000010

typedef long long ll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<ll> vll;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;
typedef vector<pi> vp;


int main()
{
    int a,b;
    while(sii(a,b))
    {
        if(a == 0 && b == 0)
            break;
        cout <<(a+b)<<endl;
    }
    return 0;
}