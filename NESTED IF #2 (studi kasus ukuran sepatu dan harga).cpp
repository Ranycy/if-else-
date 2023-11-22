#include <iostream>
using namespace std;

int main(){
	int size, brand;
	
	cout<<"======= PROGRAM MENGETAHUI HARGA SEPATU =======\n";
	cout<<"1. Adidas \n2. Nike \n3. New Balance \n4. Bata\n";
	cout<<"\nPILIH BRAND SEPATU (1/2/3/4) : ";
	cin>>brand;
	
	
	if(brand == 1){
			cout<<" Masukkan ukuran sepatu = ";
			cin>>size;
		if(size < 40 ){
			cout<<" Harga sepatu = Rp.200.000,- "<<endl;
		}else if( size >= 41 && size <= 45){
			cout<<" Harga sepatu = Rp.250.000,- "<<endl;
		}else if( size >= 45 ){
			cout<<" Harga sepatu = Rp.300.000,- "<<endl;
		}else {
			cout<<" Mohon maaf ukuran sepatu anda belum ada :("<<endl;
		}
	}else if (brand == 2){
			cout<<" Masukkan ukuran sepatu = ";
			cin>>size;
		if(size < 40 ){
			cout<<" Harga sepatu = Rp.300.000,- "<<endl;
		}else if( size >= 41 && size <= 45){
			cout<<" Harga sepatu = Rp.350.000,- "<<endl;
		}else if( size >= 45 ){
			cout<<" Harga sepatu = Rp.400.000,- "<<endl;
		}else {
			cout<<" Mohon maaf ukuran sepatu anda belum ada :("<<endl;
		}
	}else if (brand == 3){
			cout<<" Masukkan ukuran sepatu = ";
			cin>>size;
		if(size < 40 ){
			cout<<" Harga sepatu = Rp.150.000,- "<<endl;
		}else if( size >= 41 && size <= 45){
			cout<<" Harga sepatu = Rp.200.000,- "<<endl;
		}else if( size >= 45 ){
			cout<<" Harga sepatu = Rp.300.000,- "<<endl;
		}else {
			cout<<" Mohon maaf ukuran sepatu anda belum ada :("<<endl;
		}
	}else if(brand == 4){
			cout<<" Masukkan ukuran sepatu = ";
			cin>>size;
		if(size < 40 ){
			cout<<" Harga sepatu = Rp.100.000,- "<<endl;
		}else if( size >= 41 && size <= 45){
			cout<<" Harga sepatu = Rp.150.000,- "<<endl;
		}else if( size >= 45 ){
			cout<<" Harga sepatu = Rp.200.000,- "<<endl;
		}else {
			cout<<" Mohon maaf ukuran sepatu anda belum ada :("<<endl;
		}
	}else{
		
		cout<<" inputan salah :("<<endl;
	
	}
}








//Adidas
//• size <40 harga Rp200.000
//• size 41-45 harga Rp250.000
//• size >45 harga Rp300.000
