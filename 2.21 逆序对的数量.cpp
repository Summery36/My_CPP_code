#include<iostream>
using namespace std;
const int N=1e6;
long long n,ans=0;
long long q[N],nmd[N];
void merge_sort(long long q[],long long l,long long r){
	if(l>=r) return;
	long long mid=(l+r)/2;
	merge_sort(q,l,mid);merge_sort(q,mid+1,r);
	long long k=0,i=l,j=mid+1;
	while(i<=mid&&j<=r){
		if(q[i]<=q[j]) nmd[k++]=q[i++];
		else{
			nmd[k++]=q[j++];
			ans+=mid-i+1;
		}
	}
	while(i<=mid) nmd[k++]=q[i++];
	while(j<=r) nmd[k++]=q[j++];
	for(i=l,j=0;i<=r;i++,j++) q[i]=nmd[j];
}
int main(){
	cin>>n;
	for(long long i=0;i<n;i++) cin>>q[i];
	merge_sort(q,0,n-1);
	cout<<ans;
	return 0;
}

