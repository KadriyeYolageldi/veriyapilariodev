#include <stdio.h>
#include <stdlib.h>

// Bir dizi icerisindeki en kucuk elemani bulan fonksiyon kodu.

   int min (int dizi[] , int n){
   int min = dizi[0]; // Baslangictaki minumum degeri dizinin ilk elemani olarak atadik.
   
   for(int i=1 ; i<n ; i++){
     if(dizi[i] < i){
       min = dizi[i]; // Minimum degerle dizinin diger elemanlari karsilastirdik.	
	  }
    }
    
    return min; // En kucuk elemanin degeri geri dondurduk.
	
}	
	
	int main(){
		
	int dizi[] = {5,3,6,12,67,198,56,333,12456,9845}; // Bir dizi ornegi verdik.
	int n = sizeof(dizi) / sizeof(dizi[0]); // Dizinin boyutunu gosterdik.
	
	int result = min(dizi,n); // En kucuk elemani bulduk.
	
	printf("Dizinin en kucuk elemani: %d\n\n",result); // Sonucu ekrana yazdirdik.
	
	/* Yurutme zamanini ifade etmek icin T(n) = O(n) denklemini kullandik. 
	T(n) fonksiyonun yurutme zamanini , n ise dizinin boyutunu ifade ettigini belirttik.
	O(n) ifadesi ise fonksiyonun yurutme zamaninin dogrusal bir zamana sahip oldugunu ifade ettigini belirttik.*/
	
	
	printf("Ogrenci Adi Soyadi:Kadriye Yolageldi\n");
	printf("Ogrenci Numarasi:1220505022\n");
		
	
	
	return 0;
}
