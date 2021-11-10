#include<stdio.h>
#include<conio.h>
#include<stdbool.h>


void ball(int count)
{
  char ball[21][39] = {
    "              ........                ",
    "        .zd$$$$$$$$$$$$$$bc.          ",     
    "      z$$$$$$$$$$$$$$$$$$$$$$c        ",
    "    d$$$$$$$$$$$$$$$$$$$$$$$$$$b      ",
    "   z$$$$$$$$$$$$$$$$$$$$$$$******c    ",
    "  J$$$$$$$$$$$$$$$**              b   ",
    " J$$$$$$$$$$$*                     b  ",
    ".$$$$$$$$*                          L ",
    "$$$$$$*       z$P**$b               3 ",
    "$$$*          $$   4$F              ^r",
    "$                  d$               eF",
    ".                 d$             .d$$F",
    "L                J$&.zeL      .e$$$$$ ",
    "'               4$$$P      .e$$$$$$$P ",
    " &                      .e$$$$$$$$$$  ",
    "  &                .ze$$$$$$$$$$$$$   ",
    "   &     ....ee$$$$$$$$$$$$$$$$$$P    ",
    "    ^$$$$$$$$$$$$$$$$$$$$$$$$$$$*     ",
    "      ^*$$$$$$$$$$$$$$$$$$$$$P*       ",
    "          *$$$$$$$$$$$$$$$$*          ",
    "             ^***********             "
  };  

  for (int i = 0; i < 21; i++) {
    for (int j = 0; j <= count; j++) {
      printf("\t");
    }
    printf("%s\n", ball[i]);
  }
}


void main(void) 
{
  bool run = true;
  int count = 0;
  bool down = true;
  int cycle = 0;
  int right = 0;

  while(run)
  {
    system("cls");

    for (int i = 0; i <= count; i++)
    {
      printf("\n");
    }

    ball(right);

    if(down){
      count++;
      right++;
    } else {
      count--;
      right--;
    }

    if (count > 16){
      down = false;
      cycle++;
    } else if (count < 0) {
      down = true;
    }

    if (cycle > 2) {
      run = false;
    }
  }
  sleep(2);
  system("cls");
  printf("\n\t\tBALL HAS FINISHED BOUNCING.");
}