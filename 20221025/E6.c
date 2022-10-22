#include <stdio.h>
#include <string.h>

#define LUSER 20
#define MAX 15
#define MIN 8
#define NSPEC 4
#define SPEC "$#%&"

int StartApp(char[]);
int checkUser(char[], int, int, char[]);

int main(int argc, char const *argv[])
{
    char usrname[LUSER+1];

    char spec[NSPEC+1] = SPEC;

    do{
        gets(usrname);
    }while(checkUser(usrname, MAX, MIN, spec));

    StartApp(usrname);

    return 0;
}


int checkUser(char usrname[], int max, int min, char special[]){
    int i, j, dim, spec;
    spec = 0;
    for(i=0; usrname[i]!= '\0' || spec==0; i++){
        for(j=0; special[j] != '\0'; j++)
            if(usrname[i] == special[j])
                spec = 1;
    }
    if(spec == 1 && i>=min && i<=max)
        return 1;

    return 0;
}