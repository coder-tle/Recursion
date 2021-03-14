#include<bits/stdc++.h>
using namespace std;


void tower_of_hanoi(int n, char src, char aux, char dest){
	//cout<<"Inside the function toh\n";
	if(n > 0){
		tower_of_hanoi(n-1, src, dest , aux);
		cout<<"Move disc "<<n<<" from "<<src<<" to "<<dest<<"\n";
		tower_of_hanoi(n-1, aux, src , dest);
	}
}


int main(){
	int n;
	cout<<"Tower of hanoi puzzle.\nEnter number of disc: ";
	cin>>n;
	
	char src = 'A', dest = 'C', aux = 'B';
	tower_of_hanoi(n, src, aux, dest);
	
	
	
	return 0;
}
