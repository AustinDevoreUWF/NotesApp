#include <stdio.h>
#include <stdlib.h>
//as few libraries as possible
char* returnValidStr(char* fileName){
    int i = 0;
    while(fileName[i] != '\0'){
        if(fileName[i] == '\n'){
            fileName[i] = '\0';
            break;
        }i++;
    }return fileName;
}
void fileHandler(char* fileName){
    returnValidStr(fileName);
    FILE* fptr = fopen(fileName, 'w');
    if(fptr == NULL){
        printf("The File could not be created");
    }else printf("Note created Successfully");

}




//create a file, write to the file, output the file
int main(){

    printf("Please tell me what file you want to create_\n");
    char fileName[21];//-1 since \0 is the last space for
    fgets(fileName,21, stdin);
    fileHandler(fileName);
    return 0;
}


int softCalculator(int x){
    return x+1;
}
int hardCalculator(int* x){
    return x+1;
}
int main(){
    int x = 5;
    softCalculator(x);
    printf(x);//this would print 5
    hardCalculator(x);
    printf(x);//this would print 6
}