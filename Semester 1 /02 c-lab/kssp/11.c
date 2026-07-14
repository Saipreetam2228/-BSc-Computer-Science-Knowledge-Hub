 #include <stdio.h>
 int main()
 {
   int i=0,n=0,k=0,max=0;
   printf("Enter the total no. of numbers:");
   scanf("%d",&n);
   while (i<n)
   {
     printf("%d.",i+1);
     scanf("%d",&k);
     if (i==0)
       max=k;
     if (k>max)
      max=k;
      i=i+1; 
   }
   printf("Max is %d:",max);
 }
