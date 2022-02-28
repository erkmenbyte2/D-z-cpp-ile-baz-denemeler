
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Deger 
{
public:
	Deger() {
		//s1 = rand() % 100;
		//rastgale değer tuatn nami değer sınıf ımız biraz dan onu parçılacaz
		cout<<this<<"adres de oluşturul dur"<<endl;
	}
	~Deger() 
	{
		cout<<this<<"adres de ki nesne püf oldu"<<endl;
	}
	void yazdr() {
		cout<<s1<<"mevcut değer"<<endl;
	}
	void faktoryel_hesabı(int degr) {
		
	return faktoryel_hesabı(deger-1) * degr;
		
	}
	private:
		int s1;
		
	
};
int main(int argc, char** argv) {
	
	Deger * x[10];
	
	x[0] = new Deger;
	x[1] = new Deger[1];
	
	x[0]->yazdr();
	
	
	delete[] x;
	
	return 0;
}
