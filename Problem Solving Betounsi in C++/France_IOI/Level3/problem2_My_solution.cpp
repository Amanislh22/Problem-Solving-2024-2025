//
// Created by amani on 18/01/24.
//
#include <iostream>

#include <string>
using namespace std;

string toMaj(string s){
    for( int i=0;i<s.size();i++){
        s[i] = toupper(s[i]);
    }
    return s;
}
int main() {
int nb;
cin>>nb;
// nasna3 table of nb strings
string title[nb];
string name;
bool b=true;
int k,i;

for ( int l=0;l<nb;l++){
    cout<<"enter the title number "<<l+1;
    cin>>name;
    cin.ignore();
    getline(cin,name);
    name= toMaj(name);
    title[l]=name;
}


    for( int l=0;l<nb;l++) {
        b= true;

            k = title[l].length();
            i = 0;

            while (i != k) {

                if(title[l][i]==' '){
                    i++;
                    continue;
                }
                if(title[l][k-1] == ' '){
                    k--;
                    continue;
                }

                if (title[l][i] != title[l][k - 1]) {
                    b = false;
                }
                i++;
                k--;
            }

        if (b) {
            cout << title[l] << endl;
        }
    }

//
    return 0;

}