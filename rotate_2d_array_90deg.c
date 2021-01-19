#include <stdio.h>
/* Include other headers as needed */
int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  
  int t;
  scanf("%d",&t);
  while(t--!=0)
  {
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    for(int i=0;i<n;i++)
    {
      for(int j=n-1;j>0;j--)
      {
        printf("%d ",a[j][i]);
      }
      printf("%d",a[0][i]);
      printf("\n");
    }
    printf("\n");
  }
    return 0;
}
