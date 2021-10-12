
#include "lab22functs.h"

void displayWordList(char wordList[][MAX_WORD_LEN], int length){
   for(int i = 0; i < length; i++){
      printf("%03i : %s\n", i, wordList[i]);
   }
}

void displayBiGrams(int biGrams[][MAX_NUM_WORDS], int size){
    for(int r = 0; r < size; r++){
       for(int c = 0; c < size; c++){
           printf("%02i ", biGrams[r][c]);
       }
       printf("\n");
    }
}

FILE* openFile(char fName[], char fMode[]) {

   FILE* file1 = fopen(fName, "r"); 

      if (file1 == NULL) {
      printf("Could not open file movies.csv.\n"); 
      return -1; 
      }
      return file1; 
}

bool cleanString(char word[]) {

   for (int i = 0; i < strlen(word[]); i++) {
      if (i)
   }
}
