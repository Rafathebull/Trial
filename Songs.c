#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    char title[80];

    if(argc!=9)
    {
        fprintf(stderr,"You have to enter 9 arguments\n");
        return 1;
    }

    FILE *input=fopen("Songs.csv","r");
    FILE *file1=fopen(argv[2],"w");
    FILE *file2=fopen(argv[4],"w");
    FILE *file3=fopen(argv[6],"w");
    FILE *file4=fopen(argv[8],"w");

    while(fscanf(input,"%79[^\n]\n",title)==1)
    {
        if(strstr(title,argv[1]))
        {
            fprintf(file1,"%s\n",title);
        }

        else if(strstr(title,argv[3]))
        {
            fprintf(file2,"%s\n",title);
        }

        else if(strstr(title,argv[5]))
        {
            fprintf(file3,"%s\n",title);
        }

        else if(strstr(title,argv[7]))
        {
            fprintf(file4,"%s\n",title);
        }

        else
        {
            fprintf(stderr,"Error");
        }
    }
    fclose(file1);
    fclose(file2);
    fclose(file3);
    fclose(file4);
    return 0;
}