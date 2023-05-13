    #include <stdio.h>
    #include <stdlib.h>

    // Kuyruk elemani yapisi
    struct kuyruk_eleman 
	{
    int veri;
    struct kuyruk_eleman *sonraki;
    };

    // Kuyruk yapisi
    struct kuyruk 
	{
    struct kuyruk_eleman *bas;
    struct kuyruk_eleman *son;
    };

    // Kuyruk olusturma fonksiyonu
    struct kuyruk* kuyruk_olustur() 
	{
    struct kuyruk *q = (struct kuyruk*)malloc(sizeof(struct kuyruk));
    q->bas = NULL;
    q->son = NULL;
    return q;
    }

    // Kuyruk bos mu diye kontrol eden fonksiyon
    int kuyruk_bos_mu(struct kuyruk *q) 
	{
    return q->bas == NULL;
    }

    // Kuyruga eleman ekleme fonksiyonu
    void kuyruk_ekle(struct kuyruk *q, int veri) 
	{
    struct kuyruk_eleman *eleman = (struct kuyruk_eleman*)malloc(sizeof(struct kuyruk_eleman));
    eleman->veri = veri;
    eleman->sonraki = NULL;

    if (q->son == NULL) 
	{
        q->bas = eleman;
    } 
	else 
	{
        q->son->sonraki = eleman;
    }
        q->son = eleman;
    }

    // Kuyruktan eleman silme fonksiyonu
    void kuyruk_sil(struct kuyruk *q) {
    if (kuyruk_bos_mu(q)) 
	{
        printf("Kuyruk bos\n");
        return;
    }
    struct kuyruk_eleman *ilk_eleman = q->bas;
    q->bas = q->bas->sonraki;

    if (q->bas == NULL) 
	{
        q->son = NULL;
    }
        free(ilk_eleman);
    }

    // Kuyruktaki elemanlari ekrana yazdiran fonksiyon
    void kuyruk_goruntule(struct kuyruk *q) 
	{
    if (kuyruk_bos_mu(q)) {
        printf("Kuyruk bos\n");
        return;
    }
    struct kuyruk_eleman *eleman = q->bas;
    while (eleman != NULL) 
	{
        printf("%d ", eleman->veri);
        eleman = eleman->sonraki;
    }
    printf("\n");
    }

    int main() {
    struct kuyruk *q = kuyruk_olustur();
    int secim, veri;

    do {
        printf("1-Ekle\n2-Sil\n3-Goruntule\n4-Cikis\n");
        printf("Seciminiz: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                printf("Eklenecek veri: ");
                scanf("%d", &veri);
                kuyruk_ekle(q, veri);
                break;
            case 2:
                kuyruk_sil(q);
                break;
            case 3:
                kuyruk_goruntule(q);
                break;
            case 4:
                printf("Programdan cikiliyor\n");
                break;
            default:
                printf("Gecersiz secim\n");
        }
    } 
	while (secim != 4);

    return 0;
    }

