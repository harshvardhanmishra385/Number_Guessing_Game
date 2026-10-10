#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX_ATTEMPTS 7
int main(){
  int random, guess;
  int number_of_guess=0;
  printf("-----------WELCOME------------\n");
  srand(time(NULL));
  random= rand()%100+1;
  do{
  printf("PLEASE GUESS A NUMBER BETWEEN (1-100)\n");
  if (scanf("%d", &guess) != 1) {
            printf("Please enter a valid number!\n");
           while (getchar() != '\n');
            continue;
        }
  number_of_guess++;
   if(guess>random){
    printf("GUESS A SMALLER NUMBER\n");
   } else if(guess<random){
    printf("GUESS A BIGGER NUMBER\n");
   }else{
    printf("CONGRATULATIONS!!!! YOU GUESSED THE CORRECT NUMBER AT %d ATTEMPT", number_of_guess);
   }
   if(number_of_guess==MAX_ATTEMPTS){
    printf("OPPS!!!! OUT OF CHANCES BETTER LUCK NEXT TIME\n");
    printf("THE NUMBER WAS %d", random);
    break;
   }
  }while(guess!=random);
  return 0;
}