//
// Created by amani on 18/01/24.
//

#include <string>
#include <iostream>
#include <cstring>

using namespace std;

bool isAlp(char c){
    if((c <='Z' && c>='A')||(c <='z' && c>='a')){
        return true;
    }
    else{
        return false;
    }
}
string toMin(string s){

    for( int i=0;i<(int)s.size();i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

float score(string s ){

    // nb lettre in a string
    int n=0;
    for( int i=0;i<(int)s.size();i++){
        if(isAlp(s[i])){
            n++;
        }
    }
    // nb occ
    int tab[26];
    memset(tab,0,sizeof(tab));
    s= toMin(s);
    int nb ;
    for ( int i=0;i<(int)s.size();i++){

        if (isAlp(s[i])) {
            nb=1;
            for (int j = i + 1; j < (int) s.size() ; j++) {
                if (s[i] == s[j]) {
                    nb++;
                    tab[s[i] - 'a'] = nb;
                    s[j] = '*';
                }

            }
        } else{
            continue;
        }

    }
    cout.precision(9);
    for(int i=0;i<26;i++){
        if(tab[i]!=0){
        cout<<(double )tab[i]/n<<endl;}
    }
    return 0;
}


int main(){

    string s;
    getline(cin,s);
    score(s);




    return 0;
}