//program takes string and char as user input and returns number of times character appears in string
#include <stdio.h>
#include <string.h>

int num_appearances(char word[], char letter);

int main(){

    //please do not enter a word with more than 39 letters
    char word[40];
    printf("Enter a word\n");
    scanf("%s", word);

    char letter;
    printf("Enter a letter\n");
    scanf(" %c",&letter);

    printf("The letter %c occurs %d times in the word %s\n", letter,num_appearances(word,letter),word);
}

int num_appearances(char word[], char letter){

    //track number of letter occurences
    int letterCt=0;
    for(int i=0; i<strlen(word);i++){
        if(word[i]==letter){
            letterCt++;
        }
    }
    return letterCt;
}

