#include<bits/stdc++.h>

using namespace std;

int main(){
    long long num;
    cin>>num;
    vector<long long> v1, v2;
    long long total = (num*(num+1))/2;
    if(total&1){
        cout<<"NO";
    }
    else{
        cout<<"YES"<<"\n";
        total/=2;
        while(num){
            if(total-num>=0){
                v1.push_back(num);
                total-=num;
            }
            else{
                v2.push_back(num);
            }
            num--;
        }
        cout<<v1.size()<<"\n";
        for(auto i:v1){
            cout<<i<<" ";
        }
        cout<<"\n"<<v2.size()<<"\n";
        for(auto i:v2){
            cout<<i<<" ";
        }
    }
    return 0;
}