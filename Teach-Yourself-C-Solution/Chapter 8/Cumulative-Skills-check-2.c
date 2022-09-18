#include<stdio.h>
#include<string.h>
#define AUTHOR 101
#define PUBLISHER 100
#define BOOK 100
char bookName[BOOK][BOOK];
char publisherName[PUBLISHER][PUBLISHER];
char authorName[AUTHOR][AUTHOR];
int i=0,j=0,k=0;
void enterData(void);
void searchAuthor(void);
void searchPublisher(void);
int main(void)
{
    int data;
    printf("Card Catalo:\n");
    printf("1.Enter\n");
    printf("2.Search by Author\n");
    printf("3.Search by Title\n");
    printf("4.Quit\n");
    while(1){
        printf("\nChoose your selection:");
        scanf("%d",&data);
        if(data==4) break;
        else if(data==1) enterData();
        else if(data==2) searchAuthor();
        else if(data==3) searchPublisher();
        else printf("Enter valid number!!!\n");
    }
    return 0;
}
void enterData(void)
{
    if(i<BOOK || j<AUTHOR || k<PUBLISHER){
        printf("\nEnter book name:");
        scanf("%s",bookName[i]);
        i++;
        printf("Enter author name:");
        scanf("%s",authorName[j]);
        j++;
        printf("Enter publisher name:");
        scanf("%s",publisherName[k]);
        k++;
    }else{
        printf("LIMIT EXCEEDEDD!!!");
    }
}
void searchAuthor(void)
{
    char author[100];
    printf("Enter the author name you want to search:");
    scanf("%s",author);
    int search=0;
    int found=0;
    while(search<AUTHOR){
        if(strcmp(author,authorName[search])==0){
            found=1;
            printf("Book name:%s\n",bookName[search]);
            printf("Author name:%s\n",authorName[search]);
            printf("Publisher name:%s\n",publisherName[search]);
            break;
        }
        search++;
    }
    if(found==0) printf("\nNo data is found");
}
void searchPublisher(void)
{
    char publisher[100];
    printf("Enter the publisher name you want to search:");
    scanf("%s",publisher);
    int search=0;
    int found=0;
    while(search<PUBLISHER){
        if(strcmp(publisher,publisherName[search])==0){
            found=1;
            printf("Book name:%s\n",bookName[search]);
            printf("Author name:%s\n",authorName[search]);
            printf("Publisher name:%s\n",publisherName[search]);
            break;
        }
        search++;
    }
    if(found==0) printf("\nNo data is found");
}