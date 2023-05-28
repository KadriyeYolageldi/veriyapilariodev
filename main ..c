#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DATA_SIZE 8  // Veri noktalarinin sayisi
#define KERNEL_BANDWIDTH 1.0  // Cekirdek genisligi

// Veri noktasý yapýsý
typedef struct {
    double x;
    double y;
} DataPoint;

// Mean Shift kumeleme algoritmasi
void meanShiftClustering(DataPoint data[], int dataSize, double bandwidth) {
    for (int i = 0; i < dataSize; i++) {
        double shiftX = 0.0;
        double shiftY = 0.0;
        int numNeighbors = 0;

        // Veri noktasinin etrafindaki diger noktalari bul ve agirlikli toplamini hesapla
        for (int j = 0; j < dataSize; j++) {
            double distance = sqrt(pow(data[i].x - data[j].x, 2) + pow(data[i].y - data[j].y, 2));
            if (distance < bandwidth) {
                shiftX += data[j].x;
                shiftY += data[j].y;
                numNeighbors++;
            }
        }

        // Yeni konumu hesapla
        data[i].x = shiftX / numNeighbors;
        data[i].y = shiftY / numNeighbors;
    }
}

int main() {
    // Veri noktalari
    DataPoint data[DATA_SIZE] = {
        {1.0, 2.0},
        {2.0, 3.0},
        {2.5, 3.5},
        {3.5, 4.0},
        {5.0, 6.0},
        {5.5, 7.0},
        {7.0, 8.0},
        {8.0, 9.0}
    };

    // Mean Shift kumeleme islemi
    meanShiftClustering(data, DATA_SIZE, KERNEL_BANDWIDTH);

    // Sonuclari ekrana yazdir
    for (int i = 0; i < DATA_SIZE; i++) {
        printf("Nokta %d: (%.2f, %.2f)\n", i+1, data[i].x, data[i].y);
    }

    return 0;
}


/*Bu ornekte, meanShiftClustering fonksiyonu veri noktalarini kaydirarak kumeleme islemini gerceklestirir. 
Ilk olarak, veri noktalari belirlenir ve ardindan meanShiftClustering fonksiyonu cagrilir. 
Bu fonksiyon her bir veri noktasi icin agirlikli bir kaydirma yaparak yeni konumlarini hesaplar. 
Bu, veri noktalarini cevreleyen diger noktalarin yogunlugunu dikkate alarak gerceklestirilir. 
Sonuclar, her bir veri noktasinin yeni konumlari olarak ekrana yazdirilir.*/






