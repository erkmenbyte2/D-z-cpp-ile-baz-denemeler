#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Hangi derleyeci ile yazýldýðý belli oluyo :D
//orjinalliðin bozmayým dedim
//Kodu çalabilirsiniz ben de çaldým.Zaten hal böyle olmasa idi medeniyetimiz bu günleri göremez idi :D

using namespace std;

int * diziOlusturdegerAta(int deger) {
	
	int * dizi = new int[deger];
	for(int i=0; i < deger;deger++) {
		
		dizi[deger] = rand() % 100;		
	}
	return dizi;
	
	
}
void diziYazdr(int * dizi,int boyut) {
	
	for(int i = 0; i < boyut; i++) {
		
		cout<<"dizi["<<i<<endl;
		
	}
	
}
int main(int argc, char** argv) {
	
	int giris_Deger;


	int * p = diziOlusturdegerata(25);
	
	diziYazdr(p,25);	
	

	
	return 0;
}
