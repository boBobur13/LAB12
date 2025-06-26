#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int x;
    while(cin>>x && x!=0) v.push_back(x);
    if(!v.empty()) cout<<"front:"<<v.front()<<"\nback:"<<v.back()<<endl;
    for(auto it=v.begin(); it!=v.end();)
        if(*it<10) it=v.erase(it); else ++it;
    if(v.size()>1) v.insert(v.begin()+1,33);
    if(v.size()>1) v.insert(v.end()-1,55);
    for(int n:v) cout<<n<<" ";
}
