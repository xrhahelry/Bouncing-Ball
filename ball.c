#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

void ball(void)
{
  printf("              .......                 \n");
  printf("        .zd$$$$$$$$$$$$$bc.           \n");        
  printf("      z$$$$$$$$$$$$$$$$$$$$$c         \n");
  printf("    d$$$$$$$$$$$$$$$$$$$$$$$$$b       \n");
  printf("   z$$$$$$$$$$$$$$$$$$$$$$$******c    \n");
  printf("  J$$$$$$$$$$$$$$$**              b   \n");
  printf(" J$$$$$$$$$$$*                     b  \n");
  printf(".$$$$$$$$*                          L \n");
  printf("$$$$$$*       z$P**$b               3 \n");
  printf("$$$*          $$   4$F              ^r\n");
  printf("$                  d$               eF\n");
  printf(".                 d$             .d$$F\n");
  printf("L                J$\%.zeL      .e$$$$$\n");
  printf("'               4$$$P      .e$$$$$$$P \n");
  printf(" &                      .e$$$$$$$$$$$ \n");
  printf("  &                .ze$$$$$$$$$$$$$$  \n");
  printf("   &     ....ee$$$$$$$$$$$$$$$$$$$P   \n");
  printf("    ^$$$$$$$$$$$$$$$$$$$$$$$$$$$      \n");
  printf("      ^*$$$$$$$$$$$$$$$$$$$$$P        \n");
  printf("          *$$$$$$$$$$$$$$$*           \n");
  printf("             ^ ******                 ");       
}


void main(void) 
{
  bool run = true;
  int count = 0;
  bool down = true;
  int cycle = 0;

  while(run)
  {
    system("cls");

    for (int i = 0; i <= count; i++)
    {
      printf("\n");
    }

    ball();

    if(down){
      count++;
    } else {
      count--;
    }

    if (count > 10){
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