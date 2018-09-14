#include <iostream>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

Imprime_piramide(int elemento){
	
	int i,j;
	
	for(i=0; i<elemento; i++){
		for(j=-elemento; j<=elemento; j++){
			if(i >= abs(j)) {
				
					if((i+1)<10){
						cout<<"  ";
						cout<<""<<abs(j)+1;
						cout<<" ";
						continue;
					}
					else{
						if(i+1==10){
							cout<<" ";
							cout<<""<<abs(j)+1;
							cout<<"  ";
						}
						else{
							cout<<" ";
							cout<<""<<abs(j)+1;
							cout<<"   ";
						}
						
					}
			}
			else{
				cout<<"    ";	
			}
					
		}
		cout<<endl;
	}
}


int main() {
	
	int num;
	
	num=14;
	Imprime_piramide(num);
	
	return 0;
}
