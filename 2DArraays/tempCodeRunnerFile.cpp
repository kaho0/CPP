 int secondarysum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          if(i==j)
          {
            sum+=arr[i][j];
          }
          else if(j==n-i-1)
          {
            sum+=arr[i][j];
          }
        }
    }
