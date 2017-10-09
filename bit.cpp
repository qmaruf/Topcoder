#include <iostream>
#include <cmath>
#include <map>
using namespace std;
map<int,int>mp;

void f(int bit, int n){
	if(mp.find(bit)!=mp.end())return;
	mp[bit]=1;
	if(bit == pow(2,n)-1)return;
	//cout<<bit<<endl;
	for(int i=0;i<n;i++){
		if(!(bit&(1<<i))){
			f(bit|(1<<i),n);
		}
	}
}
int main(){
	f(0,20);
	cout<<"www"<<endl;
}