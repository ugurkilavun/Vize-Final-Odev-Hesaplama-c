#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <conio.h>


main(){
	setlocale(LC_ALL, "Turkish");
	
	
	//system("color 5f");//arka plan rengi verir
	//system("color 2");5
	system("color 8");
	
	//yeni de�erler
	char karakter;
	int v, o, f, secenek;
	int vizenotu, odevnotu, finalnotu;
	int vizeyuzde, odevyuzde, finalyuzde;
	float vizeytamyuzde, odevtamyuzde, finaltamyuzde, yuzdelerintoplami, nottoplami;//Se�enek 1 ve 2'nin de�i�kenleri
	float hazirayarvize=0.30, hazirayarodev=0.20, hazirayarfinal=0.50;//Se�enek 3'�n de�i�kenleri
	float hazirayarvizenn=0.30, hazirayarfinalnn=0.70;//Se�enek 4'�n de�i�kenleri

	
	printf("\n"); 
	

	while(true){
		system("color 8");//Renk Ayar�

		printf("L�tfen hesaplama t�r�n� se�in:\n\n"); 
		
	
		printf("-----------=Y�zdelik Oranlar� Kendin Gir=-----------\n");
		printf("Vize, �dev Ve Final'in y�zdelik oranlar�n� kendin girmek i�in: 1\n");
		printf("Vize Ve Final'in y�zdelik oranlar�n� kendin girmek i�in: 2\n\n");
		
		printf("-----------=Haz�r Ayarlar=-----------\n");
		printf("Haz�r Vize(Y�zde 30), �dev(Y�zde 20) Ve Final(Y�zde 50) ayarlarla ortalama hesaplamak i�in: 3\n");
		printf("Haz�r Vize(Y�zde 30) Ve Final(Y�zde 70) ayarlarla ortalama hesaplamak i�in: 4\n\n");
	
		printf("Yukar�da belirtilen say�lardan birini giriniz = ");
		scanf("%d", &secenek);
	
		system("color b");//Renk Ayar�
		if(secenek==1 || secenek==2 || secenek==3 || secenek==4){
			
			/* 1. Se�enek */
			if(secenek==1){
				printf("\n");
				printf("�rnek: 30 veya 60 gibi...");
				printf("\n");
				printf("Vize notunun y�zdelik oran�n� gir = ");
				scanf("%d", &vizeyuzde);
			
				printf("�dev notunun y�zdelik oran�n� gir = ");
				scanf("%d", &odevyuzde);
			
				printf("Final notunun y�zdelik oran�n� gir = ");
				scanf("%d", &finalyuzde);
			
				vizeytamyuzde=vizeyuzde*0.01;
				odevtamyuzde=odevyuzde*0.01;
				finaltamyuzde=finalyuzde*0.01;
				yuzdelerintoplami=vizeytamyuzde+odevtamyuzde+finaltamyuzde;
			
					if(yuzdelerintoplami==1){
						
						while(true){
							printf("\n");
							printf("Vize Notunu Gir (y�zde %.2f etki edicek) = ", vizeytamyuzde);
							scanf("%d", &vizenotu);
							if(vizenotu>=0 && vizenotu<=100){
								break;
							}
							else{
								printf("\n");
								printf("#HATA# 0 ile 100 aras�nda bir not de�eri girebilirsiniz.\n\n");
								continue;	
							}
						}
						
						while(true){
							printf("Odev Notunu Gir (y�zde %.2f etki edicek) = ", odevtamyuzde);
							scanf("%d", &odevnotu);
							if(odevnotu>=0 && odevnotu<=100){
								break;
							}
							else{
								printf("\n");
								printf("#HATA# 0 ile 100 aras�nda bir not de�eri girebilirsiniz.\n\n");
								continue;	
							}
						}
	
						while(true){
							printf("Final Notunu Gir (y�zde %.2f etki edicek) = ", finaltamyuzde);
							scanf("%d", &finalnotu);
							if(finalnotu>=0 && finalnotu<=100){
								break;
							}
							else{
								printf("\n");
								printf("#HATA# 0 ile 100 aras�nda bir not de�eri girebilirsiniz.\n\n");
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
						printf("#HATA# Girdi�niz say�lar 1 de�erinden fazla. Girdi�in say�lar�n y�zdelik oranlar�n toplam�: %.2f\n\n\n", yuzdelerintoplami);
						continue;
					}
					else if(yuzdelerintoplami<1){
						printf("\n");
						printf("#HATA# Girdi�niz say�lar 1 de�erinden az. Girdi�in say�lar�n y�zdelik oranlar�n toplam�: %.2f\n\n\n", yuzdelerintoplami);
						continue;
					}
			}
			
			/* 2. Se�enek */
			if(secenek==2){
				printf("\n");
				printf("�rnek: 30 veya 60 gibi...");
				printf("\n");
				printf("Vize notunun y�zdelik oran�n� gir = ");
				scanf("%d", &vizeyuzde);
			
				printf("Final notunun y�zdelik oran�n� gir = ");
				scanf("%d", &finalyuzde);
			
				vizeytamyuzde=vizeyuzde*0.01;
				finaltamyuzde=finalyuzde*0.01;
				yuzdelerintoplami=vizeytamyuzde+finaltamyuzde;
			
					if(yuzdelerintoplami==1){
						while(true){
							printf("\n");
							printf("Vize Notunu Gir (y�zde %.2f etki edicek) = ", vizeytamyuzde);
							scanf("%d", &vizenotu);
							if(vizenotu>=0 && vizenotu<=100){
								break;
							}
							else{
								printf("\n");
								printf("#HATA# 0 ile 100 aras�nda bir not de�eri girebilirsiniz.\n\n");
								continue;	
							}
						}
						
							
						while(true){
							printf("Final Notunu Gir (y�zde %.2f etki edicek) = ", finaltamyuzde);
							scanf("%d", &finalnotu);
							if(finalnotu>=0 && finalnotu<=100){
								break;
							}
							else{
								printf("\n");
								printf("#HATA# 0 ile 100 aras�nda bir not de�eri girebilirsiniz.\n\n");
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
						printf("#HATA# Girdi�niz say�lar 1 de�erinden fazla. Girdi�in say�lar�n y�zdelik oranlar�n toplam�: %.2f\n\n\n", yuzdelerintoplami);
						continue;
					}
					else if(yuzdelerintoplami<1){
						printf("\n");
						printf("#HATA# Girdi�niz say�lar 1 de�erinden az. Girdi�in say�lar�n y�zdelik oranlar�n toplam�: %.2f\n\n\n", yuzdelerintoplami);
						continue;
					}
			}
			
			/* 3. Se�enek */
			if(secenek==3){
					if(hazirayarvize+hazirayarodev+hazirayarfinal==1){
						while(true){
							printf("\n");
							printf("Vize Notunu Gir (y�zde %.2f etki edicek) = ", hazirayarvize);
							scanf("%d", &vizenotu);
						if(vizenotu>=0 && vizenotu<=100){
								break;
							}
							else{
								printf("\n");
								printf("#HATA# 0 ile 100 aras�nda bir not de�eri girebilirsiniz.\n\n");
								continue;	
							}
						}

						while(true){
							printf("Odev Notunu Gir (y�zde %.2f etki edicek) = ", hazirayarodev);
							scanf("%d", &odevnotu);
							if(odevnotu>=0 && odevnotu<=100){
								break;
							}
							else{
								printf("\n");
								printf("#HATA# 0 ile 100 aras�nda bir not de�eri girebilirsiniz.\n\n");
								continue;	
							}
						}
						
						while(true){
							printf("Final Notunu Gir (y�zde %.2f etki edicek) = ", hazirayarfinal);
							scanf("%d", &finalnotu);
							if(finalnotu>=0 && finalnotu<=100){
								break;
							}
							else{
								printf("\n");
								printf("#HATA# 0 ile 100 aras�nda bir not de�eri girebilirsiniz.\n\n");
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
			
			/* 4. Se�enek */
			if(secenek==4){
					if(hazirayarvizenn+hazirayarfinalnn==1){
						while(true){
							printf("\n");
							printf("Vize Notunu Gir (y�zde %.2f etki edicek) = ", hazirayarvizenn);
							scanf("%d", &vizenotu);
							if(vizenotu>=0 && vizenotu<=100){
								break;
							}
							else{
								printf("\n");
								printf("#HATA# 0 ile 100 aras�nda bir not de�eri girebilirsiniz.\n\n");
								continue;	
							}
						}
						
						while(true){
							printf("Final Notunu Gir (y�zde %.2f etki edicek) = ", hazirayarfinalnn);
							scanf("%d", &finalnotu);
							if(finalnotu>=0 && finalnotu<=100){
								break;
							}
							else{
								printf("\n");
								printf("#HATA# 0 ile 100 aras�nda bir not de�eri girebilirsiniz.\n\n");
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
			printf("#HATA# Belirlenmi� say�lar�n d���nda bir say� giridiniz.(1 ve 4 aras�nda bir say� girin!)\n\n\n");
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
