#include<iostream>
using namespace std;
#define size 50

void removeduplicate(int arr[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				arr[j]=0;
			}
		}
	}
}

int main(){
	int arr[size],n,i;
	cout<<"Enter the size:";
	cin>>n;
	cout<<"Enter the numbers from 0 to 9:";
	for(i=0;i<n;i++)
		cin>>arr[i];
	removeduplicate(arr,n);
	cout<<"The numbers after removing the duplicates:";
	for(i=0;i<n;i++){
		if(arr[i]!=0){
			cout<<arr[i]<<" ";
		}
	}
	return 0;
}
