#include <stdio.h>

char 
int main(int argc, char *argv[]) {
    char mode_arg = 0;
    char target_arg = 0;
    char hash_arg = 0;

    /*Process Input*/
    if(argc>1){
        for( int i = 1; i < argc; i = i + 1){
            /*Parse Each Input Param*/
            if !(strcmp(argv[i],"-md5")){
                mode_arg = i;
            }
            else if (strlen(argv[i]) = 32){
                hash_arg = i;
            }
            else if !(access(argv[i], F_OK){
                target_arg=i;
            }
	}

     
    }


    return 0;
}

void usage(char *pname){
    /*prints usage/syntax information to stderr */
    fprintf(stderr, "./%s [-md5, -both] [hash] \n", pname);
}
