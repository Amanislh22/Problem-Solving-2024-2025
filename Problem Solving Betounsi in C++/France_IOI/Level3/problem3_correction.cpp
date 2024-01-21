//
// Created by amani on 21/01/24.
//
#include <bits/stdc++.h>
using namespace std;

bool isMaj(char c){
    return c-'A' >=0 && c-'A'<=25;
}
bool isMin(char c){
    return c-'a' >=0 && c-'a'<=25;
}

bool isAlphabetic(char c){
    return isMaj(c)|| isMin(c);
}
char transMinus(char c){
    int d=c-'A';
    char res=d+'a';
    return res;
}

int main(){
    int occ[26];
    int nb=0;
    memset(occ,0,sizeof(occ));
    string s;
    getline(cin,s);
    for (int i=0;i<(int)s.size();i++){
        if(isAlphabetic(s[i])){
            nb++;
            if(isMaj(s[i])){
                s[i]= transMinus(s[i]);
            }
            occ[s[i]-'a']++;
        }
    }
    for(int i=0;i<26;i++){
        cout<<(double)occ[i]/nb<<endl;
    }
    return 0;
}