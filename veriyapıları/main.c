#include <stdio.h>
#include <stdlib.h>

// toplami hedefe ulasan alt matrislerin sayisini bulan kod.

int countSubmatrixsWithSum(int mat[][100], int n, int m, int target)
 {
    int count = 0;
    
    for (int i = 0; i < n; i++) {   // tum alt matrislerin sol ust kosesi icin.
    for (int j = 0; j < m; j++) {
    for (int k = i; k < n; k++) {   // alt matrisin sag alt kosesi icin.
    for (int l = j; l < m; l++) {
                	
    int sum = 0;
    // alt matrisin elemanlarini toplar.
    for (int p = i; p <= k; p++) 
	{
    for (int q = j; q <= l; q++) 
	{
    sum += mat[p][q];
    }
    }
    // toplami hedef sayiya esit olan alt matris sayisini arttirir.
    if (sum == target) {
    count++;
    }
    }
    }
    }
    }
    return count;
}

int main() {
    int mat[100][100];
    int n, m, target;
    
    printf("Lutfen matrisin satir ve sutun sayisini giriniz: ");
    scanf("%d %d", &n, &m);
    printf("Lutfen matris elemanlarini giriniz:\n");
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Lutfen hedef toplamini giriniz: ");
    scanf("%d", &target);
    
    int count = countSubmatrixsWithSum(mat, n, m, target);
    printf("Toplami hedefe esit olan alt matris sayisi: %d\n", count);
    return 0;
}


