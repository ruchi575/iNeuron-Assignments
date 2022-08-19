//Sliding Game

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void user_name(char *name){
 printf("Player Name: ");
 gets(name);
};

char game_rules(){
    char k;
    int i,j,seq=1;
printf("\t\t Matrix Puzzle");
printf("\033[0;31m"); //Set the text to the color red
printf("\n\n\t\tRULES OF THIS GAME"); // PRINTING THIS IN RED
printf("\n1. You can move only 1 step at a time by arrow key");
printf("\033[0m"); //Resets the text to default color
    printf("\n\t Move Up: by Up arrow key");// UP arrow key
    printf("\n\t Move Down: by Down arrow key");
    printf("\n\t Move Left: by Left arrow key");
    printf("\n\t Move Right: by Right arrow key");

printf("\033[0;31m"); //Set the text to the color red
//printf("\n\n\t\tRULES OF THIS GAME"); // PRINTING THIS IN RED
printf("\n2. You can move number at empty position only");
printf("\n3. For each valid move: your total number of move will be decreased by 1");
printf("\n4. Winning situation: Number in a 4*4 matrix should be in order from 1 to 15");
printf("\033[0m"); //Resets the text to default color

printf("\n\n\t Winning Situation: \n");

for(i=0;i<4;i++){
    for(j=0;j<4;j++){
       printf("%d\t", seq);
       seq++;
       if(seq>15)
       break;
    
    }
    printf("\n");
}

printf("\033[0;31m"); //Set the text to the color red
printf("\n5. You can exit the game at any time by pressing 'E' or 'e' ");
printf("\033[0m"); //Resets the text to default color
printf("\n So try to win in minmum number of move");
printf("\n\n\tHappy Gaming, Good Luck");
printf("\n Enter any key to start....");
getchar();
//scanf("%c", k);
system("cls");
return k;
};

// void solve(){

// int matrix[4][4],i,j;
// int lastIndex=

// for(i=1;i<=4;i++){
//     for(j=1;j<=4;j++){
//         matrix[i][j]= rand() %15;
//     }
// }

// for(i=1;i<=4;i++){
//     for(j=1;j<=4;j++){
//         printf("%d ", matrix[i][j]);
//     }
//     printf("\n");
// }

void generate_matrix(int matrix[4][4]){
    int n=15;
    int num_arr[n],i,j;
    for(i=0;i<15;i++)        // These 1-15 number will be in th matrix
    num_arr[i]=i+1;

    srand(time(NULL));           // for random number generation

    int lastIndex=n-1,index;

    for(i=0;i<4;i++)
    for(j=0;j<4;j++)
  {
    if(lastIndex>=0)
    {  index=rand()%(lastIndex+1); // idea : performing % operation by (lastIndex+1)
       matrix[i][j]=num_arr[index];       // will give index , so put that num[index] number in matrix
       num_arr[index]=num_arr[lastIndex--]; // and replace last number with this indexed positioned number
    }                               // and finally lastIndex--
  }
       matrix[i-1][j-1]=0;          // last number is zero


};

void display_matrix(int matrix[4][4]){

    int i,j;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d \t", matrix[i][j]);
        }

        printf("\n");
    }
};

int main(){
char name[20], key;
int total_move=4;
int matrix[4][4];
user_name(name);
system("cls");
key=game_rules();
if(key!='e' & key !='E')
system("cls");


printf("Player name: %s", name);
printf("\t\tMove remaining: %d \n", total_move);

//solve();
int x=1;
while(x){
generate_matrix(matrix);
display_matrix(matrix);
x--;


}



return 0;
}