#include<bits/stdc++.h>
using namespace std;

void manipulate_string(char * ptr){
	
	string a = " added into it";
	
	*ptr = '%';
	
}
int main(){
	string str;
	cin>>str;
	
	char * ptr;
	
	ptr = & str[0];
	
	cout<<"Before changes in string : "<<str<<endl;
	 manipulate_string(ptr);
	 
	 cout<<"After changes in the string : "<<str<<endl;
	 
	 cout<<*ptr<<endl;
	 cout<<*(ptr + 1)<<endl;
	 
	 
	 return 0;
}
