/*
	Nama  : Rahmat Hidayat
	NIM   : 22343027
	Prodi : Informatika
*/
#include <stdio.h>
/*int main()//array 1
{
	int rr;
	
	nil[0] = 80;
	nil[2] = 90;
	
	rr = (nil[0] + nil[1] + nil[2]) / 3;
	printf("The average of the 3 grades is : %d", rr);
	
	return 0;
}*/
/*int main()//array 2 
{
	int n[10];
	int i,j;
	
	for (i=0; i<10; i++){
	
		n[i] = i + 100;
	}
	
	for (j=0;j<10; j++){
	
		printf ("element [%d] = %d\n", j, n [j]);
	}
	return 0;
}*/
/*int main ()//array 3
{
	int n,i,angka[100];
	printf ("masukkan banyaknya bilangan :");
	scanf("%d", &n);
	
	for (i=0; i<n; i++){
		printf ("masukkan angka ke %d :", i+1);
		scanf ("%d", &angka[i]);
	}
	for (i=0; i<n; i++){
		printf ("angka ke %d : %d\n", i+1, angka [i]);
	}
	    getchar ();
	    return 0;
}
*/
int main()//array 4
{
	int a[5][2] = {{0,0},{1,2},{2,4},{3,6},{4,8}};
	int i,j;
	
	for (i = 0; i< 5; i++){
		for (j = 0; j < 2; j++){
			printf("a[%d][%d] = %d\n", i,j,a[i][j]);
		}
	}
	return 0;
}
/*struct Mahasiswa {
	char nama[50];
};*/