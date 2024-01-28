//
// Created by amani on 18/01/24.
//
#include <iostream>
#include<map>
#include<string>
#include <algorithm>

using namespace std;


int main(){
int nbM ;
cin>>nbM;
pair<string,string >tab [nbM];

string s1;
string s2;

for( int i=0 ;i<nbM;i++){
    cin>> s1;
    cin>>s2;
    tab[i] =make_pair(s2,s1);
}
    sort(tab, tab + nbM);

    for (int i = 0; i < nbM; i++) {
        cout << tab[i].first << " " << tab[i].second << endl;
    }


}