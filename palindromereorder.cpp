#include<bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define pb push_back
#define eb emplace_back
#define pp pop_back

using namespace std;

int main(){
    string s0,s1 = "",s2 = "";
    char oddchar;
    unordered_map<char, int> map;
    int charcount, oddcount = 0;
    cin>>s0;
    for(int i =0; i<26; i++){
        charcount = count(s0.begin(), s0.end(), (char)(65+i));
        if(charcount > 0){
            map[(char)(65+i)] = charcount;
            if(charcount%2 == 1){
                oddcount++;
                oddchar = char(65+i);
            }
        }
    }
    if((oddcount>=1 && s0.length()%2==0) || (oddcount == s0.length() && s0.length()>1)){
        cout<<"NO SOLUTION";
        return 0;
    }
    for(auto i:map){
        string sbuild(i.s/2, i.f);
        s1 = s1 + sbuild;
        s2 = sbuild + s2;
    }
    string ans = (oddcount == 1) ? s1 + oddchar + s2 : s1 + s2;
    cout <<ans;
    return 0;
}