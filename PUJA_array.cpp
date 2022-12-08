#include<iostream>
using namespace std;

int main(){
	//deklarasi array
int data[5]={0,1,2,3,4};// untuk mendeklarasikan variabel data dalam bentuk bilangan bulat 
int i;//deklarasi variabel i dengan menggunakan tipedata int
	cout<<"data ke 2 adalah : "<<data[2];//untuk menampilkan output data
	cout<<endl;//untuk membuat garis baru
	
	//mengisi data pada array
	data[0]=67;
	data[1]=29;
	data[2]=75;
	data[3]=32;
	data[4]=12;
	
	//melihat isi data pada array
	cout<<"data ke 0 adalah : "<<data[0]<<endl;//untuk menampilkan output data
	cout<<"data ke 1 adalah : "<<data[1]<<endl;//untuk menampilkan output data
	cout<<"data ke 2 adalah : "<<data[2]<<endl;//untuk menampilkan output data
	cout<<"data ke 3 adalah : "<<data[3]<<endl;//untuk menampilkan output data
	cout<<"data ke 4 adalah : "<<data[4]<<endl;//untuk menampilkan output data

for(i=0;i<=4;i++){//untuk melakukan perulangan dengan batas awal 0 sampai batas akhir 4
	
	cout<< "data "<<i<<" :  "<<data[i] << endl;
}
	
	
	
}
