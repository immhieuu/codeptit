#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n ;
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=2*i;j++){
			if(j%2==0)	printf("%d",j);}
		for(int j=2*i-2;j>=1;j--)	{
			if(j%2==0)	printf("%d",j);
		}		
		
		printf("\n");
	}
	return 0;
}