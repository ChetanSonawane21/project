#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void snakewatergun(){
    char you = 'a';
    printf("\nEnter 's' fro Snake, 'w' for Water and 'g' for Gun : ");
    scanf(" %c",&you);

    char comp;
    srand(time(0));
    int number = rand()%100+1;

    if(number<33){
        comp ='s';
    }
    
    else if(number>33 && number<67){
        comp ='w';
    }
    
    else{
        comp ='g';
    }
    if(you==comp){
        printf("\nYou Draw !");
    }
    if(you=='s' && comp=='g'){
        printf("\nYou Lose !");
    }
    else if(you=='g' && comp=='s'){
       printf("\nYou win !");
    }
    if(you=='s' && comp=='w'){
        printf("\nYou win !");
    }
    else if(you=='w' && comp=='s'){
        printf("\nYou Lose !");
    }
    if(you=='w' && comp=='g'){
        printf("\nYou win !");
    }
    else if(you=='g' && comp=='w'){
        printf("\nYou Lose !");
    }
    printf("\nYou choose %c and computer choose %c." ,you,comp);
}
int main(){


    char choice;
    while (choice != 'n')
    {
        printf("\nStart the game ? y / n ? : ");
        scanf(" %c",&choice);
        if(choice == 'y')
        {
            snakewatergun();
        }
    }
    

    return 0;
    
}