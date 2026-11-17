
#include <stdio.h>
#include <string.h>

struct movie
{
    char title[50];
    char genre[30];
    char director[50];
    int year;
    float rating;
};

void display(struct movie m[], int n)
{
    int i;

    for(i=0; i<n; i++)
    {
        printf("\n\nMovie %d",i+1);
        printf("\nTitle: %s",m[i].title);
        printf("\nGenre: %s",m[i].genre);
        printf("\nDirector: %s",m[i].director);
        printf("\nRelease Year: %d",m[i].year);
        printf("\nRating: %.1f",m[i].rating);
    }
}

void search(struct movie m[], int n)
{
    char g[30];
    int i, found=0;

    printf("\nEnter Genre to Search: ");
    scanf("%s",g);

    for(i=0; i<n; i++)
    {
        if(strcmp(m[i].genre,g)==0)
        {
            printf("\nTitle: %s",m[i].title);
            printf("\nDirector: %s",m[i].director);
            printf("\nYear: %d",m[i].year);
            printf("\nRating: %.1f",m[i].rating);

            found=1;
        }
    }

    if(found==0)
    {
        printf("\nNo Movie Found!");
    }
}

int main()
{
    struct movie m[100];
    int n=0;
    int choice,i;

    while(1)
    {
        printf("\n\n===== Movie Management System =====");
        printf("\n1. Add New Movie");
        printf("\n2. Search Movie By Genre");
        printf("\n3. Display All Movies");
        printf("\n4. Exit");

        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        if(choice==1)
        {
            printf("\nEnter Movie Title: ");
            scanf(" %[^\n]",m[n].title);

            printf("Enter Genre: ");
            scanf("%s",m[n].genre);

            printf("Enter Director Name: ");
            scanf(" %[^\n]",m[n].director);

            printf("Enter Release Year: ");
            scanf("%d",&m[n].year);

            printf("Enter Rating: ");
            scanf("%f",&m[n].rating);

            n++;

            printf("\nMovie Added Successfully!");
        }

        else if(choice==2)
        {
            if(n==0)
            {
                printf("\nNo Movies Available!");
            }
            else
            {
                search(m,n);
            }
        }

        else if(choice==3)
        {
            if(n==0)
            {
                printf("\nNo Movies Added Yet!");
            }
            else
            {
                display(m,n);
            }
        }

        else if(choice==4)
        {
            printf("\nProgram Ended");
            break;
        }

        else
        {
            printf("\nWrong Choice!");
        }
    }

    return 0;
}

