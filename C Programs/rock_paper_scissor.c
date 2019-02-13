#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void computer (int num);
int game();
int gameover();
int main () {
  printf("Rock-Paper-Scissor Game\nYou basically just need to input R or P or S\n");
  printf("Ok!! you go first\n");
  game();
  return 0;
}
/* This function will print "Rock" "Paper" or "Scissor" based on random number that it got from game() function */
void computer(int num){
  switch (num) {
    case 0:
      printf("Computer : Rock\n");
      break;
    case 1:
      printf("Computer : Paper\n");
      break;
    case 2:
      printf("Computer : Scissor\n");
      break;
    default:
      printf("Error\n");
      break;
  }
}
/* Main Game Function */
int game() {
  char user;
  int bot,i;
  do{
    user=getchar();
    fflush(stdin);
    printf("--------------------------------------------------------------\n");
  if (user=='r'||user=='R') {
    user = 0;
    printf("Player : Rock\n");
  }else if(user=='p'||user=='P'){
    user = 1;
    printf("Player : Paper\n");
  }else if(user=='s'||user=='S'){
    user = 2;
    printf("Player : Scissor\n");
  }else {
    printf("Please Give the proper Input!!");
    return 0;
  }
  srand(time(0));
  bot = rand()%3;
  computer(bot);
  if (user==0&&bot==2 || user==1&&bot==0 || user==2&&bot==1){
    printf("You Win!!!");
    gameover();
  }else if(user==0&&bot==1 || user==1&&bot==2 || user==2&&bot==0) {
    printf("You Lose!!!");
    gameover();
  }else{
    printf("It's a tie, Try again: ");
  }
  }while(user==bot);
}
/* When player lose or win this function will take over */
int gameover() {
  int input;
  printf("\nDo you want to try again??\n   Press 1: Try again        Press 2: Exit\n Enter your choice:");
  scanf("%d",&input);
  fflush(stdin);
  if (input==1) {
    printf("\n\n\nYou:");
    game();
  }else if (input==2){
    exit(0);
  }else {
    printf("\nPlease give the proper input!!! ");
    gameover();
  }
}
