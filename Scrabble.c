//Hunter Smith
//Scrabble
//Given the word list and score multipliers, this program returns the highest scoring word that can be formed from the given tiles

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//globally defined variables
#define MAXINPUT 20
#define MAXDICT 100
#define MAXSIZE 8

//provided tile scores
const int TILESCORES[] ={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};


//function prototype
int canBeFormed(char word[], char tile[]);
int getScore(char *word);

//main
int main(void){

    //declare variables
    int cases,numWords,i,specialSquare[MAXSIZE], letterMult[MAXSIZE],highestVal=0;
    char words[MAXDICT][MAXSIZE]={0}, dict[MAXSIZE];

    //take user inputs
    scanf("%d",&cases);
    if(cases>MAXINPUT){
        printf("sorry choose a smaller number");
        return 0;
    }

    for(i=0;i<cases;i++){
    //take inputs for each iteration of the game
    scanf("%d", &numWords);

    for (i=0;i<numWords;i++){
            scanf("%s", words[i]);
        }

    for(i=0;i<MAXSIZE;i++){
        scanf("%s", &dict[i]);
        }

    for (i=0;i<MAXSIZE;i++){
        scanf("%d", &letterMult[i]);
        }

    for (i=0;i<MAXSIZE;i++){
        scanf("%d", &specialSquare[i]);
        }

    //Go through each word in the dictionary, check if it can be formed, if it can be formed, check to see if the score is a new high score
    for(i=0; i<numWords;i++)
    {
        if(canBeFormed(words[i],dict)==1){
            if(highestVal<letterMult[i]*specialSquare[i]*getScore(words[i])){
                highestVal=letterMult[i]*specialSquare[i]*getScore(words[i]);
            }
        }

    }
    //print the max score
    printf("%d", highestVal);

    }

    return 0;
}

//check if word can be formed from tiles take 2 arrays and compare strings, return 1 if string can be formed from chars of both arrays
int canBeFormed(char word[], char tile[])
{
  int a[26] = {0}, b[26] = {0}, i=0;

  //find frequency of characters in tiles and

  while (word[i] != '\0') {
    a[word[i]-'a']++;
    i++;
  }
  i = 0;

  while (tile[i] != '\0') {
    b[tile[i]-'a']++;
    i++;
  }
  // check if characters occur same amount

  for (i = 0; i < 26; i++){
    if (a[i] != b[i])
      return 0;
      }
        return 1;
}

//Take string and give a score to each letter/index based on its scrabble tile score return an int with the sum of the letter in the word
int getScore(char *word){
   int i=0,score=0;
   //while word exists mod 65 gives integers 0-25
   while(word[i]!='\0'){
       score=score+TILESCORES[word[i]%65];
       i++;
   }
   return score;
}
