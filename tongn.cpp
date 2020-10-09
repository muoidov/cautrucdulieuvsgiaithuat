#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int tong(int n){
	if(n==1){
		return n;
	}else{
		return n+tong(n-1);
	}
}
int main(int argc, char** argv) {
	int n;
	std::cin>>n;
	std::cout<<tong(n);
	return 0;
}
