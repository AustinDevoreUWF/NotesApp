#include <stdio.h>
#include <stdlib.h>
//returns proper fileName, no \n
char* returnValidStr(char* fileName){
    int i = 0;
    while(fileName[i] != '\0'){
        if(fileName[i] == '\n'){
            fileName[i] = '\0';
            break;
        }i++;
    }return fileName;
}
/*needs to check if file alr exists
if not create one called "fileName"
write to the file
press escape to exit
auto save the file to a specific notes folder(predefined for now)
*/
void fileHandler(char* fileName){
    returnValidStr(fileName);
    FILE* fptr = fopen(fileName, "a");
    //if something goes wrong
    if(fptr == NULL){
        printf("A dark being has taken your note back home");
        return;
    }
    printf("Your note is ready for your words:\n");
    printf("send QUIT to leave\n");

    char content[256];
    //stay in loop forever
    while(1){
    if(fgets(content,256,stdin) != NULL){
        if(strcmp(returnValidStr(content),"QUIT")==0){
            break;
        }
        fprintf(fptr,"%s\n",content);
        }
    }
    fclose(fptr);
}

//create a file, write to the file, output the file
int main(){
    printf("Please tell me what file you want to create_\n");
    char fileName[50];//-1 since \0 is the last space for
    fgets(fileName,21, stdin);
    fileHandler(fileName);
    printf("Select Any key to close this machine...");
    getChar();
    return 0;
}
