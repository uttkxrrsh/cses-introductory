#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string x;
    getline(cin, x);
    int count = 0;
    int countmax = 0;
    char temp = x[0];
    for(int i = 0; i<x.length(); i++){
        if(temp == x[i]){
            count++;
            if(count>countmax){
                countmax = count;
            }
        }
        else{
            temp = x[i];
            count = 1;
        }
    }
    cout<<countmax;
}
