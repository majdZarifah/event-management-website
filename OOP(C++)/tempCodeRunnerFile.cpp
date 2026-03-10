#include <iostream>
using namespace std;

class Booking {
private:
    string customerName;
    string movieName;
    int numberOfTickets;
    int ticketPrice;
    double totalAmount;

    static int totalBookings;
    static int totalSeatsBooked;

public:
    Booking() {
        numberOfTickets = 0;
        ticketPrice = 0;
        totalAmount = 0;
    }

    void inputDetails() {
        cout << "Enter Customer Name: ";
        cin >> customerName;

        cout << "Select Movie:\n";
        cout << "1. Avengers - 200\n";
        cout << "2. Leo - 180\n";
        cout << "3. Jawan - 150\n";
        cout << "Enter Choice: ";
        int choice;
        cin >> choice;

        switch(choice) {
            case 1:
                movieName = "Avengers";
                ticketPrice = 200;
                break;
            case 2:
                movieName = "Leo";
                ticketPrice = 180;
                break;
            case 3:
                movieName = "Jawan";
                ticketPrice = 150;
                break;
            default:
                cout << "Invalid choice!\n";
                return;
        }

        cout << "Enter Number of Tickets: ";
        cin >> numberOfTickets;

        totalBookings++;
        totalSeatsBooked += numberOfTickets;

    }

    void calculateTotal() {
        totalAmount = ticketPrice * numberOfTickets;

        if(numberOfTickets >= 5) {
            totalAmount = totalAmount - (totalAmount * 0.10);
        }
    }

    void displayBooking() {
        cout << "\n------ Booking Summary ------\n";
        cout << "Customer Name: " << customerName << endl;
        cout << "Movie: " << movieName << endl;
        cout << "Tickets: " << numberOfTickets << endl;

        if(numberOfTickets >= 5) {
            cout << "Discount Applied: 10%\n";
        }

        cout << "Total Amount: " << totalAmount << endl;
        cout << "-----------------------------\n";
    }

    static void showStatistics() {
        cout << "\n===== Booking Statistics =====\n";
        cout << "Total Bookings: " << totalBookings << endl;
        cout << "Total Seats Booked: " << totalSeatsBooked << endl;
        cout << "==============================\n";
    }
};

int Booking::totalBookings = 0;
int Booking::totalSeatsBooked = 0;

int main() {
    Booking b1, b2, b3;

    b1.inputDetails();
    b2.inputDetails();
    b3.inputDetails();

    b1.calculateTotal();
    b2.calculateTotal();
    b3.calculateTotal();

    b1.displayBooking();
    b2.displayBooking();
    b3.displayBooking();

    Booking::showStatistics();

    return 0;
}