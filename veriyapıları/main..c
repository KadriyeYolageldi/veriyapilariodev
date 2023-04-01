    #include <stdio.h>
    #include <stdlib.h>

    // sifiri bulana kadar sayan kod.

    int main() {
  	
    int num1, num2, count = 0;
    
    printf("Lutfen num1 giriniz: ");
    scanf("%d", &num1);
    
    printf("Lutfen num2 giriniz: ");
    scanf("%d", &num2);

    while(num1 != 0 && num2 != 0) {
    	
        if(num1 >= num2) 
		{
            num1 -= num2;
        }
		else 
		{
            num2 -= num1;
        }
        count++;
    }

    printf("num1 veya num2 yi sifir yapmak icin gereken islem sayisi: %d\n", count);

    return 0;
}


