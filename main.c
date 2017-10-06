#include <stdio.h>
#include <conio.h>
void login();
void awalan();
void logout();
void kasus_ayam();
void bil_genap();
void segitiga();
void tidak_terdaftar();


int coba=1,masukan_user,pilihan_pengguna;
int main(){
	
	while(coba < 4){
	login();
	if(masukan_user!=1234){
		coba=coba+1;
		printf("password anda salah coba lagi\n");
		system("PAUSE");
	
	}else{
		coba=4;
		printf("pasword anda benar,tekan enter");
		awalan();
	}
	
	}
	getch();
	return 0;
}

void login(){
	system("cls");
	printf("\n\n\n\n\t\t\t Masukan password (kesempatan %d) : ",coba);
	scanf("%d", &masukan_user);

}

void kasus_ayam(){
	int jumlah_ayam,i,sesudah,sebelum;
	system("cls");
	printf("Masukan jumlah anak ayam :");
	scanf("%d",&jumlah_ayam);
	sebelum=jumlah_ayam;
	for(i=0; i<jumlah_ayam; i++){
		
		if(sebelum==1){
			printf("anak ayam turun %d, mati satu tinggal induk nya \n",1);
			system("PAUSE");	
			awalan();
			
				}else{
					
					sesudah=sebelum -1;
					printf("anak ayam turun %d mati satu tinggal %d\n",sebelum,sesudah);
					sebelum=sesudah;
				}
				
		
		
	}
	system("PAUSE");
}

void bil_genap(){
	int bilangan_genap,hasil,i;
	system("cls");
	printf("masukan batas bilangan: ");
	scanf("%d", &bilangan_genap);
	printf("jumlah bilangan genap = \n");
	
	if(bilangan_genap %2==1 ){
		
		for(i=0;i<=bilangan_genap-1;i+=2){
			
			if(i!=0){
				if(i!=2){
					printf("+ %d", i);
				}else {
					printf("%d",i);
					
				}
				
			}
			hasil +=i;
		}
	}else{
				for(i=0;i<=bilangan_genap;i+=2){
			
			if(i!=0){
				if(i!=2){
					printf("+ %d", i);
				}else {
					printf("%d",i);
					
				}
				
			}
			hasil +=i;
		}
	
		
		
	}
	printf("\n       = %d\n",hasil);
	system("PAUSE");
	awalan();
}

void segitiga(){
	int x,y,z,nomor=1,baris;
	system("cls");
	printf("masukan jumlah baris : ");
	scanf("%d", &baris);
	
	for (x=1;x<=baris;x++){
		
		for(y=baris;y>=x;y--){
			printf(" ");
			
		}
		for (z=1;z<=x+(x-1);z++){
			printf("%d",nomor++);
		
		}
		printf("\n");
	}
	
	system("PAUSE");
}

void tidak_terdaftar(){
	system("cls");
	printf("Pilihan yang anda masukan tidak terdaftar");
	system("PAUSE");
	awalan();
}

void logout(){
	system("cls");
	printf("TERIMAKASIH ATAS KUNJUNGAN NYA\n");
	system("PAUSE");
}

void awalan(){
	system("cls");
	printf("\n\n\n\n\n\t\t\t\t ==============================\n");
	printf("\t\t\t\t |          Menu              |\n");
	printf("\t\t\t\t ==============================\n");
	printf("\t\t\t\t | 1.Kasus Anak Ayam          |\n");
	printf("\t\t\t\t | 2.Jumlah Bilangan Genap    |\n");
	printf("\t\t\t\t | 3.Tampilan Angka Segitiga  |\n");
	printf("\t\t\t\t | 4.Keluar                   |\n");
	printf("\t\t\t\t ==============================\n");
	printf("\t\t\t\t   Masukan Pilihan 1.4:");
	scanf("%d", &pilihan_pengguna);
	
	switch(pilihan_pengguna){
		case 1:
			kasus_ayam();
		break;
		
		case 2:
			bil_genap();
		break;
		
		case 3:
			segitiga();
		break;
		
		case 4:
			logout();
		break;
			
			
		default:
		tidak_terdaftar();
		break;
	}
	
	
}
