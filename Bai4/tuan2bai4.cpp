#include<iostream>
using namespace std;

void nhap(char a[][50],int n,int m)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"nhap phan tu thu:"<<"a["<<i+1<<"]"<<"["<<j+1<<"]"<<endl;
			cin>>a[i][j];
		}
	}
}
void xuat(char a[][50],int n,int m)
{	
	cout<<"mang sau khi nhap:"<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<" "<<a[i][j]<<" ";
			
		}
		cout<<endl;
	}
}
int main()
{
	 char a[50][50];
	int m,n;
	cout<<"nhap so dong: "<<endl;
	cin>>m;
	cout<<"nhap so cot: "<<endl;
	cin>>n;
	nhap(a,n,m);
	xuat(a,n,m);
}
