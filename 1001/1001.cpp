#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	int a,b,c,size;
	char str[20];
	scanf("%d %d",&a,&b);
	c=a+b;
	sprintf(str,"%d",c);
	size=strlen(str);
//	printf("%s",str);

    if(size>3) 
	for(int i=0,j=0;i<size;i++,j++)
	{
		if(i==0) j=3-size%3;
		if(c>0) {
			if(j%3==0&&i!=0) printf(",");
		    printf("%c",str[i]);	
		}
		if(c<0){
			if(j%3==0&&i!=0&&i!=1) printf(",");
		    printf("%c",str[i]);	
		}
	}
	
	else
	for(int i=0;i<size;i++)
	printf("%c",str[i]);
	return 0; 
}

//0%3=0 ��һ������&&i!=0 
//���� Ҳ���Ըı�i 
//%s ��char * �ĳ���%c��� 
//return 0
//itoa ��׼���� Ҫ��sprintf 
//�ַ���-��Ҳ��һλ 
