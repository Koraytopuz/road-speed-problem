#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int yol,hiz;
	cout<<"mesafeyi giriniz"<< endl;
	cin>> yol;
	cout<<"hizinizi giriniz"<< endl;
	cin>> hiz;
	cout<<"tahmini varis suresi= "<<yol/hiz ;
	int saat=yol/hiz;// 3,33->3,99->=3
	float dakikaismi=(float)yol/hiz-(int)yol/hiz;
	int dakika=dakikaismi*60;
	cout<<" saat ve "<<dakika<<" dakikadir"<< endl; 
}
