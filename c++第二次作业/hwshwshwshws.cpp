#include<iostream>
using namespace std;
class Huiwenshu{
	public:
		int num;
		int Huiwen(int num){
			int a1,a2,a3;
			a1=num%10;
			a2=(num/10)%10;
			a3=num/100;
			int mun=a1*100+a2*10+a3;
			if(num==mun)
			return 1;
			else
			return 0;
		}
}; 
int main()
{
	int n;
	Huiwenshu hws;
	cin >> n >> hws.num;
	for(;n>0;)
	{
		hws.num++;
		if(hws.Huiwen(hws.num)==1){
			cout << hws.num << ' ';
			n--;
		}
	}
	return 0;
}
