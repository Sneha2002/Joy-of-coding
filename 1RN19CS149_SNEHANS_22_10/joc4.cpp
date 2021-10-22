#include<iostream>
using namespace std;
#define size 50

void findindex(int arr[],int n, int sum){
	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if((arr[i]+arr[j])==sum)
				cout<<"Indices are found at "<<i<<" and "<<j<<endl;
		}
	}
}
int main(){
	int arr[size],n,i;
	int k;
	cout<<"Enter the size:";
	cin>>n;
	cout<<"Enter k value:";
	cin>>k;
	cout<<"Enter array of integers:";
	for(i=0;i<n;i++)
		cin>>arr[i];
			
	findindex(arr,n,k);
	return 0;
}
