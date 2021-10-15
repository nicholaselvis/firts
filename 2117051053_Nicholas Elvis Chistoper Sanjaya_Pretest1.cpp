#include <iostream>
using namespace std;
int main(){
	//------gassssss------//
	cout<<"MENGETAHUI CICILAN PERBULAN"<< endl<< endl;
	
	string a;
	int b;
	float c;
	int d;
	
	
	cout<<"nama : ";
	getline(cin,a);
	cout<<"Jumlah Pinjaman : Rp ";
	cin>>b;
	cout<<"bunga perbulan (dalam %): ";
	cin>>c;
	cout<<"lama peminjaman (bulan) : ";
	cin>>d ;
	
	cout<<"nama : "<<a<< endl;
	cout<<"cicilan perbulannya adalah :"<<(b/d)+((c/100)*b)<< endl;
	return 0;
}
