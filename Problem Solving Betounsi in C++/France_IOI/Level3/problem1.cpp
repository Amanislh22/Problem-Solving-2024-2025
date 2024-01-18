//
// Created by amani on 12/01/24.
//
#include <iostream>
#include<map>
#include<string>
using namespace std;
int  nbCH(int nb){
    int sum =0;
    do {
        sum = sum+ (nb%10);
        nb = nb / 10;
    } while ( nb /10 !=0);
    sum=sum+nb%10;
    if( sum>=10){
        sum =nbCH(sum);
    }
        return sum;

}
int main() {
    //int test = nbCH(554);
    //cout<<test;
    map<char, int> dic;
    string alph= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    //cout<<alph.size();
    //cout<<alph[1];
    for(int i=0; i<alph.length();i++){
        dic[alph[i]]=i;

    }

string name1 , name2;
    int nb =0,nb2=0;
cin>>name1;
cin>>name2;
for ( int i=0 ; i<name1.size();i++){
     nb= nb + dic[name1[i]];
}
if ( nb<10){
     cout<<nb;
}
else {
    cout<< nbCH(nb);
}
cout<<" ";
//name2
    for ( int i=0 ; i<=name2.size();i++){
        nb2= nb2 + dic[name2[i]];
    }
    if ( nb2<10){
        cout<<nb2;
    }
    else {
        cout<< nbCH(nb2);
    }
}