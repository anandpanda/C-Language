#include <stdio.h>
#include <string.h>

// FILE is a (hidden) structure that needs to be created for opening a file.
// A FILE pointer points to this structure & is used to access this file.

int main()
{
    // Opening a File
    // fptr = fopen("file name","mode");

    // File opening modes
    // "r" -> read , "w" -> write , "rb" -> read in binary , "wb" -> write in binary , "a" -> append

    // Closing a File
    // fclose(fptr);

    FILE *fptr;
    fptr = fopen("New.txt", "r");

    if (fptr == NULL)
    {
        printf("File doesn't exist. \n");
    }
    else
    {
        fclose(fptr);
    }

    return 0;
}