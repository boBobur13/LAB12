#include<iostream>
using namespace std;
int main(){
    double num;
    cin>>num;
    cout<<"address of variable:"<<&num<<endl;
    double* ptr = &num;
    cout<<"address of pointer:"<<&ptr<<endl;
    cout<<"value of pointer (address it points to):"<<ptr<<endl;
    cout<<"value at pointer (dereferenced):"<<*ptr<<endl;
    return 0;
}
