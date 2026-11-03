#include<iostream>
using namespace std;
int main(){
    cout<<"case1 "<<endl;
    for(int i=0;i<5;i++){
        cout<<i<<endl;
    }
    cout<<"case2 ";
    int i=0;
    for(;i<3;i++){
        cout<<i;
    }
    cout<<"\ncase3 ";
    i=0;
    for(;i<4;){
    i++;
    cout<<i;}
    
    cout<<"\ncase4 ";
    i=0;
    while(i<5){
        i++;
        cout<<i;
    }
    
    cout<<"\ncase5 ";
    i=0;
    do{
    i++;
    cout<<i;    
    }
    while(i<3);
