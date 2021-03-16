#include<bits/stdc++.h>
using namespace std;

void insert_in(vector<int> & vect, int element){
	if(vect.size() == 0 ) {
		vect.push_back(element);
		return;
	}
	
	if(vect[vect.size() - 1] > element){
		int temp = vect[vect.size() -1 ];
		vect.pop_back();
		
		insert_in(vect, element);
		vect.push_back(temp);
	}
	else{
		vect.push_back(element);
	}
	
}

void insert_in_refactored(vector<int> & vect, int element){
	if(vect.size() == 0 || vect[vect.size() - 1] < element) {
		vect.push_back(element);
		return;
	}
	
	if(vect[vect.size() - 1] > element){
		int temp = vect[vect.size() -1 ];
		vect.pop_back();
		
		insert_in(vect, element);
		vect.push_back(temp);
	}/*
	else{
		vect.push_back(element);
	}*/
	
}

void display(vector<int> vect){
	int n = vect.size();
	
	for(int i = 0; i<n; i++){
		cout<<vect[i]<<" ";
		
	}
	cout<<endl;
}

void sort_vector(vector<int> & vect){
	if(vect.size() == 1) return ;
	
	int temp = vect[vect.size() - 1];
	vect.pop_back();
	
	sort_vector(vect);
	
	insert_in_refactored(vect, temp);
}

int main(){
	int n, temp;
	cout<<"Enter number of element of vector : ";
	cin>>n;
	vector<int> vect;
	
	cout<<"Enter "<<n<<" elements \n";
	for(int i = 0; i<n; i++){
		cin>>temp;
		vect.push_back(temp);
	}
	
	sort_vector(vect);
	display(vect);
}
