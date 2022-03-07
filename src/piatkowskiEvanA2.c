#include "../include/piatkowskiEvanA2.h"
#include <string.h>

// Function 1: readFile
char *readFile(char *filename){
    // create a string
    char *string;
    // dyn alloc memory to the string
    string = (char *)malloc(200 * sizeof(char));
    char char1;
    // use var 'length' for length gone in the file
    int length = 0;
    // open file fp
    FILE *fp;
    fp = fopen(filename, "r");
    // read until the end
    char1 = fgetc(fp);
    while(char1 != EOF){
        string[length++] = char1;
        char1 = fgetc(fp);
    }
    return string;
}

//function 2: stretchMe
char *stretchMe(char * aStringToStretch){
    int newSize = 0; //init at 0
    int length= strlen(aStringToStretch); // init wordlength at size of aStringToStretch
    int input[length]; // init array

    printf ("\n Enter %d digits: \n",length); // asks how many digits are in the word
    // gets frequency of each letter in the word
    for (int count = 0; count< length; count++){
        printf("Enter digit %d: ", count+1); // asks for freq of each index 
        scanf("%d", &input[count]); // get input
        if (input[count] <= 0){ 
            printf("\nINVALID ERROR"); // return error message
            count--;
        }else{
            newSize+=input[count];
        }
    }
    char stretch[newSize];
    int c2 = 0;
    for (int sLoop = 0; sLoop<length;sLoop++){
        while (input[sLoop]--){
            stretch[c2++] = aStringToStretch[sLoop];
        }
    }
    printf("%s\n",stretch);
    return stretch;
    
}


// Function 3: splitMe
int splitMe(char *aStringToSplit, char static2D[MAX_WORDS][MAX_LENGTH]){
    int wordCount = 0; // count words
    int charCount = 0; // count chars
    for(int counter = 0; counter < strlen(aStringToSplit); counter++){
        if(aStringToSplit[counter-1] != ' ' && aStringToSplit[counter] == ' '){
            static2D[wordCount++][charCount] = '\0';
            charCount = 0;
        }else if(wordCount < MAX_WORDS){
            static2D[wordCount][charCount++] = aStringToSplit[counter];
        }else{
            break;
        }
    }
    return wordCount+1;
}

// Function 4: shrinkMe
int shrinkMe(char * aStringToShrink){ 
    int length = strlen(aStringToShrink); // find length of string
    int punCount = 0; // init count of punctuation to 0
    
    // loop from last to first (easier than going front to back because youre deleting)
    for(int count = length-1; count >= 0; count--){
        // get char at 'count' (index)
        char charCheck = aStringToShrink[count]; //CHANGE VAR NAME
        // check if it is one of the punctuations
        if(charCheck =='.'||charCheck ==':'||charCheck =='?'||charCheck =='!'||charCheck ==';'){
            // increase the count if one of above 
            punCount++;
            // shift right when done
            for(int loop1 = count; loop1 < length-1; loop1++){
                aStringToShrink[loop1] = aStringToShrink[loop1+1];
            }
            length--;
        }
    }
    aStringToShrink[length] = '\0';
    // return the count of punctuations
    return punCount;
}


// Function 5: isItAPalindrome
bool isItAPalindrome(char *aString){
    return 0;
};




// Function 6: printSuffixes
void printSuffixes (char *aString, int whichWord, char *desiredSuffix){
    int count = 1; // initialize count and set to 1
    char word[strlen(aString)]; // init char array and size as aString
    
    // loop through aString
    for(int c1 = 0; aString[c1]!='\0'; c1++){ 
        if(aString[c1] == ' ' && c1 != strlen(aString)){
            count++;
        }
        // check if count is equal to word
        if(count==whichWord){
            int temp = 0; // init to 0
            int hold; // init var
            if(whichWord == 1){
                hold = c1; //if so store value in hold
            }else{
                hold = c1 + 1; //if not store value + 1 in hold
            }

            // loop to store value of aString that is in the location of whichWord array
            for(;aString[hold]!=' '; hold++){
                word[temp] = aString[hold];
                temp++; // increase for each word increment
            }
            word[temp] = '\0'; //stores null char at the end of the word array
            int whichLen = strlen(word); // stores the length of the word at the position of whichWord

            // prints each word that starting at the word at location whichWord
            // followed by the desired suffix
            for(int c2=0; c2<whichLen; c2++){
                printf("%c%s \n", word[c2],desiredSuffix);
            }
            break; //end here
        }
    }
}

