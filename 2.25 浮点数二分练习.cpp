#include<iostream>
#include<iomanip>
using namespace std;
double n,l,r,mid;

double tri(double a){return a*a*a;}
int main(){
	cin>>n;
	l=-10000,r=10000;
	while(r-l>=1e-7){
		mid=(l+r)/2;
		if(tri(mid)>=n) r=mid;
		else l=mid;
	}
	cout<<fixed<<setprecision(6)<<l;
	return 0;
}
