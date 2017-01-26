#include <stdio.h>

int main(int argc, char** argv)
{
    FILE* file;

    file = fopen(argv[1],"w");
    if(file == NULL){
        printf("Something went wrong. Too few arguments?");
    }
    fprintf(file,"Some text %s\n", "THIS IS A TESTFILE, PLEASE IGNORE");

    fclose(file);

    return 0;
}
