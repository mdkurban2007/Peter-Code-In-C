 #include<stdio.h>
 #include<conio.h>
 #include<string.h>
 int main(){
    char p[20],a[20],b[16],he[12];
    int i=1,j=0,s;
    char z[]="Peter Please Answer";
    printf("Enter 1st Peter Please Answer");
    printf("\n");
    p[0]=getch();
if (p[0]=='.')
   {
   printf("\r");
   putch(z[0]);
while (i<20)
{
   p[i]= getch();
    printf("\r");
   for(s=0;s<=i;++s){
       putch(z[s]);
       }
     if (p[i]=='.')
      {
        gets(he);
        break;
      }
   b[j++]=p[i];
  i++;
 }
}
else{
    gets(p);
 }

  printf("\n Enter Your Question ?\n");
  gets(a);
  b[j]='\0';
  i=0;
  printf("\n");
  printf("Your Answer is:- ");
  if (b[0]=='\0') printf("Enter a valid format");
  else {
   while(i<j)
   {
      putch(b[i]);
      i++;
   }
  }
  
   
return 0;

 }