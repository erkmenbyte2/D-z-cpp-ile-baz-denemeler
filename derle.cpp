#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Hangi derleyeci ile yaz�ld��� belli oluyo :D
//orjinalli�in bozmay�m dedim
//Kodu �alabilirsiniz ben de �ald�m.Zaten hal b�yle olmasa idi medeniyetimiz bu g�nleri g�remez idi :D

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
