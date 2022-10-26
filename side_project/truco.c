#include <stdio.h>
#include <stdlib.h>

/**
 * matrix_gen - generates a 3d matrix 
 */
void matrix_generator();

void main()
{
matrix_generator();
}


void matrix_generator()
{
  int i, j, k, p_o, p_b, p_c, p_e;
for (p_o = 1; p_o <= 4; p_o++) 
  {
    for (k = 1; k <= 12; k++)
	{
	  if (k == 8 || k == 9)
	    continue;
	  for (p_b = 1; p_b <= 4; p_b++)
	    {
	      for (j = 1; j <= 12; j++)
	    {
	      if (j == 8 || j == 9)
		continue;
	      for (p_c = 1; p_c <= 4; p_c++)
		{
		for (i = 1; i <= 12; i++)
		{
		  if (i == 8 || i == 9)
		    continue;
		  for (p_e = 1; p_e <= 4; p_e++)
		    {
		      printf("[%d]-[%d]-[%d], %d-%d-%d-%d\n", i, j, k, p_o, p_b, p_e, p_c);
		    }
		}}
	    }
	    }}
  }

}
