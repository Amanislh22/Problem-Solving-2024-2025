//
// Created by amani on 18/01/24.
//
#include <string>
#include <iostream>
using namespace std;
int sb(string s){
    int n=s.size();
    int res=0;
    for(int i=0;i<n;i++){
        res+=s[i]-'A';
    }
    return res;
}
int d(int n){
    int res=0;
    while(n>0){
        res+=n%10;
        n/=10;
    }
    return res;
}
int score(string s){
    int res=sb(s);
    while(res>=10){
        res=d(res);
    }
    return res;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<score(s1)<<" "<<score(s2);
    return 0;
}