#include<stdio.h>
int main()
{  int n;
   char ch;
   printf("enter the max alphabet till pattern goes on");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
  {
    for(int j=0;j<2*n-1;j++)
   { 
     if(j<=n-i-1)
     { ch='A';
       ch=ch+j;
	   printf("%c ",ch);
	 }
   else if(j>=n+i-1)
   { if(i==0&&j==n-1)
       continue;
       else
       {
	   ch='A';
       ch=2*n+ch-j-2;
       printf("%c ",ch);
   }
      
	  }   
   
   else
    printf("  ");
   
   }

   printf("\n");
}
return 0;

}
