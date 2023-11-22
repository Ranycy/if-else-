#include <iostream>
using namespace std;

int main(){
	int angka1, angka2, jawab;
	
	cout<<"========== OPERASI PENJUMLAHAN ========== \n";
	cout<<" Masukkan angka ke 1 = ";cin>>angka1;
	cout<<" Masukkan angka ke 2 = ";cin>>angka2;
	
	cout<<"------------------------------------------- ";
	cout<<"\n\t"<<angka1<<" + "<<angka2<<" = ";cin>>jawab;
	cout<<"------------------------------------------- \n";
	
	
	if(jawab == angka1 + angka2){
		cout<<" SELAMAT, JAWABANNYA ANDA BENAR !!";
	}else{
		cout<<" JAWABANNYA ANDA SALAH, belajar lagi !!";
	}
	
	return 0;
}
