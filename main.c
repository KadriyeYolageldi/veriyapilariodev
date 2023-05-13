    #include <stdio.h>
    #include <stdlib.h>

    int main() {
    int boyut, i, eleman;
    printf("Lutfen dizi boyutunu girin: ");
    scanf("%d", &boyut);
    
    int dizi[boyut];
    printf("Lutfen dizideki elemanlari girin:\n");
    
    for(i=0; i<boyut; i++) 
	{
        scanf("%d", &dizi[i]);
    }
    printf("Lutfen aranacak elemani girin: ");
    scanf("%d", &eleman);
    
    // Linear search algoritmasi
    
    for(i=0; i<boyut; i++) 
	{
        if(dizi[i] == eleman) 
		{
            printf("%d\nDizideki eleman bulundu ");
            break;
        }
    }
    if(i == boyut) {
        printf("Dizideki eleman bulunamadi\n");
    }
    return 0;
}


/*
Ilk olarak, kullanicidan dizinin boyutu alinir ve buna gore bir dizi olusturulur. 
Daha sonra, kullanicidan dizinin elemanlari sirasiyla alinir ve bu elemanlar diziye atanir. 
Kullanicidan aranacak olan eleman da alinir.
Daha sonra, linear search algoritmasi kullanilarak dizinin elemanlari tek tek kontrol edilir. 
Eger aranan eleman bulunursa, bulundugu indis ekrana yazdirilir ve dongu sonlandirilir. 
Eger aranan eleman bulunmazsa, dongu sona erdikten sonra bir uyari mesaji ekrana yazdirilir.
Kodun yorum satirlari, kodun ne yaptigini anlamak icin eklenmistir. 
Bu yorum satirlari, kodun anlasilmasini kolaylastirir ve kodun okunabilirligini arttirir.*/


