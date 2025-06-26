#include<iostream>
using namespace std;
bool isPalindrome(int num){
    int original=num;
    int reversed=0;
    while(num>0){
      int digit=num%10;
        reversed=reversed*10+digit;
         num=num/10;
    }
    return original==reversed;
}
int main(){
    int count=0;
     int number=2;
      while(count<50){
        if(number%2==0 && isPalindrome(number)){
         cout<<number<<" ";
         count++;
        if(count%5==0){
        cout<<endl;
            }
        }
        number++;
    }
    return 0;
}
