//
// Created by amani on 18/01/24.
//
#include <bits/stdc++.h>
using namespace std;
bool isMajus(char c){
    return c-'A'>=0 && c-'A'<=25;
}
char transMinus(char c){
    int d = c-'A';
    char res =d+'a';
    return res;
}

bool isPla(string s){
int n=s.size();
int i=0;
int j=n-1;
while (i<j){
    if(s[i]==' '){
        i++;
        continue;
    }
    if(s[j] == ' '){
        j--;
        continue;
    }
    if(isMajus(s[i])){
        s[i]= transMinus(s[i]);
    }
    if(isMajus(s[j])){
        s[j]= transMinus(s[j]);
    }

    if(s[i]!=s[j]){
        return false;
    }
    i++;
    j--;

}
    return true;
}
int main(){
    int n;
    cin>>n;
    cin.ignore();
    while (n!=0){
        string s;
        getline(cin,s);
        if(isPla(s)){
            cout<<s<<endl;
        }
        n--;

    }

}