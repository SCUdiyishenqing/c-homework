#include<iostream>
using namespace std;
class Yuan
{
	public:
		int m_r;
		int zhi()
		{
			return 2*m_r;
		}
		double zhou()
		{
			return 2*3.14*m_r;
		}
		double mian()
		{
			return m_r*m_r*3.14;
		}
};
int main()
{
	Yuan yy; 
	cin >> yy.m_r;
	cout << "直径=" << yy.zhi() << endl;
	cout << "周长=" << yy.zhou() << endl;
	cout << "面积=" << yy.mian() << endl;
	return 0;
}
