#include<bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define pb push_back
#define eb emplace_back
#define pp pop_back
#define ln '\n'
#define rep(i, a, b) for(auto i=a; i<b; i++)
#define repe(i, a, b) for(auto i=a; i<=b; i++)
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define all(x) x.begin(), x.end()
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST
    ll blockstart[19],blockend[19],pow10[19],start,input,numofdigits,checkinput,blockend_,blockstart_,ansval;
    int corrector;
    string ansnum;
    pow10[0] = 1; blockstart[0] = 0; blockend[0] = 0;
    rep(i,1,19){
        pow10[i] = pow10[i-1]*10;
        blockstart[i] = blockend[i-1]+1;
        blockend[i] = blockend[i-1] + 9*pow10[i-1]*i;
    }
    w(x){
        cin>>input;
        numofdigits = 1;
        while(input>=blockstart[numofdigits]) numofdigits++;
        numofdigits--;
        blockend_ = blockend[numofdigits];
        blockstart_ = blockstart[numofdigits];
        start = pow10[numofdigits-1];
        corrector = (input-blockstart_)%numofdigits;
        checkinput = input - corrector;
        ansval = (checkinput-blockstart_)/numofdigits+start;
        ansnum = to_string(ansval);
        cout<<ansnum[corrector]<<ln;
    }
    return 0;
}