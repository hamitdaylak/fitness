#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main (void)
{
	setlocale(LC_ALL,"Turkish");
	int secim,sayi,antrenman;
	printf("|---------------------------------------------------|\n\n");
	printf("|         FİTNESS PROGRAMINA HOŞGELDİNİZ            |\n\n");
	printf("|      Hafif Antrenman Programı İçin 1 e basınız     |\n\n");
	printf("|         Orta Antrenmanlar için 2'Ye Basınız       |\n\n");
	printf("|          Ağır Antrenmanlar İçin 3'e basınız       |\n\n");
	printf("|---------------------------------------------------|\n\n");
scanf("%d",&secim);
system("cls");
    struct hafifantrenman{
    	
    	char isim[20];
    	char kosu[70];
    	char ip[20];
    	
	};
	
	
	struct ortaantrenman{
		char isim[20];
		char sinav[100];
		char mekik[100];
		
	};
    struct agirantrenman{
    	char halter[150];
    	char barfiks[100];
        char isim[20];
		char squad[200];
	};
	
	if(secim ==1)
    {
	struct hafifantrenman s;
	{
	printf("Lütfen isminizi giriniz \n\n");
	scanf("%s",&s.isim);
	system("cls");
	printf("Hoşgeldiniz %s Bey \n\n",&s.isim);
	printf("hafif antrenmanda iki tür sporumuz var\n\n");
	printf("70 metreye kadar kosabilirsin veya 20 defa ipte atlayabilirsin \n\n");
	printf("kaç metre koşmak istiyorsun \n\n");
	scanf("%s",&s.kosu);
	printf("kaç defa ip atlayacaksın \n\n");
	scanf("%s",&s.ip);
	system("cls");
	printf("ANTRENMAN BİTTİ %s Bey \n\n\n\n",&s.isim);
	printf(" %s metre koştun \n\n",&s.kosu);
	printf("%s defa ip atladın \n\n",&s.ip);
	printf("GÖRÜŞÜRÜZ %s BEY \n\n",&s.isim);
	}
	}
	else if(secim ==2)
	{
	struct ortaantrenman x;
	{
	printf("isminizi giriniz \n\n");
	scanf("%s",&x.isim);
	system("cls");
	printf("Hoşgeldiniz %s Bey \n\n\n",&x.isim);
	printf("Orta Düzey Antrenman Seçtiniz \n\n");
	printf("15 Şınav Ve 20 Mekik Çekebilirsiniz \n\n\n");
	printf("Çekmek İstediğiniz Mekik Sayısı...?\n\n");
	scanf("%s",&x.sinav);
	printf("Çekmek İstediğiniz Şınav Miktarı...?\n\n");
	scanf("%s",&x.mekik);
	system("cls");
	printf("Tebrikler %s Bey Başarıyla Antrenmanı Tamamladınız\n\n",&x.isim);
	printf("%s Tane Mekik Çektiniz\n\n",&x.mekik);
	printf("%s Tane Şınav Çektiniz \n\n",&x.sinav);	
		
		
		
		
	}
	
	
	
		
	}	
	else if(secim ==3)
	{
		struct agirantrenman y;
		{
			printf("isminizi giriniz \n\n");
			scanf("%s",&y.isim);
			system("cls");
			printf("Hoşgeldiniz %s Bey \n\n\n",&y.isim);
			printf("Ağır Antrenmanı Seçtiniz\n\n");
			printf("Ağır Antrenmanda 50 KG HALTER KALDIRMA \n\n");
			printf("40 ADET BARFİKS VE 100 SQUAD ANTRENMANI BULUNMAKTADIR \n\n");
			printf("KAÇ KG HALTER KALDIRACAKSINIZ \n\n");
            scanf("%s",&y.halter);
			printf(" KAÇ BARFİKS ÇEKECEKSİNİZ\n\n");
			scanf("%s",&y.barfiks);
			printf("KAÇ SQUAD YAPACAKSINIZ \n\n\n");
			scanf("%s",&y.squad);
			system("cls");
			
			
			printf("TEBRİKLER %s BEY \n\n",&y.isim);
			printf(" %s KG HALTER KALDIRDINIZ \n\n",&y.halter);
			printf(" %s TANE BARFİKS ÇEKTİNİZ \n\n",&y.barfiks);
			printf(" %s  DEFA SQUAT YAPTINIZ \n\n",&y.squad);
			
			
			
			
			
			
			
			
			
			
			
		}
		
		
		
		
		
	}
	
	
	
	getchar();
	return 0;
	
	
}
