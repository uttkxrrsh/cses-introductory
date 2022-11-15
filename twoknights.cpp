#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    long long square;
    long long valid;
    for(auto i = 1; i<=n; i++){
        if(i == 1){
            cout<<0<<'\n';
        }
        else if(i == 2){
            cout<<6<<'\n';
        }
        else{
            square = i*i;
            valid = ((square*(square -1)/2) - (4*(i-1)*(i-2)));
            cout<<valid<<'\n';
        }
    }
}