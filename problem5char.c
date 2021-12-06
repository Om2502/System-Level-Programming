//Om Gautam
//Pather #: 002-57-0102

#include <stdio.h>
#include <stdlib.h>

void writeFile(int value) {
  // creating a FILE variable
  FILE *fptr;
  
  // integer variable
  int num;
  
  // open the file in write mode
  fptr = fopen("output.txt", "a");
  
  if (fptr != NULL) {
    printf("File created successfully!\n");
  }
  else {
    printf("Failed to create the file.\n");
    // exit status for OS that an error occurred
    return -1;
  }
  
  putw(value, fptr);

  
  // close connection
  fclose(fptr);
}

void findChars()
{
    FILE * file;
    char path[100];

    char ch;
    int characters, words, lines;


    /* Input path of files to merge to third file */
    printf("Enter source file path: ");
    scanf("%s", path);

    /* Open source files in 'r' mode */
    file = fopen(path, "r");


    /* Check if file opened successfully */
    if (file == NULL)
    {
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read privilege.\n");

        exit(EXIT_FAILURE);
    }

    /*
     * Logic to count characters, words and lines.
     */
    characters = words = lines = 0;
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;
    }


    /* Print file statistics */
    printf("\n");
    printf("Total characters = %d\n", characters);

    writeFile(characters);


    /* Close files to release resources */
    fclose(file);

}

int main(){
    findChars();
    return 0;
}