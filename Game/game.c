//Sliding Game;

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

void generate_matrix(int matrix[4][4]){
    int n=15;
    int num_arr[n],i,j;
    for(i=0;i<15;i++)        
    num_arr[i]=i+1;
    srand(time(NULL));      
    int lastIndex=n-1,index;
    for(i=0;i<4;i++)
    for(j=0;j<4;j++)
  {
    if(lastIndex>=0)
    {  index=rand()%(lastIndex+1); 
       matrix[i][j]=num_arr[index];       
    }                               
  }
       matrix[i-1][j-1]= '\0';          


};

void display_matrix(int matrix[4][4]){// for displaying mtrix

    int i,j;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d \t", matrix[i][j]);
        }

        printf("\n");
    }
};


int up_arrow(int arr[4][4])
{
    int i,j;

    
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            if(arr[i][j]==0)
            break;
        if(j<4)
        break;
    }
    if(i==3)                 
     return 0;// not possible
     swap(&arr[i][j],&arr[i+1][j]);
    return 1;               
};


int left_arrow(int arr[4][4])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            if(arr[i][j]==0)
            break;
        if(j<4)
        break;
    }    
        if(j==3)               
        return 0; 
        swap(&arr[i][j],&arr[i][j+1]);
        return 1;               
};

int down_arrow(int arr[4][4])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            if(arr[i][j]==0)
            break;
        if(j<4)
        break;
    }
     if(i==0)                
    return 0;// not possible
        swap(&arr[i][j],&arr[i-1][j]); 
        return 1;              
};


int right_arrow(int arr[4][4])
{   
    int i,j;    
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            if(arr[i][j]==0)
            break;
        if(j<4)
        break;
    }
    if(j==0)              
    return 0;

    swap(&arr[i][j],&arr[i][j-1]);
    return 1;              
};

void swap(int *a,int *b)
{
    *a=*a+*b;
    *a=*a-*b;
    *a=*a-*b;
    printf("\t");
};

int main(){
char name[20], key,key1;
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

while(total_move){

key1=getch();

switch(key1){

    case 69:
    case 101: system("cls");
    printf("\n\t\t Never GiveUp! Hope to see you soon \n");
    printf("Press Enter to Exit");
    getch();
    exit(0);

    case 119: //Up Arrow
        if(up_arrow(matrix))
        total_move--;
        break;

    case 97: //left Arrow
        if(left_arrow(matrix))
        total_move--;
        break;

    case 115: //down Arrow
        if(down_arrow(matrix))
        total_move--;
        break;

    case 100: //Right Arrow
        if(right_arrow(matrix))
        total_move--;
        break;  

        default:
        printf("Hello") ;         
    

    
}

}


}
return 0;
}