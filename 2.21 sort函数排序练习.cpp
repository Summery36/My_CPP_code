#include<iostream>
#include<algorithm>
const int N=1e6;
using namespace std;
int main(){
	int n,q[N];
	cin>>n;
	for(int i=0;i<n;i++) cin>>q[i];
	sort(q,q+n);
	for(int i=0;i<n;i++) cout<<q[i]<<" ";
	return 0;
}
