#include<iostream>
using namespace std;

void printnum(int x)
{
	if(x == 0){
		return;
	}
	cout<<x<<endl;
	x = x-1;
	printnum(x);
	printnum(x);
}



int main(){
	printnum(3);
	return 0;
}