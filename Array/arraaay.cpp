#include <Stdio.h>
int main()
{
    int table [3] [5];
    int i;
    int j;

    // Initialize the table.
    for (i = 0; i < 3; i++)
    {
        for(j = 0; j < 5; j++)
    {
        table [i] [j] = (i * 10) + j;
    }
    }
  // Print the table.
  for (i = 0; i < 3; i++)
  {
      for (j = 0; j < 5; j++)
  {
    printf("%d ", table [i] [j]);
  }
    printf("\n");
  }
  return 0;
}

