#include<iostream>
using namespace std;
int LinearSearch(int arr[],int sz,int tar){
    for(int i=0;i<sz;i++){
        if(arr[i]==tar){
            return i;
        }
        
            return -1;
        
    }
}
int main(){
    int arr[]={2,4,6,8,4,7,9};
    int sz=7;
    int tar = 4;
    cout<<LinearSearch(arr,sz,tar)<<endl;
    
    return 0;
}