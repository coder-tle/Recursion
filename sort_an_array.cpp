#include<bits/stdc++.h>
using namespace std;

static int x = 0;
void sort_array_recursion(int arr[] , int n){
	cout<<(++x)<<"\n";
	if(n == 1)
	return ;
	
	sort_array_recursion(arr, n-1);
	
	for(int i = 0; i<n; i++){
		if(arr[i] > arr[n-1]){
		int temp = arr[n-1];
		arr[n-1] = arr[i];
		arr[i] = temp;
		}
	}
	
		
}

int main(){
	int n, temp;
	
	
	cout<<"Enter size of vector\n";
	cin>>n;
	//vector<int> arr;
	int arr[n];
	
	for(int i = 0; i<n; i++){
		cin>>temp;
		//arr.push_back(temp);
		arr[i] = temp;
	}
	
	sort_array_recursion(arr, n);
	cout<<"Sorted array : \n\n\n";
	for(int i = 0; i<n; i++)
	cout<<arr[i]<<" ";
	cout<<"\n\n\n";
}
