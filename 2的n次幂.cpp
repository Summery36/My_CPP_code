#include<iostream>
using namespace std;
bool mi(int n){
	if(n%2==1) return false;
	else{
		while(n%2!=1){
			n/=2;
		}
		if(n==1) return true;
		if(n%2==1) return false;
		else return true;
	}
}
int main(){
	int n;
	cin>>n;
	if(mi(n)) cout<<"Yes";
	else cout<<"No";
	return 0;
}
