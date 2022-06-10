#include <stdio.h>
#include <unistd.h>

void main()
{

  int i, j, k, l, m;


  //Creacion de b, c, d y e
  for (i = 0; i < 4; i++)
  {

    if(fork() == 0)
    {

      //creacion de c y g
      if(i == 0)
      {

        for (j = 0; j < 2; j++)
        {

          if(fork() == 0)
          {

            //creacion de j y k
            if(j == 1)
            {
              for (l = 0; l < 2; l++)
              {

                if(fork() == 0)
                {

                  //creacion de n
                  if(l == 0)
                  {
                    fork();
                  }

                  break;
                }

              }
            }

            break;
          }

        }

      }

      //creacion de h e i
      if(i == 2)
      {

        for (k = 0; k < 2; k++)
        {

          if(fork() == 0)
          {

            //creacion de l y m
            if(k == 1)
            {
              for (m = 0; m < 2; m++)
              {

                if(fork() == 0)
                {

                  //creacion de o
                  if(m == 0)
                  {

                    fork();
                  }

                  break;
                }

              }
            }
            break;
          }

        }

      }

      break;
    }

  }


  while(1);

}
