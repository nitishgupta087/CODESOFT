#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<n<<"x"<<i<<"="<<n*i;
    }
    return 0;
}