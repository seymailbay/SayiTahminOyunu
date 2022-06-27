#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;
main () {
	int rastgele_sayi, tahmin, tahmin_sayisi = 0;
	srand (time(NULL));
	rastgele_sayi = rand() % 100 + 1;
	cout << rastgele_sayi << endl;
	while (1){
		tahmin_sayisi ++;
		cout << " tahmin girin";
		cin >> tahmin ;
		if (tahmin > rastgele_sayi ){
			cout << " sayinizi kucultun";
			
		}
		else if (tahmin < rastgele_sayi) {
			cout << " sayinizi arttirin";
			
		}
		else {
			cout << "tebrikler bildiniz" <<  tahmin_sayisi;
			break;
		}
	}
	}
