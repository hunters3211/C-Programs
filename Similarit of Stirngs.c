//return "similarity" score of 2 user inputted strings
#include <stdio.h>
#include <string.h>

int match_score(char word1[], char word2[]);

int main(){

    char word1[30],word2[30];

    printf("enter string one\n");
    scanf("%s", word1);

    printf("enter string 2\n");
    scanf("%s",word2);

    if(match_score(word1,word2)==0){
        printf("strings are of different length similarity score 0\n");
    }

    else
        printf("similarity score is %d", match_score(word1,word2));

}

int match_score(char word1[], char word2[]){

    int score=0;

    //words are not same length
    if(strlen(word1)!=strlen(word2)){
        return 0;
    }

    else
        //each same letter adds one to the score
        for(int i=0;i<strlen(word1);i++){
            if(word1[i]==word2[i]){
                score++;
            }
        }

    return score;
}
