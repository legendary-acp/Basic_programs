#include<stdio.h>
#include<string.h>
int main()
{ int n,k,r,m,a[1000];
  char ch[1000];
  printf("enter any string\n");
  scanf("%s",ch);
  printf("enter number of characters it should increase for every element\n");
  scanf("%d",&n);
  k=sizeof(ch);
  for(int i=0;ch[i]!='\0';i++)
  { if(ch[i]>='a'&&ch[i]<='z')
  {  r=n%26;
  m=ch[i];
  if(m+r>122)
  { a[i]=m+r-123;
     ch[i]=a[i];
     ch[i]=ch[i]+'a';
     printf("%c",ch[i]);
  }
  else
 { m=ch[i]+r;
 ch[i]=m;
  printf("%c",ch[i]);
}
  

  
   }
	 else if(ch[i]>='A'&&ch[i]<='Z')
	 { r=n%26;
	 
	 ch[i]=ch[i]+r;
	 if(ch[i]>'Z')
 {
  ch[i]=ch[i]-'Z'+'A';
    a[i]=ch[i]-1;
    ch[i]=a[i];
   
  printf("%c",ch[i]);}
  else
  printf("%c",ch[i]);
  
	 }
	 else if(ch[i]>='0'&&ch[i]<='9')
	 {   r=n%10;
	 ch[i]=ch[i]+r;
	 if(ch[i]>'9')
	 {
	 
	 
   ch[i]=ch[i]-'9'+'0';
    a[i]=ch[i]-1;
    ch[i]=a[i];
  printf("%c",ch[i]);}
  else
  printf("%c",ch[i]);
  
	 }
	 else 
	 printf("%c",ch[i]);

  
  }
  return 0;
}
