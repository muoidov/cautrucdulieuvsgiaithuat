#include <iostream>
#include<cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[8];
bool OK(int x2,int y2){
	for(int i=1;i<x2;i++)
	if(a[i]==y2 || abs(i-x2)==abs(a[i]-y2))
	return false;
	return true;
}
void xuat(int n){
	for(int i=1;i<=n;i++)
	cout<<" "<<a[i];
	cout<<endl; 
}
void Try(int i,int n){
	for(int j=1;j<=n;j++)
	if(OK(i,j)){
		a[i]=j;
		if(i==n) xuat(n);
		Try(i+1,n);
	}
}

int main(int argc, char** argv) {
	int n=8;
	Try(1,n);
	
	return 0;
}
