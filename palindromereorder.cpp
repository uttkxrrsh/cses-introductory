#include<bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define pb push_back
#define eb emplace_back
#define pp pop_back

using namespace std;

int main(){
    string s;
    unordered_set<char, int> map;
    for(int i =0; i<26; i++){
        map.insert(itoa(i),1);
    }
    for(auto i: map){
        cout<<i<<"\n";
    }
    return 0;
}