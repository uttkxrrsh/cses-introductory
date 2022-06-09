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
    unordered_map<string, int> map;
    int charcount, oddcount;
    vector<string> v1,v2;
    cin>>s;
    for(int i =0; i<26; i++){
        charcount = count(s.begin(), s.end(), (char)(65+i));
        if(charcount > 0){
            map[to_string(65+i)] = charcount;
            if(charcount%2 == 1)
                oddcount++;
        }
    }
    if(oddcount>=1 && s.length()%2==0){
        cout<<"NO SOLUTION";
        return 0;
    }

    return 0;
}