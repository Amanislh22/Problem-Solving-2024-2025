//
// Created by amani on 21/01/24.
//
#include <iostream>
#include <cstring>
#include "string"
using namespace std;
char toMin(char c){
    int d=c-'A';
    char res=d+'a';
}
int main(){
    //cin.ignore();
    //getline
    string s1;
    cin>>s1;
    cout<<"s1= "<<s1<<endl;
    string s2;
    getline(cin,s2);

    cout<<"s2= "<<s2<<endl;


    //chars
    cout<<'Z'-65;
    //init tab
    int occ[26];
    memset(occ,0,sizeof(occ));

    return 0;
}