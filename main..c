    #include <stdio.h>
    #include <stdlib.h>

    int binarySearch(int dizi[], int baslangic, int bitis, int aranan) {
    	
    // Dizinin tam orta noktasini hesapla
    int orta = baslangic + (bitis - baslangic) / 2;

    // Aranan eleman ortada mi?
    if (dizi[orta] == aranan)
        return orta;
        
    // Aranan eleman orta noktadan kucuk mu?
    else if (dizi[orta] > aranan)
        return binarySearch(dizi, baslangic, orta - 1, aranan);
        
    // Aranan eleman orta noktadan buyuk mu?
    else
        return binarySearch(dizi, orta + 1, bitis, aranan);
    }

    int main() {
    int dizi[] = {4, 8, 3, 84, 47, 76, 9, 24, 68};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);
    int aranan;

    printf("Dizide aramak istediginiz elemani girin: ");
    scanf("%d", &aranan);

    int sonuc = binarySearch(dizi, 0, boyut - 1, aranan);

    if (sonuc == -1)
        printf("Aranan eleman dizide bulunamadi.\n");
    else
        printf("Aranan eleman %d. indekste bulundu.\n", sonuc);

    return 0;
    
    }

/* 
Binary search, bir sirali dizi uzerinde arama yapmak icin etkili bir algoritmadir. 
Bu algoritma, sirali diziler uzerinde en fazla log(n) karsilastirma yaparak aranan elemani bulur. 
Dizinin orta noktasi hesaplanarak aranan eleman bu orta noktayla karsilastirilir. 
Eger orta noktada aranan eleman bulunursa arama islemi sonlandirilir. 
Eger aranan eleman orta noktadan kucukse, orta noktanin sol tarafindaki alt dizide arama yapilir. 
Eger aranan eleman orta noktadan buyukse, orta noktanin sag tarafindaki alt dizide arama yapilir. 
Bu islem, aranan eleman bulunana kadar tekrarlanir.*/

