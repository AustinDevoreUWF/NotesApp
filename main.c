#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <direct.h>
#include <time.h>

void fileHandler(char* fileName) {
    //Get User Path
    char* userPath = getenv("USERPROFILE");
    char folderPath[256];
    sprintf(folderPath, "%s/CnoteMaker", userPath);
    _mkdir(folderPath);

    //Build File Path
    char filePath[256];
    sprintf(filePath, "%s/%s", folderPath, fileName);
    
    //Open File
    FILE* fptr = fopen(filePath, "a");
    if (fptr == NULL) {
        printf("Error: Could not open file.\n");
        return;
    }
    //time
    time_t now = time(NULL);
    fprintf(fptr, "\n--- Note Entry: %s", ctime(&now));

    printf("Writing to: %s\nType 'QUIT' to save and exit.\n", fileName);

    char content[256];
    while (fgets(content, 256, stdin)) {
        //Remove newline for comparison
        content[strcspn(content, "\n")] = 0;
        
        if (strcmp(content, "QUIT") == 0) break;
        
        fprintf(fptr, "%s\n", content);
    }

    fclose(fptr);
    printf("Note saved successfully.\n");
}

int main(int argc, char* argv[]) {
    char fileName[64];

    if (argc > 1) {
        // Use the name provided in the command eg: cnote mynote.txt
        strncpy(fileName, argv[1], 63);
    } else {
        //check if the user the user just typed cnote
        //then print Filename to prompt for input
        printf("Filename: ");
        if (!fgets(fileName, 63, stdin)) return 1;
        //finds the \n and sets it to 0 so filename is clean
        fileName[strcspn(fileName, "\n")] = 0;
    }

    fileHandler(fileName);
    return 0;
}