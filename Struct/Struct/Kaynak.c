#include<stdio.h>
#include<stdlib.h>

struct kitapbilgi {
	
	char kitapadi[20];
	char yazar[20];
	int fiyat;
	float puan;
};

int main() {

	struct kitapbilgi kb = { "Sefiller", "VitorHugo",25,9.4};

	printf("Kitapadi: %s\n", kb.kitapadi);
	printf("Kitap Yazari: %s\n", kb.yazar);
	printf("Kitabin Fiyati: %d\n", kb.fiyat);
	printf("Kitabin Puani: %.2f\n", kb.puan);

	return 0;
  }