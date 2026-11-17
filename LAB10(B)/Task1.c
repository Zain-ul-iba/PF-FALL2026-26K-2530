#include <stdio.h>

struct flight
{
    int flightNo;
    char departure[30];
    char destination[30];
    char date[20];
    int seats;
};

void display(struct flight f)
{
    printf("\nFlight Number: %d",f.flightNo);
    printf("\nDeparture City: %s",f.departure);
    printf("\nDestination City: %s",f.destination);
    printf("\nDate: %s",f.date);
    printf("\nAvailable Seats: %d\n",f.seats);
}

void book(struct flight *f)
{
    if(f->seats > 0)
    {
        f->seats = f->seats - 1;
        printf("\nYour seat has been booked!");
    }
    else
    {
        printf("\nNo seats available!");
    }
}

int main()
{
    struct flight f;
    int choice;

    printf("Enter Flight Number: ");
    scanf("%d",&f.flightNo);

    printf("Enter Departure City: ");
    scanf("%s",f.departure);

    printf("Enter Destination City: ");
    scanf("%s",f.destination);

    printf("Enter Date: ");
    scanf("%s",f.date);

    printf("Enter Available Seats: ");
    scanf("%d",&f.seats);

    while(1)
    {
        printf("\n\n1. Display Flight");
        printf("\n2. Book Seat");
        printf("\n3. Exit");

        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        if(choice == 1)
        {
            display(f);
        }
        else if(choice == 2)
        {
            book(&f);
        }
        else if(choice == 3)
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
