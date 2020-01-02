#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a1;
	int a2;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&a1);
	printf("Lutfen ikinci bir sayi giriniz:");
	scanf("%d",&a2);
	printf("2 Sayinin Carpimi:%d\n",carpma(a1,a2));
	printf("2 Sayinin Toplami: %d\n",a1+a2);
	system("pause");
}
int carpma(int a1,int a2)
{
int carpim=a1*a2;
return carpim;
}

