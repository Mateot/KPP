#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Program do nauki p�tli for - normalnie si� tak nie robi

using namespace std;
int main(int argc, char** argv) {
	
	int a, b;
	int wynik=1;
	cout<<"Program podnoszacy a do potegi b"<<endl;
	cout<<"Podaj a"<<endl;
	cin>>a;
	cout<<"Podaj b"<<endl;
	cin>>b;
	
	for (int i=0;i<b;i++){
		wynik=wynik*a;
	}

	cout<<wynik<<endl;

	return 0;
}

//Cwiczeie - napisz program licz�cy silni�
