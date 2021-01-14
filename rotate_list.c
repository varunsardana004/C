#include <stdio.h>
/* Include other headers as needed */
void rotate(int n,int ar[],int k){
  for(int i = 0; i < k; i++){    
        int first,j;    
        first = ar[0];    
       for(j = 0; j < n-1; j++){    
		 ar[j] = ar[j+1];    
        }    
        ar[j] = first;  
  }
    for(int i=0;i<n-1;i++)
    {
      printf("%d ",ar[i]);
    }
  printf("%d",ar[n-1]);
  
}

int main()
{
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int t;
  scanf("%d",&t);
  while(t--!=0)
  {
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
      scanf("%d",&ar[i]);
    }
    int k;
    scanf("%d",&k);
    rotate(n,ar,k);
    printf("\n");
  }
  
    return 0;
}
