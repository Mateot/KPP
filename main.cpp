#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int a, b;
	cout<<"Program wypisuj¹cy liczby od a do b"<<endl;
	cout<<"Podaj a"<<endl;
	cin>>a;
	cout<<"Podaj b"<<endl;
	cin>>b;
	
	if(a<=b){
		for (int i=a;i<=b;i++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	else{
	//	cout<<"a musi byc mniejsze od b"<<endl;
		for (int i=a;i>=b;i--){
			cout<<i<<" ";
		}
		cout<<endl;
	}
		
	return 0;
}
