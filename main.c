#include <stdio.h>
#include <stdbool.h>

bool addQuestion(int qno, int a, int b) {
    printf( " %d . addition of %d and %d :", qno, a, b);
    int input ;
    scanf("%d" , &input );
    if(input == a + b){
        return true;
    } else{
        return false;
    }
}

int main() {
    int score = 0;
    bool result;
    result = addQuestion(1, 56, 68);
    if(result == true){
        score = score + 1;
    }
    printf( " 2 . subraction of 14 and 14 : ");
    int b;
    printf("value of b: '%d'", b);
    scanf("%d" , &b );
    if( b==0){
        score = score + 1;
    }
    else{
        score =score ;
    }
    printf( " 3 . division of 76 and  2 : ");
    int c ;
    scanf("%d" , &c );
    if( c==76/2){
        score = score + 1;
    }
    else{
        score = score ;
    }
    printf( " 4 . product of 24 and 7 : ");
    int d ;
    scanf("%d" , &d );
    if( d==24*7){
        score = score + 1;
    }
    else{
        score = score ;
    }
    printf( " 5 . modulus of 76 and 4 : ");
    int e ;
    scanf("%d" , &e);
    if(e==76%4){
        score = score + 1;
    }
    else{
        score = score ;
    }
    result = addQuestion(6, 45, 54);
    if(result == true){
        score = score + 1;
    }
    printf( " 7 . division of 632 and 2 : ");
    int g ;
    scanf("%d" , &g );
    if(g==632/2){
        score = score  + 1;
    }
    else{
        score = score ;
    }
    printf( " 8 . subraction of 668 and 234 : ");
    int h ;
    scanf("%d" , &h );
    if(h==668-234){
        score = score + 1;
    }
    else{
        score = score ;
    }
    printf( " 9 . product of 98 and 4 : ");
    int i ;
    scanf("%d" , &i );
    if( i==98*4){
        score = score + 1;
    }
    else{
        score = score ;
    }

    result = addQuestion(10, 65, 35);
    if(result){
        score = score + 1;
    }
    printf(" your score is : %d\n ",score);

    
}
