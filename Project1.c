#include <stdio.h>
#include <string.h>

// create a structure
struct Passenger {
    char name[50];
    int seat_no;
    int booked; 
};

// create seat array
struct Passenger seats[40];

// Function to initialize seats
void initializeSeats() {
    for(int i = 0; i < 40; i++) {
        seats[i].seat_no = i + 1;
        seats[i].booked = 0;
        strcpy(seats[i].name, "Empty");
    }
}

// Function to view seats
void viewSeats() {
    printf("\n----- SEAT STATUS -----\n");
    for(int i = 0; i < 40; i++) {
        if(seats[i].booked == 0)
            printf("Seat %d: Available\n", seats[i].seat_no);
        else
            printf("Seat %d: Booked by %s\n", seats[i].seat_no, seats[i].name);
    }
}

// Function to book a ticket
void bookTicket() {
    int seat;
    printf("\nEnter seat number to book (1-40): ");
    scanf("%d", &seat);

    if(seat < 1 || seat > 40) {
        printf("Invalid seat number!\n");
        return;
    }

    if(seats[seat - 1].booked == 1) {
        printf("Seat already booked! Try another.\n");
    } else {
        printf("Enter passenger name: ");
        scanf("%s", seats[seat - 1].name);
        seats[seat - 1].booked = 1;
        printf("Seat %d successfully booked!\n", seat);
    }
}

// Function to cancel a booking
void cancelTicket() {
    int seat;
    printf("\nEnter seat number to cancel (1-40): ");
    scanf("%d", &seat);

    if(seat < 1 || seat > 40) {
        printf("Invalid seat number!\n");
        return;
    }

    if(seats[seat - 1].booked == 0) {
        printf("Seat is already empty!\n");
    } else {
        seats[seat - 1].booked = 0;
        strcpy(seats[seat - 1].name, "Empty");
        printf("Booking for seat %d cancelled successfully!\n", seat);
    }
}

// Function to display passenger list
void showPassengers() {
    printf("\n----- PASSENGER LIST -----\n");
    for(int i = 0; i < 40; i++) {
        if(seats[i].booked == 1)
            printf("Seat %d -> %s\n", seats[i].seat_no, seats[i].name);
    }
}

int main() {
    int choice;

    initializeSeats();

    while(1) {
        printf("\n==== BUS/TRAIN TICKET RESERVATION ====\n");
        printf("1. View Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Show Passenger List\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: viewSeats(); break;
            case 2: bookTicket(); break;
            case 3: cancelTicket(); break;
            case 4: showPassengers(); break;
            case 5: printf("Exiting system..."); return 0;
            default: printf("Invalid choice! Try again.\n");
        }
    }
}
