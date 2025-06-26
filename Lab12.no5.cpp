#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void printMatrix(int n){
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cout<<rand()%1001<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
     cin>>n;
      srand(time(0));
       printMatrix(n);
        return 0;
}
