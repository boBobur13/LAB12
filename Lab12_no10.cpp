#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    int* ptr=arr;
    for(int i=0;i<n;i++){
        if(*(ptr+i)%2!=0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
