void printSpiral(int a[ROWS][COLS], int r, int c)
{
  int i,m=0,n=0;
   while(m<r&&n<c)
    {
        for(i=n;i<c;++i)
        {
            printf("%d\n",a[m][i]);
        }
        m++;
         for(i=m;i<r;++i)
        {
            printf("%d\n",a[i][c-1]);
        }
        c--;
        if(m<r)
        {
         for(i=c-1;i>=n;--i)
        {
            printf("%d\n",a[r-1][i]);
        }
        r--;
        }
        if(n<c)
        {
         for(i=r-1;i>=m;--i)
        {
            printf("%d\n",a[i][n]);
        }
        n++;
        }
    }
  
}
