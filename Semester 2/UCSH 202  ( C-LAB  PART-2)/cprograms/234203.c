#include <stdio.h>
/*by using the formula we can easily find the last leaves 
were n(nodes)=2^(h(height)+1)-1    */
int formula(int height)
{
    int node=0;
    node=2^(height+1)-1;
    return(node);//returning the no of nodes by using the formula 
}

int add(int val)
{
    int ans=0;
    ans=ans+val;
    return(ans);
}

/*here we can use the steps to add the leaves val is like 
 first we shouls check the nodes is beyond the formla or not 
 and then we should take the nearest node according to the formula */

int sum_of_leaves(int numNodes, int startVal)
{
  //Your code here
  int n=numNodes;
  int s=startVal;
  
  int h=1,v=0;
  while(h<=n && v<=n)
  {
    v=formula(h);
    h+=1;
    //printf("%d\n",v);
  }
  v=formula(h-1);  //values of v can be 3,7,15,31,...
//the number of nodes which exceeds the formula we can directly add the leaves(val);
  
  int i=1,ans=0;
  while(i<=n)
  {
    if(v>n)
     ans=add(s);
    s=s+1;
    v=v+1;
    i=i+1;
  }
  return(ans);
    
}




int main(int argc, char **argv)
{
  int n= 0, s= 0;

  //Assume proper n value; n > 0
  printf("Enter the total number of nodes: ");
  scanf("%d",&n);

  //s can have any integer value
  printf("Enter the starting value: ");
  scanf("%d",&s);

  printf("Sum of the leaves= %d\n",sum_of_leaves(n,s));
}