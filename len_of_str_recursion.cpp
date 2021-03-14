#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int len(string str){
	if(str.empty())
		return 0;
	str.pop_back();
	
	return 1 + len(str);
}

void display(char * ptr){
	if(*ptr == '\0'){
	cout<<endl;
	return ; }
	cout<<(*ptr);
	display(ptr+1);
}



void displayReverse(char * ptr){
	if(*ptr == '\0'){
	cout<<endl;
	return ; 
	}
	displayReverse(ptr+1);
		cout<<(*ptr);
}


int main(){
	//string a = "abc";
	//cout<<a<<endl;
	//a.pop_back();	
	//cout<<a<<endl;
	
	cout<<"Enter a string :\n";
	string str;
	char * ptr;
	
	getline(cin, str);
	ptr = &str[0];
	cout<<"Length of "<<str<<" : "<<len(str)<<endl;
	
	display(ptr);
	//ptr = &str[0];
	
	displayReverse(ptr);
	return 0;
}
