#include <stdio.h>
main(){
	int choice ,n,sum ;
	printf ("nhap n ") ;
	scanf ("%d",&n) ;
	printf ("1.in ra day so nho hon hoac bang  n và tinh tong\n") ;
	printf ("2.in ra va dem cac so chia het cho 3 va nho hon n\n") ;
	printf ("3.kiem tra xem co phai so nguyen to hay khong\n");
	printf ("4.kiem tra xem co phai so hoan hao khong\n") ;
	printf ("5.tinh tong cac uoc cua n\n");
	printf ("6.tinh giai thua n\n");
	printf ("7.in ra so dao nguoc cua n");
	printf ("in ra cac so nguyen to tu 1-n\n");
	printf ("chon di\n");
	scanf ("%d",&choice);
	switch (choice) {
		case 1: 
		for(int i=0;i<n;i++ ){
			printf ("so %d\n",i);
			sum+=i;}
			printf ("tong=%d\n",sum);
		case 2:	
		for(int i=0;i<n;i++ ){if (i%3==0)
			{
			printf ("so %d\n",i);}
		case 3:
    
		
			
			}
	}
}
