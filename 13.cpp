#include<iostream.h>
void main()
{
	char *strcpy(char dest[],const char src[]);
	char *strlen;
	char a[10],b[10]="copy";
	strcpy(a,b);
	cout<<"a=\" "<<a<<"\"b=\" "<<b<<"\"<<endl;
	cout<<"strlen(a)="<<strlen(a)<<"strlen(b)="<<strlen(b)<<endl;
}