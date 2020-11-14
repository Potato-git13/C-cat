#include <stdio.h>
#include <stdlib.h>
main()
{
    int i = 0;
    while(i < 10){
        char ch, file_name[25];
        FILE *file;

        printf("file: ");
        gets(file_name);

        file= fopen(file_name, "r"); // read mode

        if (file == NULL)
        {
            perror("Error while opening the file.\n");
            exit(0);
        }

        printf("%s:\n", file_name);

        while((ch = fgetc(file)) != EOF)
            printf("%c", ch);

        fclose(file);
        printf("\n");
	i = 0;
    }
}
