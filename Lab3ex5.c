#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  char sentence[70];
  char space[] = " ";
  int strLen;
  int wordNum;
  if (argc <= 7)
    {
      for (wordNum = 0; wordNum < argc; wordNum ++)
        {
          for (strLen = 0; argv[wordNum][strLen] != '\0'; strLen ++) // (input != '\0') search adapted from stackoverflow
            {
            }
          if (strLen > 10)
            {
              printf("Each word must be no more than ten characters in length. Exiting program.");
              exit(0);
            }
        }
      for (int counter = argc - 1; counter > 0; counter --)
        {
          strcat(sentence, argv[counter]);
          strcat(sentence, space);
          printf("%s ", argv[counter]);
        }
      printf("\n%s \n", sentence);
      return 0;
    }
    else
      {
        printf("Must enter no more than 6 words. Exiting Program.");
        exit(0);
      }
}

