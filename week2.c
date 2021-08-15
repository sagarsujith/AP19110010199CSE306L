#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
int i=1,l;
char a[15];
clrscr();
printf(“Enter the string:”)
scanf(“%s”,&a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(isalpha(a[i]))
printf(“\n%c is a character”,a[i]);
else if(isdigit(a[i]))
print(“\n%c is a digit”,a[i]);
else if((a[i]>=’a’&&a[i]<=’z’)|| (a[i]>=’A’&&a[i]<=’Z’))
printf(“\n%c is character”,a[i]);
else if(a[i]==’*’||a[i]=’+’||a[i]=’-‘||a[i]=’/’)
printf(“\n%c is an operator”,a[i]);
else if(a[i]==’@’||a[i]==’$’||a[i]==’%’)
printf(“\n%c is a Special character”,a[i]);
else
printf(“\n%c is number”,a[i]);
}
getch();
}

