#include <iostream>
using namespace std;

int main(){
	int nilai;
	
	cout<<" Masukkan Nilai Anda : ";cin>>nilai;
	
	if (nilai >=60){
		
		if(nilai >= 90){
			cout<<" Anda lulus dengan predikat ";
			cout<<" A ";
	
		}else if (nilai >=75){
			cout<<" Anda lulus dengan predikat ";
			cout<<" B ";
	
		}else if (nilai >=60){
			cout<<" Anda lulus dengan predikat ";
			cout<<" C ";
			
		}else if (nilai < 60){
			cout<<" Anda lulus dengan predikat ";
			cout<<" D ";
			
		}else if (nilai < 40){
			cout<<" Anda lulus dengan predikat ";
			cout<<" E ";
			
		}else {
			cout<<" inputan salah ";
			
		}
		
	}else(nilai < 60){
		cout<<" Anda Belum Lulus ";
	}
}
