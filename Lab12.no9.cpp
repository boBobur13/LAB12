#include<iostream>
using namespace std;
int main(){
    int n;
     cin>>n;
       double arr[n];
        for(int i=0;i<n;i++){
         cin>>arr[i];
    }
    double* ptr = arr + n - 1;
    for(int i=0;i<n;i++){
     cout<<*ptr<<" ";
     ptr--;
    }
    return 0;
}
