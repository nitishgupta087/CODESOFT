#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    int maxsum =INT64_MAX;
    for(int st = 0;st<n;st++){
        int currsum=0;
        for(int end=st;end<n;end++){
            currsum+=arr[end];
            maxsum=max(currsum,maxsum);

        }
    }
    cout<<"Sum Of Max Subarray is : "<<maxsum<<endl;
    return 0;
}