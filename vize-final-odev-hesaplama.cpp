#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <conio.h>


main(){
	setlocale(LC_ALL, "Turkish");
	
	
	//system("color 5f");//arka plan rengi verir
	//system("color 2");5
	system("color 8");
	
	//yeni deðerler
	char karakter;
	int v, o, f, secenek;
	int vizenotu, odevnotu, finalnotu;
	int vizeyuzde, odevyuzde, finalyuzde;
	float vizeytamyuzde, odevtamyuzde, finaltamyuzde, yuzdelerintoplami, nottoplami;//Seçenek 1 ve 2'nin deðiþkenleri
	float hazirayarvize=0.30, hazirayarodev=0.20, hazirayarfinal=0.50;//Seçenek 3'ün deðiþkenleri
	float hazirayarvizenn=0.30, hazirayarfinalnn=0.70;//Seçenek 4'ün deðiþkenleri

	
	printf("\n"); 
	

	while(true){
		system("color 8");//Renk Ayarý

		printf("Lütfen hesaplama türünü seçin:\n\n"); 
		
	
		printf("-----------=Yüzdelik Oranlarý Kendin Gir=-----------\n");
		printf("Vize, Ödev Ve Final'in yüzdelik oranlarýný kendin girmek için: 1\n");
		printf("Vize Ve Final'in yüzdelik oranlarýný kendin girmek için: 2\n\n");
		
		printf("-----------=Hazýr Ayarlar=-----------\n");
		printf("Hazýr Vize(Yüzde 30), Ödev(Yüzde 20) Ve Final(Yüzde 50) ayarlarla ortalama hesaplamak için: 3\n");
		printf("Hazýr Vize(Yüzde 30) Ve Final(Yüzde 70) ayarlarla ortalama hesaplamak için: 4\n\n");
	
		printf("Yukarýda belirtilen sayýlardan birini giriniz = ");
		scanf("%d", &secenek);
	
		system("color b");//Renk Ayarý
		if(secenek==1 || secenek==2 || secenek==3 || secenek==4){
			
			/* 1. Seçenek */
			if(secenek==1){
				printf("\n");
				printf("Örnek: 30 veya 60 gibi...");
				printf("\n");
				printf("Vize notunun yüzdelik oranýný gir = ");
				scanf("%d", &vizeyuzde);
			
				printf("Ödev notunun yüzdelik oranýný gir = ");
				scanf("%d", &odevyuzde);
			
				printf("Final notunun yüzdelik oranýný gir = ");
				scanf("%d", &finalyuzde);
			
				vizeytamyuzde=vizeyuzde*0.01;
				odevtamyuzde=odevyuzde*0.01;
				finaltamyuzde=finalyuzde*0.01;
				yuzdelerintoplami=vizeytamyuzde+odevtamyuzde+finaltamyuzde;
			
					if(yuzdelerintoplami==1){
						
						while(true){
							printf("\n");
							printf("Vize Notunu Gir (yüzde %.2f etki edicek) = ", vizeytamyuzde);
							scanf("%d", &vizenotu);
							if(vizenotu>=0 && vizenotu<=100){
								break;
							}
							else{
								printf("\n");
								printf("#HATA# 0 ile 100 arasýnda bir not deðeri girebilirsiniz.\n\n");
								continue;	
							}
						}
						
						while(true){
							printf("Odev Notunu Gir (yüzde %.2f etki edicek) = ", odevtamyuzde);
							scanf("%d", &odevnotu);
							if(odevnotu>=0 && odevnotu<=100){
								break;
							}
							else{
								printf("\n");
								printf("#HATA# 0 ile 100 arasýnda bir not deðeri girebilirsiniz.\n\n");
								continue;	
							}
						}
	
						while(true){
							printf("Final Notunu Gir (yüzde %.2f etki edicek) = ", finaltamyuzde);
							scanf("%d", &finalnotu);
							if(finalnotu>=0 && finalnotu<=100){
								break;
							}
							else{
								printf("\n");
								printf("#HATA# 0 ile 100 arasýnda bir not deðeri girebilirsiniz.\n\n");
								continue;	
							}
						}

						v=vizenotu*vizeytamyuzde;
						o=odevnotu*odevtamyuzde;
						f=finalnotu*finaltamyuzde;

						nottoplami=v+o+f;

						printf("Not ortalaman = %.2f\n", nottoplami);
					}
					
					else if(yuzdelerintoplami>1){
						printf("\n");
						printf("#HATA# Girdiðniz sayýlar 1 deðerinden fazla. Girdiðin sayýlarýn yüzdelik oranlarýn toplamý: %.2f\n\n\n", yuzdelerintoplami);
						continue;
					}
					else if(yuzdelerintoplami<1){
						printf("\n");
						printf("#HATA# Girdiðniz sayýlar 1 deðerinden az. Girdiðin sayýlarýn yüzdelik oranlarýn toplamý: %.2f\n\n\n", yuzdelerintoplami);
						continue;
					}
			}
			
			/* 2. Seçenek */
			if(secenek==2){
				printf("\n");
				printf("Örnek: 30 veya 60 gibi...");
				printf("\n");
				printf("Vize notunun yüzdelik oranýný gir = ");
				scanf("%d", &vizeyuzde);
			
				printf("Final notunun yüzdelik oranýný gir = ");
				scanf("%d", &finalyuzde);
			
				vizeytamyuzde=vizeyuzde*0.01;
				finaltamyuzde=finalyuzde*0.01;
				yuzdelerintoplami=vizeytamyuzde+finaltamyuzde;
			
					if(yuzdelerintoplami==1){
						while(true){
							printf("\n");
							printf("Vize Notunu Gir (yüzde %.2f etki edicek) = ", vizeytamyuzde);
							scanf("%d", &vizenotu);
							if(vizenotu>=0 && vizenotu<=100){
								break;
							}
							else{
								printf("\n");
								printf("#HATA# 0 ile 100 arasýnda bir not deðeri girebilirsiniz.\n\n");
								continue;	
							}
						}
						
							
						while(true){
							printf("Final Notunu Gir (yüzde %.2f etki edicek) = ", finaltamyuzde);
							scanf("%d", &finalnotu);
							if(finalnotu>=0 && finalnotu<=100){
								break;
							}
							else{
								printf("\n");
								printf("#HATA# 0 ile 100 arasýnda bir not deðeri girebilirsiniz.\n\n");
								continue;	
							}
						}

						v=vizenotu*vizeytamyuzde;
						f=finalnotu*finaltamyuzde;

						nottoplami=v+f;

						printf("Not ortalaman = %.2f\n", nottoplami);
					}
					
					else if(yuzdelerintoplami>1){
						printf("\n");
						printf("#HATA# Girdiðniz sayýlar 1 deðerinden fazla. Girdiðin sayýlarýn yüzdelik oranlarýn toplamý: %.2f\n\n\n", yuzdelerintoplami);
						continue;
					}
					else if(yuzdelerintoplami<1){
						printf("\n");
						printf("#HATA# Girdiðniz sayýlar 1 deðerinden az. Girdiðin sayýlarýn yüzdelik oranlarýn toplamý: %.2f\n\n\n", yuzdelerintoplami);
						continue;
					}
			}
			
			/* 3. Seçenek */
			if(secenek==3){
					if(hazirayarvize+hazirayarodev+hazirayarfinal==1){
						while(true){
							printf("\n");
							printf("Vize Notunu Gir (yüzde %.2f etki edicek) = ", hazirayarvize);
							scanf("%d", &vizenotu);
						if(vizenotu>=0 && vizenotu<=100){
								break;
							}
							else{
								printf("\n");
								printf("#HATA# 0 ile 100 arasýnda bir not deðeri girebilirsiniz.\n\n");
								continue;	
							}
						}

						while(true){
							printf("Odev Notunu Gir (yüzde %.2f etki edicek) = ", hazirayarodev);
							scanf("%d", &odevnotu);
							if(odevnotu>=0 && odevnotu<=100){
								break;
							}
							else{
								printf("\n");
								printf("#HATA# 0 ile 100 arasýnda bir not deðeri girebilirsiniz.\n\n");
								continue;	
							}
						}
						
						while(true){
							printf("Final Notunu Gir (yüzde %.2f etki edicek) = ", hazirayarfinal);
							scanf("%d", &finalnotu);
							if(finalnotu>=0 && finalnotu<=100){
								break;
							}
							else{
								printf("\n");
								printf("#HATA# 0 ile 100 arasýnda bir not deðeri girebilirsiniz.\n\n");
								continue;	
							}
						}

						v=vizenotu*hazirayarvize;
						o=odevnotu*hazirayarodev;
						f=finalnotu*hazirayarfinal;

						nottoplami=hazirayarvize+hazirayarodev+hazirayarfinal;

						nottoplami=v+o+f;
						
						printf("Not ortalaman = %.2f\n", nottoplami);
					}
			}
			
			/* 4. Seçenek */
			if(secenek==4){
					if(hazirayarvizenn+hazirayarfinalnn==1){
						while(true){
							printf("\n");
							printf("Vize Notunu Gir (yüzde %.2f etki edicek) = ", hazirayarvizenn);
							scanf("%d", &vizenotu);
							if(vizenotu>=0 && vizenotu<=100){
								break;
							}
							else{
								printf("\n");
								printf("#HATA# 0 ile 100 arasýnda bir not deðeri girebilirsiniz.\n\n");
								continue;	
							}
						}
						
						while(true){
							printf("Final Notunu Gir (yüzde %.2f etki edicek) = ", hazirayarfinalnn);
							scanf("%d", &finalnotu);
							if(finalnotu>=0 && finalnotu<=100){
								break;
							}
							else{
								printf("\n");
								printf("#HATA# 0 ile 100 arasýnda bir not deðeri girebilirsiniz.\n\n");
								continue;	
							}
						}
						
						v=vizenotu*hazirayarvizenn;
						f=finalnotu*hazirayarfinalnn;

						nottoplami=hazirayarvizenn+hazirayarfinalnn;

						nottoplami=v+f;
						
						printf("Not ortalaman = %.2f\n", nottoplami);
					}
			}
		}
			
/*----------------------------------------------------------Else Komutu----------------------------------------------------------*/

		else{
			printf("\n");
			printf("#HATA# Belirlenmiþ sayýlarýn dýþýnda bir sayý giridiniz.(1 ve 4 arasýnda bir sayý girin!)\n\n\n");
			continue;
		}
		
		printf("\n\n");
		printf("Devam etmek ister misin?  E / H = ");
		karakter=getche();
		
   		if(karakter=='e' || karakter=='E'){
   			printf("\n");
   			printf("---------------------------------=================----------------------------------------\n");
			printf("\n\n");
			continue;
		}
		else{
			break;
		}
	}		
	return 0;
}
