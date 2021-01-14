void makeAllZero(int mat[ROWS][COLS], int r, int c)
{
  int zero[100][100],l=0,k=0;
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      if(mat[i][j]==0)
      {
        convert(mat,r,c,i,j);
      }
    }
      
  }
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      if(mat[i][j]==-1)
      {
        mat[i][j]=0;
      }
    }
  }
}

void convert(int mar[ROWS][COLS],int r,int c,int x,int y)
{
  for(int j=0;j<c;j++)
  {
    if(mar[x][j]!=0)
    {
      mar[x][j]=-1;
    }
  }
  for(int i=0;i<r;i++)
  {
    if(mar[i][y]!=0)
    {
      mar[i][y]=-1;
    }
  }
}
