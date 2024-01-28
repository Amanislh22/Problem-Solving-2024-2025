//
// Created by amani on 28/01/24.
//
#include <bits/stdc++.h>
using namespace std;
int n;
string s1,s2;
int main(){
    cin>>n;
    vector<pair<string,string>>v;

    while (n--){
        cin>>s1>>s2;
        v.push_back({s2,s1});

    }
    sort (v.begin(),v.end());

    for ( auto i:v)
        cout<<i.first<<" "<<i.second<<'\n';
    return 0;
}