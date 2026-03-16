#include<iostream>
#include<string>
using namespace std;
int main () {
string str;
cin>>str;
int j = 0;
for(int i = int(str[0]); i <= 90; i++){
	string a;
	cout<< str <<endl;
	char ch = char(i + 1);
	a.push_back(ch);
	str +=a;
}
}