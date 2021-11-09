#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

void circle(void)
{
  printf("\t\t\t\t     @@@@@@@@@\n");
  printf("\t\t\t\t   @@@@@@@@@@@@@\n");
  printf("\t\t\t\t  @@@@@@@@@@@@@@@\n");
  printf("\t\t\t\t @@@@@@@@@@@@@@@@@\n");
  printf("\t\t\t\t @@@@@@@@@@@@@@@@@\n");
  printf("\t\t\t\t@@@@@@@@@@@@@@@@@@@\n");
  printf("\t\t\t\t@@@@@@@@@@@@@@@@@@@\n");
  printf("\t\t\t\t @@@@@@@@@@@@@@@@@\n");
  printf("\t\t\t\t @@@@@@@@@@@@@@@@@\n");
  printf("\t\t\t\t  @@@@@@@@@@@@@@@\n");
  printf("\t\t\t\t   @@@@@@@@@@@@@\n");
  printf("\t\t\t\t     @@@@@@@@@\n");
}


int main(void) 
{
  bool run = true;
  int count = 1;
  bool down = true;

  while(run)
  {
    system("cls");

    for (int i = 0; i <= count; i++)
    {
      printf("\n");
    }

    circle();
    if(down){
      count++;
    } else {
      count--;
    }

    if (count > 15){
      down = false;
    } else if (count < 1) {
      down = true;
    }
  }
}