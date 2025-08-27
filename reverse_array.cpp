// #include <iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//   int n;
//   cout<<"Enter the number of element:";
//   cin>>n;
//   int arr[n];
//   cout<<"Enter the element of the array:";
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }
//   reverse(arr,arr+n);
//   cout<<"reversed array: ";
//   for(int i=0;i<=n;i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;
//   return 0;
// }
#include<iostream>
using namespace std;
int main(){
   cout<<"Enter size of array:";
    int n;
   cin>>n;
   cout<<"Enter Element :";
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   for (int i=0;i<n/2;i++){
        int temp = arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1] = temp;
        
   }
   cout<<"Reversed array:";
   for(int i=0;i<=n;i++){
    cout<<arr[i]<<" ";

   }
   cout<<endl;
   return 0;

   }
