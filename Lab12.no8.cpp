#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    int* p1 = &a;
    int* p2 = &b;
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    cout<<"a="<<a<<"b="<<b<<endl;
    return 0;
}
