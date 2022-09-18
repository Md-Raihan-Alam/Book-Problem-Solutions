#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char names[100][40];
char numbers[100][40];
int loc=0;
int menu(void);
void enter(void);
void load(void);
void save(void);
void find(void);
int main(void)
{
    int choices;
    do{
        choices=menu();
        if(choices==1) enter();
        else if(choices==2) find();
        else if(choices==3) save();
        else if(choices==4) load();
        else if(choices==5) break;
        else printf("Enter a valid number\n");
    }while(1);
    return 0;
}
int menu(){
    int num;
    printf("1.Enter the names and numbers\n");
    printf("2.Find numbers\n");
    printf("3.Save directory to disk\n");
    printf("4.Load directory from disk\n");
    printf("5.Quit\n:");
    scanf("%d",&num);
    return num;
}
void enter(){
    if(loc>=100) printf("No more value can be entered");
    else{
        printf("Enter name:");
        scanf("%s",&names[loc]);
        printf("Enter numbers:");
        scanf("%s",&numbers[loc]);
        loc++;
    }
}
void find(){
    char target[100];
    printf("Enter the person name:");
    scanf("%s",&target);
    int targetNumberId=-1;
    for(int i=0;i<loc;i++){
        if(strcmp(names[i],target)==0){
                    printf("%s %s\n",names[i],target);
            targetNumberId=i;
        }
    }
    if(targetNumberId==-1) printf("No number under %s person name is added.",target);
    else printf("%s\'s number is %s\n",names[targetNumberId],numbers[targetNumberId]);
}
void load(){
    printf("\n--loading--\n");
    FILE *fp;
    if((fp=fopen("Telephone.txt","r"))==NULL){
        printf("Error creating telephone book file");
        exit(1);
    }
    int data=0;
    while(!feof(fp)){
        fscanf(fp,"Name=%s\nNumber=%s\n",names[data],numbers[data]);
        printf("Name=%s\nNumber=%s\n",names[data],numbers[data]);
    }
    fclose(fp);
}
void save(){
    printf("\n--Saving--\n");
    FILE *fp;
    if((fp=fopen("Telephone.txt","w"))==NULL){
        printf("Error reading telephone book file");
        exit(1);
    }
    for(int i=0;i<loc;i++)
    {
        fprintf(fp,"Name=%s\nNumber=%s\n",names[i],numbers[i]);
    }
    fclose(fp);
}