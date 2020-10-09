#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void chuyen(int n,char a,char b){
	cout<<"\nChuyen dia thu  "<<n<<" tu coc "<<a<<" sang coc "<<b;
}
void thaphanoi(int n,char a,char b,char c){
	if(n==1)
	{
		chuyen(1,a,c);
	}else{
		thaphanoi(n-1,a,c,b);
		chuyen(n,a,c);
		chuyen(n,c,b);
		 thaphanoi(n-1,b,a,c); 
	}
	
}
int main(int argc, char** argv) {
	int n;
	char a='a',b='b',c='c';
	cin>>n;
	thaphanoi(n,a,b,c);	return 0;
}
