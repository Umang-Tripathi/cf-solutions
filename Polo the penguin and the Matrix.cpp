#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,m,d;
	cin>>n>>m>>d;
	long long int l[n*m];
	cin>>l[0];
	long long int x=1;
	for(int i=1;i<n*m;i++){
		cin>>l[i];
		if((l[i]-l[i-1])%d==0){
			x++;
		}
		else{
			cout<<-1<<endl;
			break;
			
	}}
	long long int min=9223372036854775807;
	if(x==n*m){
		for(int i=0;i<n*m;i++){
			long long int f=0;
			for(int j=0;j<i;j++){
				f+=abs(l[i]-l[j])/d;
				
			}
			for(int j=i+1;j<n*m;j++){
				f+=abs(l[i]-l[j])/d;
			}
			if(f<min){
				min=f;
			}
		}
		cout<<min<<endl;
	
		
	}
	return 0;
}