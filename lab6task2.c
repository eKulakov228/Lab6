#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

int mx,mn,ans = 0,a[100][100],i,j,m,n;

int main() {
	setlocale(LC_ALL,"Rus");
	n = 6; // кол-во строк
	m = 6; // кол-во столбцов
	for(i=1;i <= n;i++)
	{
		mn=1e7;
		mx=-1e7;
		for(j=1; j<=m ;j++)
		{
		    scanf("%d",&a[i][j]);
			if(mn > a[i][j]){
				mn = a[i][j];
			}
			if(mx < a[i][j]){
				mx = a[i][j];
			}
		}
		if(i % 2 == 1){
			ans+=mn;
		}
		if(i % 2 == 0){
			ans+=mx;			
		}
	}  
	printf("\n");
	printf("Ñóììà = %d", ans);
	return 0;
}