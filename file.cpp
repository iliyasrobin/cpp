#include<iostream>
#include<string>
#include<fstream>
using namespace std;
//"D:/CODES/Sublime/new.txt"
int main(){
	//read a file
	/*
	ifstream yourfile("D:/CODES/Sublime/new.txt");
	if(!yourfile.is_open()){
		cout<<"get out"<<endl;
		return 0;
	}
		*/
	/*
	//read by word by word
	string word="";
	while(yourfile >> word){
		cout<<word<<endl;
	}
	return 0;
	*/
	//read line by line
	/*string a="";
	while(getline(yourfile,a)){
		cout<<a<<endl;
	}
	*/

	//write a word on file

	ofstream yourfile("D:/CODES/Sublime/new.txt");
	if(!yourfile.is_open()){
		cout<<"get out"<<endl;
		return 0;
	}
	yourfile <<"this is how to write a file using c++"<<endl;
	yourfile <<"this is 2nd line";
	


}