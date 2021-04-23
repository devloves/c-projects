#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int R=1,P=2,S=3,i,Pscore=0,Cscore=0,choice;
    srand(time(NULL));

    printf("\033[1;37m▓▒▒░░░ ROCK PAPER SCISSORS By Pranav Ginoya ░░░▒▒▓\n");
    printf("\n\b ❖ | Rock = 1 \n ❖ | Paper = 2\n ❖ | Scissors = 3\n\n");

    for(i=0;i<5;i++){
        printf("\033[1;36m┣ Enter your choice: ");
        scanf("%d",&choice);
            int computer=rand()%3+1;
            	if(choice==1){
                	if(computer==1){
							 			printf("\033[1;34m");
                    printf("\n╸Draw\n\n");
                	}
                	if(computer==2){
							 			printf("\033[1;31m");
                    printf("\n╸Computer Wins!\n\n");
                    Cscore= Cscore + 1;
                	}
                	if(computer==3){
							 			printf("\033[1;32m");
                    printf("\n╸Player Wins\n\n");
                    Pscore = Pscore + 1;
                	}
            	}
              else if(choice==2){
                  if(computer==2){
							 			printf("\033[1;34m");
                      printf("\n╸Draw\n\n");
                  }
                  if(computer==3){
							 			printf("\033[1;32m");
                      printf("\n╸Player Wins!\n\n");
                      Pscore = Pscore + 1;
                  }
                  if(computer==1){
										printf("\033[1;31m");
                      printf("\n╸Computer Wins!\n\n");
                      Cscore= Cscore + 1;
                  }
              }
              else if(choice==3){
                  if(computer==3){
							 			printf("\033[1;34m");
                      printf("\n╸Draw\n\n");
                  }
                  if(computer==2){
										printf("\033[1;31m");
                      printf("\n╸Computer Wins!\n\n");
                      Cscore= Cscore + 1;
                  }
                  if(computer==1){
							 			printf("\033[1;32m");
                      printf("\n╸Player Wins!\n\n");
                      Pscore = Pscore + 1;
                  }
              }
        else{
						printf("\033[1;31m");
            printf("\n╳  Wrong Option ╳\n\n");
        }

            }
            if(Cscore > Pscore ){
							 	printf("\033[1;37m");
                printf(".----------------------.\n| Computer Wins %d to %d |\n'----------------------'\n",Cscore,Pscore);
            }
            else if(Cscore < Pscore ){
							 	printf("\033[1;37m");
                printf(".---------------------.\n| Player Wins %d to %d |\n'---------------------'\n",Cscore,Pscore);
            }
           else if(Cscore == Pscore ){
							 			printf("\033[1;37m");
						 printf(".-------------------------.\n| No winner it is a draw! |\n'-------------------------'\n");
            }



    return 0;
}
