#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class Strcmp{
	public:
		char str1[100],str2[100];
		void STR(char str1[],char str2[]){
			int bbuu=0;
			int a1=strlen(str1),a2=strlen(str2);
			int i[100];
			for(int b=0;b<a2;b++){
				if(str2[b]==str1[0]){
					int bu=1;
					for(int c=0;c<a1;c++){
						if(str1[c]!=str2[b+c]){
							bu=0;
							break;
						}
					}
					if(bu==1){
						cout << b <<' ';
						bbuu=1;
					}
				}
			}
			if(bbuu==0)
			cout << "-1";
		}
};
int main()
{	
	Strcmp ss;
	scanf("%[^\n]",ss.str1);
	getchar();
	scanf("%[^\n]",ss.str2);
	ss.STR(ss.str1,ss.str2);
	return 0;
}
