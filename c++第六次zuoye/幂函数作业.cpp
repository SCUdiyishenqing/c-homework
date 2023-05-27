#include<iostream>
#include<string>
using namespace std;
class Mihanshu{
	public:
		int x,n;
		int Qiuzhi(int x,int n){
			int num=1;
			for(int a=0;a<n;a++){
				num=num*x;
			}
			return num;
		}
};
int main(){
	Mihanshu mhs;
	char a[100];
	int b,c;
	int num=0,mun=0;
	cin >> a;
	for(int d=0;;d++){
		if(a[d]==','){
			b=d;
			break;
		}
	}
	for(int d=b;;d++){
		if(a[d]=='\n'){
			c=d;
			break;
		}
	}
	for(int i=b-1;i>=0;i++){
		int e=1;
		num=num+e*(a[i]-48);
		e=e*10;
	}
	for(int i=c-1;i>=0;i++){
		int e=1;
		mun=mun+e*(a[i]-48);
		e=e*10;
	}
	mhs.x=num;
	mhs.n=mun;
	int t;
	t=mhs.Qiuzhi(mhs.x,mhs.n);
	cout << t;
	return 0;
}
