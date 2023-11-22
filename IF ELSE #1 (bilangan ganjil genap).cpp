#include <iostream>
using namespace std;

int main (){
	int input, hasil;
	
	cout<<"-------------------------------------- "<<endl;
	cout<<" Masukkan angka : ";cin>>input;
	cout<<"-------------------------------------- "<<endl;
	
	hasil = input % 2;
	
	if (hasil == 1){
		cout<<" BILANGAN YANG ANDA MASUKKAN GANJIL ! ";
	}else {
		cout<<" BILANGAN YANG ANDA MASUKKAN GENAP ! ";
	}
	
	return 0;
}
