#include<bits/stdc++.h>
using namespace std;

void insert_in(stack<int> & st, int element){
	if(	st.size() == 0 || st.top() <= element){
		st.push(element);
		return ;
	}
	
	int temp = st.top();
	st.pop();
	
	insert_in(st, element);
	st.push(temp);
}

void sort_stack(stack<int> &st){
	
	if(st.size() == 1) return;
	
	int temp = st.top();
	st.pop();
	
	sort_stack(st);
	
	insert_in(st, temp);
	
	return ;
}

void display(stack<int> st){

	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
}

int main(){
	int n, temp;
	
	cout<<"Enter size of stack : ";
	cin>>n;
	
	if(n == 0) {
		cout<<"Empty stack \n";
		return 0;
	}
	stack<int> st;
	cout<<"Enter "<<n<<" elements : \n";
	for(int i=0; i<n;i++){
		cin>>temp;
		st.push(temp);	
	}
	
	sort_stack(st);
	
	display(st);
	
	return 0;
	
	
}
