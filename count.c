 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int a,n,j=1;
 clrscr();
 scanf("%d",&a);
 n=a;
 while(a!=0)
 {
  a=a/10;
  if(a!=0)
  j++;
 }
 printf("%d",j);
 getch();
 }
