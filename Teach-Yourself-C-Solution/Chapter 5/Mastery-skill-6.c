#include<stdio.h>
#include<string.h>
int main(void)
{
    char words[][2][1000]={
        {"Adulting","acting like an adult"},
        {"Awe walk","Taking a walk outside and look around"},
        {"Contactless","not pysically touch or interact with people"},
        {"Dommscrolling","Reading news and expecting to be bad and be obsessed with looking at updates"},
        {"PPE","Personal protective equipment"},
        {" "," "}
    };
    char englishWord[100];
    printf("Enter word:");
    gets(englishWord);
    int i=0;
    while(strcmp(words[i][0]," ")){
        if(strcmp(englishWord,words[i][0])==0){
            printf("Translation:%s",words[i][1]);
        }
        i++;
    }
    if(!strcmp(words[i][0]," "))
        printf("Not in dictionary\n");
    return 0;
}