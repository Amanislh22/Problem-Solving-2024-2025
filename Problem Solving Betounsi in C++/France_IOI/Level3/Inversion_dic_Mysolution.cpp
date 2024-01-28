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
pair<string,string >tab1 [nbM];

string s1;
string s2;

for( int i=0 ;i<nbM;i++){
    cin>> s1;
    cin>>s2;
    tab[i] =make_pair(s2,s1);
}
    // Sort the 'tab' array alphabetically based on the first element of each pair
    sort(tab, tab + nbM);

    // Now 'tab' is sorted alphabetically based on the first element of each pair

    // Print the sorted array if needed
    for (int i = 0; i < nbM; i++) {
        cout << tab[i].first << " " << tab[i].second << endl;
    }


}