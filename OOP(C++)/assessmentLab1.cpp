#include <iostream>
using namespace std;

class ticketBooking{
private :
    string cusName;
    string movName;
    int numOfTicket;
    double tickPrice;
    double totalAmount;

    static int totalBookings;
    static int totalSeatsBooked;

public :
    Booking(){
        numOfTicket = 0;
        tickPrice = 0;
        totalAmount = 0;
    }
}

int main(){

    return 0;
}