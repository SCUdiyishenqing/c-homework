#include<iostream>
#include<string>
using namespace std;
int main(){
	char i[100];
	cin >> i;
	for(int a=strlen(i)-1;a>=0;a--){
				cout << i[a];
			} 
	return 0;
}
