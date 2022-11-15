#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long a;
    cin>>a;
    while(a != 1){
        cout<<a<<" ";
        a%2 ==0 ? a /= 2: a = a*3 + 1;
    }
    cout<<a;
}
 