#include<stdio.h>
int main(void)
{
    int options;
    do{
        printf("Mailing list menu:\n");
        printf("1.Enter addresses\n2.Delete addresses\n3.Search the list\n4.Print the list\n5.Quit\n");
        printf("Enter the number of your choice(1-5):");
        scanf("%d",&options);
        if(options==1) printf("\nEnter addresses\n");
        else if(options==2) printf("\nDelete addresses\n");
        else if(options==3) printf("\nSearch the list\n");
        else if(options==4) printf("\nPrint the list\n");
        else if(options==5) printf("\nQuit\n");
        else printf("\nEnter number between options\n");
    }while(options!=5);
    return 0;
}
