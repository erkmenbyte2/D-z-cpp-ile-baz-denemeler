#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Dugum 
{
public:
	Dugum(int veri);
	int veri;
	Dugum* sonraki;
	
	
};
Dugum::Dugum(int veri) {
	
	this->veri=veri;
	this->sonraki=0;
	
}

class BagliListe: public Algoritmalar
{

public:
BagliListe();
~BagliListe();
void ekle(int veri);
void yazdir();
void bubble_srala();
void selection_srala();
void linear_arama(int veri);
bool kontrol();
	
	
private:
	Dugum*ilk;
	
};
class Algoritmalar  {
	
void ekle(int veri);
void yazdir();
void bubble_srala();
void selection_srala();
void linear_arama(int veri);
bool kontrol();
	
};
BagliListe::BagliListe() {
	ilk=0;
}
BagliListe::~BagliListe() {
	Dugum * gec = ilk;
	while(gec!=0) {
		Dugum * sil = gec;
		while(gec->sonraki!=0) {
			gec=gec->sonraki;
			delete sil;
			cout<<"bir dugum iflas edildi"<<endl;
		}
	}
}
void BagliListe::ekle(int veri) {
	Dugum * yeni = new Dugum(veri);
	if(ilk==0) {
		ilk=yeni;
	}
	else {
		Dugum*gec=ilk;
		while(gec->sonraki!=0) {
			gec=gec->sonraki;
			 
	
		}
		 gec->sonraki=yeni;
	}
}
void BagliListe::yazdir() {
	
	Dugum * gec = ilk;
	while(gec->sonraki!= 0) {
		
	gec=gec->sonraki;
	cout<<"aders"<<gec<<"Veri:"<<gec->veri<<"Sırada ki veri:"<<gec->sonraki<<endl;
}
	
}
bool BagliListe::kontrol() {
	
	Dugum * gec = ilk;
	
	while(gec->sonraki!=0) {
		
		if(gec->sonraki->veri > gec->veri) {
			break;
			return false;
		}
		else {
			return true;
		}
		
	}
	
}
void BagliListe::bubble_srala() {
	
	Dugum * gec = ilk;
	
	Dugum * bos = 0;
	
	while(gec->sonraki!=0) {
		
		if(gec->veri > gec->sonraki->veri) {
			
			bos->veri=gec->veri;
			gec->veri=gec->sonraki->veri;
			gec->veri=bos->veri;
			
			if(BagliListe::kontrol==false) {
				cout<<"düzenleme işi bitti :D"<<endl;
			}
			else {
				BagliListe::bubble_srala();
			}
		}
		
	}
		
}
void BagliListe::linear_arama(int veri) {
	
	Dugum * gec = ilk;
	
	while(gec->sonraki!=0) {
		
		gec=gec->sonraki;
		
		if(gec->veri=veri) {
			
			cout<<"veri bulundu veri anın amında  biryerlede ama söylemicem<"<<endl;
			break;
			
		}		
		else {
			cout<<"veri meri yok karşim burada"<<endl;
		}
			
	}
 	
}
/*
void BagliListe::selection_srala() {
	int sayac;
	int tutacak[];
	while(gec->sonraki!=0) {
	

	
	
		
	}	
}
*/
int main(int argc, char** argv) {
	
	BagliListe * b = new BagliListe();

	b->ekle(5*5);
	b->ekle(5*5);
	b->ekle(5*5);
	b->ekle(5*5);
	

	b->yazdir();
	return 0;
}
