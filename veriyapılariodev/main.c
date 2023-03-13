#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Kadriye Yolageldi
// 5 adet ogrencinin kisisel bilgilerini ve adres bilgilerini depolayan struct kodu.

struct ogrenci {

  char isim[100];
  int yas;
  char cinsiyet;
  int numara;
  char adres[100];
};

int main() {
	
  struct  ogrenci o1 = { "Efe",  21, 'E', 1220506012 , "Istanbul" };
  struct  ogrenci o2 = { "Gul",  18, 'K', 1220506009 , "Izmir"  };
  struct  ogrenci o3 = { "Can",  20, 'E', 1220506098 , "Ankara" };
  struct  ogrenci o4 = { "Ece",  19, 'K', 1220506045 , "Samsun" };
  struct  ogrenci o5 = { "Ali",  23, 'E', 1220506051 , "Antalya" };
  

  // Birinci ogrencinin kisisel bigileri.
  
  printf("Birinci ogrencinin ismi: %s\n", o1.isim);
  printf("Birinci ogrencinin yasi: %d\n", o1.yas);
  printf("Birinci ogrencinin cinsiyeti: %c\n", o1.cinsiyet);
  printf("Birinci ogrencinin numarasi: %d\n", o1.numara);
  printf("Birinci ogrencinin adresi: %s\n\n", o1.adres);
  
  
  // Ikinci ogrencinin kisisel bigileri.
  
  printf("Ikinci ogrencinin ismi: %s\n", o2.isim);
  printf("Ikinci ogrencinin yasi: %d\n", o2.yas);
  printf("Ikinci ogrencinin cinsiyeti: %c\n", o2.cinsiyet);
  printf("Ikinci ogrencinin numarasi: %d\n", o2.numara);
  printf("Ikinci ogrencinin adresi: %s\n\n", o2.adres);
  
  // Ucuncu ogrencinin kisisel bigileri.
  
  printf("Ucuncu ogrencinin ismi: %s\n", o3.isim);
  printf("Ucuncu ogrencinin yasi: %d\n", o3.yas);
  printf("Ucuncu ogrencinin cinsiyeti: %c\n", o3.cinsiyet);
  printf("Ucuncu ogrencinin numarasi: %d\n", o3.numara);
  printf("Ucuncu ogrencinin adresi: %s\n\n", o3.adres);
  
  // Dorduncu ogrencinin kisisel bigileri.
  
  printf("Dorduncu ogrencinin ismi: %s\n", o4.isim);
  printf("Dorduncu ogrencinin yasi: %d\n", o4.yas);
  printf("Dorduncu ogrencinin cinsiyeti: %c\n", o4.cinsiyet);
  printf("Dorduncu ogrencinin numarasi: %d\n", o4.numara);
  printf("Dorduncu ogrencinin adresi: %s\n\n", o4.adres);
  
  // Besinci ogrencinin kisisel bigileri.
  
  printf("Besinci ogrencinin ismi: %s\n", o5.isim);
  printf("Besinci ogrencinin yasi: %d\n", o5.yas);
  printf("Besinci ogrencinin cinsiyeti: %c\n", o5.cinsiyet);
  printf("Besinci ogrencinin numarasi: %d\n", o5.numara);
  printf("Besinci ogrencinin adresi: %s\n\n", o5.adres);
  
  
  
  return 0;
}

