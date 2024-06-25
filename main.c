#include <stdio.h>

int main() {
    int score = 0;
    printf( " 1 . addition of 56 and 68 :" );
    int a ;
    scanf("%d" , &a );
    if(a==124){
        score = score + 1;
    }
    else{
        score = score ;
    }
    printf( " 2 . subraction of 14 and 14 : ");
    int b ;
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
    printf( " 6 . sum of 45 and 54 : ");
    int f ;
    scanf("%d" , &f );
    if(f==45+54){
        score = score + 1;
    }
    else{
        score = score ;
    }
    printf( " 7 . devision of 632 and 2 : ");
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
    printf( " 10 . sum of 65 and 35 : ");
    int j ;
    scanf("%d" , &j );
    if( j==65 + 35){
        score = score + 1;
    }
    else{
        score = score ;
    }
    printf(" your score is : %d\n ",score);

    
}