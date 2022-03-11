#include <iostream>
#include<queue>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Dugum {
	int key;
	Dugum * sag;
	Dugum * sol;
	
};
Dugum* dugumOlustur(int key) {
	Dugum * kok = dugumOlustur(key);
	kok->key=key;
	kok->sol=NULL;
	kok->sag=NULL;
	return kok;	
}
void insert(Dugum * kok,int key){
	
	Dugum* DugumYazdr=dugumOlustur(key);
	queue<Dugum*>q;
	q.push(kok);
	while(!q.empty()) {
		Dugum*bos=q.front();
		q.pop();
		if(bos->sol == NULL) {
			bos->sol = DugumYazdr;
			return;
		}
		else {
			q.push(bos->sol);
		}
		if(bos->sag==NULL) {
			bos->sag=DugumYazdr;
			
		}
		else {
			q.push(bos->sag); 
		}
	}
	
}
Dugum* arama(Dugum * dugum,int key) {
	
	if(dugum = NULL) {
		return NULL;
	}
	
	queue<Dugum*>q;
	Dugum * out=NULL;
	q.push(dugum);
	
	while(!q.empty()) {
		Dugum * bos = q.front();
		q.pop();
		
		if(bos->key == key) {
			out=bos; 
			cout<<"veri burda"<<endl;	
		}
		if(bos->sag != NULL) {
			
			q.push(bos->sol);
		}
		if(bos->sol != NULL) {
			
			q.push(bos->sag);
		}
	
}
return out;
}

Dugum * yazdr(Dugum * dugum ) {
	if(dugum == NULL) {
		return NULL;
		cout<<"burda bişey yok"<<endl;
	}
	
	queue<Dugum*>q;
	Dugum * bos = q.front();
	while(!q.empty()) {
		
		if(bos->sag != NULL) {
				
			q.push(bos->sol);
			cout<<bos->sol<<endl;
		}
		if(bos->sag != NULL) {
			q.push(bos->sag);
		}
	}
}	
int main() {
	
	Dugum * kok1=NULL;
	Dugum * kok = dugumOlustur(1);
	kok->sol= dugumOlustur(2);
	kok->sol->sol=dugumOlustur(3);
	kok->sag=dugumOlustur(4);
	kok->sag->sag=dugumOlustur(5);
	
	arama(kok1,4);
	insert(kok,3);
	
	return 0;
}
