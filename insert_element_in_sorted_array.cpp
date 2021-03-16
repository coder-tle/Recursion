#include<bits/stdc++.h>
using namespace std;

void insert_in(vector<int> & vect, int element){
	if(vect.size() == 0) {
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

void display(vector<int> vect){
	for(int i = 0; i<vect.size(); i++){
		cout<<vect[i]<<" ";
		
	}
	cout<<endl;
}


int main(){
	int n;
	cout<<"Enter the size of vector : ";
	cin>>n;
	
	vector<int> vect;
	int temp;
	
	cout<<"Enter "<<n<<" element in sorted order \n";
	for(int i = 0; i<n; i++){
		cin>>temp;
		vect.push_back(temp);
	}
	
	int element;
	cout<<"Enter element to be inserted : ";
	cin>>element;
	
	insert_in(vect, element);
	
	display(vect);
}
