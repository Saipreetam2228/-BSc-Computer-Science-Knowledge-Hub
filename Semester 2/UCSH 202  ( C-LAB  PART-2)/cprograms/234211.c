/*
Only lower case alphabets will be given in the input.
1. Union of two strings - 9 Marks
2. Intersection of two strings - 9 Marks
3. Bag Intersection - 9 Marks
4. Efficiency of code - 3 Marks
*/
#include <stdio.h>

int length(char x[])
{
  int i= 0;
  while(x[i] != '\0')
    i= i+1;
  return(i);
}

//Your code for set union here
void set_union(char x[], char y[], char z[])
{
 int lx=0,ly=0,lz=0,i=0,j=0;
 char xarr[26]={},yarr[26]={};    //97
 lx=length(x);
 ly=length(y);
 lz=length(z);
 for(i=0;i<lz;i=i+1)
  z[i]=0;             //reset
 for(i=0;i<lx;i=i+1)
  xarr[i]=0;
 for(i=0;i<ly;i=i+1)
  yarr[i]=0;
  
 for(i=0;i<lx;i=i+1)
  xarr[x[i]-97]=xarr[x[i]-97]+1;
 for(i=0;i<ly;i=i+1)
  yarr[y[i]-97]=yarr[y[i]-97]+1;
 j=0;
 for(i=0;i<26;i=i+1)
  {
   if(xarr[i]>0 || yarr[i]>0)
   {
    z[j]=i+97;
    j=j+1;
   }

  }
}

//Your code for set intersection here
void set_intersection(char x[], char y[], char z[])
{
 int lx=0,ly=0,lz=0,i=0,j=0;
 char xarr[26]={},yarr[26]={};  
 lx=length(x);
 ly=length(y);
 lz=length(z);
 for(i=0;i<lz;i=i+1)
  z[i]=0;
 for(i=0;i<lx;i=i+1)
  xarr[i]=0;
 for(i=0;i<ly;i=i+1)
  yarr[i]=0;

 for(i=0;i<lx;i=i+1)
  xarr[x[i]-97]=xarr[x[i]-97]+1;
 for(i=0;i<ly;i=i+1)
  yarr[y[i]-97]=yarr[y[i]-97]+1;
 j=0;
 for(i=0;i<26;i=i+1)
  {
   if(xarr[i]>0 && yarr[i]>0)
   {
    z[j]=i+97;
    j=j+1;
   }

  }
}

//Your code for bag intersection here
void bag_intersection(char x[], char y[], char z[])
{
 int lx=0,ly=0,lz=0,i=0,j=0,a=0;
 char xarr[26]={},yarr[26]={};    
 lx=length(x);
 ly=length(y);
 lz=length(z);
 for(i=0;i<lz;i=i+1)
  z[i]=0;             //reset
 for(i=0;i<lx;i=i+1)
  xarr[i]=0;
 for(i=0;i<ly;i=i+1)
  yarr[i]=0;

 for(i=0;i<lx;i=i+1)
  xarr[x[i]-97]=xarr[x[i]-97]+1;
 for(i=0;i<ly;i=i+1)
  yarr[y[i]-97]=yarr[y[i]-97]+1;
 j=0;
 for(i=0;i<26;i=i+1)
  {
   if(xarr[i]>0 && yarr[i]>0)
   {
    if(xarr[i] > yarr[i])
     a=yarr[i];
    else
     a=xarr[i]; 
    while(a>0)
    {
     z[j]=i+97;
     j=j+1;
     a=a-1;
    }
   }
  }
 
}

//No change in main
int main()
{
  char a[10]= {}, b[10]= {}, c[20]= {};
  printf("Enter two strings: ");
  scanf("%s %s",a,b);
  set_union(a,b,c);
  printf("Set Union of %s and %s is %s\n",a,b,c);
  set_intersection(a,b,c);
  printf("Set Intersection of %s and %s is %s\n",a,b,c);
  bag_intersection(a,b,c);
  printf("Bag Intersection of %s and %s is %s\n",a,b,c);
}
