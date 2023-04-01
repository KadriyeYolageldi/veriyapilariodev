## veriyapılarıvealgoritmalarödev1.2

#### Sıfırı bulana kadar sayan kod.  
Bu C programı, kullanıcıdan iki tamsayı (num1 ve num2) alır.  
Ve bu iki sayının sıfıra eşit olana kadar birbirlerinden büyük olanı diğerinden çıkararak sıfıra eşitleme işlemini gerçekleştirir.  
Bu sırada yapılan işlem sayısını (count) sayar ve sonunda kaç işlem yapıldığını kullanıcıya bildirir.  
Program, kullanıcıdan iki sayıyı (num1 ve num2) girdi olarak alır.   
Daha sonra, while döngüsü içinde num1 ve num2 sıfıra eşit olana kadar işlem yapılır.   
İlk önce if koşulu kontrol edilir.   
Eğer num1 num2'den büyük veya eşitse, num1'den num2 çıkarılır.   
Aksi takdirde (num2 num1'den büyükse), num2'den num1 çıkarılır.  
Bu işlem sonrasında, count değişkeni 1 artırılır. Döngü, num1 ve num2 sıfıra eşit olana kadar devam eder.  
Son olarak, program, count değişkeninde saklanan işlem sayısını ekrana yazdırır ve programı sonlandırır.    

  


#### Toplamı hedefe ulaşan alt matrislerin sayısını bulan kod.    
Bu kod, bir matris ve bir hedef sayı verildiğinde, toplamı hedef sayıya eşit olan ve boş olmayan alt matrislerin sayısını hesaplar.  
Kullanıcı tarafından satır ve sütun sayıları ile matris elemanları girilir.  
Ardından hedef toplam kullanıcı tarafından girilir.  
İlk olarak, countSubmatrixsWithSum fonksiyonu tanımlanır.   
Bu fonksiyon, alt matrislerin sayısını hesaplamak için gerekli olan matris, hedef sayı ve boyut bilgileri alır.  
countSubmatrixsWithSum fonksiyonu, matrisin satir ve sütunları üzerinde dört adet döngü kullanarak olası matris kombinasyonunu kontrol eder.  
Ve parametre olarak matrisin adresini, matrisin satir ve sütun sayısını ve hedef sayıyı alır.   
Ve hedef sayıya eşit olan bos olmayan alt matrislerin sayısını hesaplar.  
Fonksiyonun içinde, count adında bir sayaç değişkeni tanımlanır ve başlangıçta sıfıra eşitlenir.   
Ardından, dört döngü kullanarak tüm alt matrisleri kontrol eder.   
Dıştaki iki döngü matrisin sol üst köşesi için, içteki iki döngü ise alt matrisin sağ alt köşesi için kullanılır.  
Döngüler içinde, alt matrisin elemanlarının toplamını hesaplamak için başka bir iki döngü kullanılır.   
Toplamı hedef sayıya eşit olan alt matrislerin sayısını saymak için, count değişkeni artırılır.  
Daha sonra, main() fonksiyonu tanımlanır.   
Bu fonksiyon, kullanıcı tarafından girilen matris boyutları, elemanları ve hedef sayı bilgilerini alır.  
Son olarak countSubmatrixsWithSum fonksiyonunu kullanarak toplamı hedef sayıya eşit olan alt matrislerin sayısını hesaplar ve ekrana yazdırır.  



