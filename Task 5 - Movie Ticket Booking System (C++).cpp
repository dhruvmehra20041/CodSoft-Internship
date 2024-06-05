#include <iostream>
using namespace std;

int main() {
    cout << "Welcome To Movie Booking Ticket System!!!\nListed Movies : \n";
    cout << "Screen 1 : Avengers: End Game" << endl;
    cout << "Screen 2 : Oppenheimer" << endl;
    cout << "Screen 3 : Interstellar" << endl;
    cout << "Screen 4 : Transformers" << endl;
    cout << "Select Movie (Enter the screen number):" << endl;

    int num;
    cin >> num;

    string movieName;
    switch (num) {
        case 1:
            movieName = "Avengers: End Game";
            break;
        case 2:
            movieName = "Oppenheimer";
            break;
        case 3:
            movieName = "Interstellar";
            break;
        case 4:
            movieName = "Transformers";
            break;
        default:
            cout << "Invalid selection!" << endl;
            return 1;
    }

    int price;
    int bill;
    int num1;
    int num2;
    int num3;

    cout << "Select Screen Type: " << endl;
    cout << "1.) 2D Screening" << endl;
    cout << "2.) 3D Screening" << endl;
    cout << "3.) IMAX Screening" << endl;
    cout << "4.) 4DX Screening" << endl;
    cin >> num1;

    cout << "Enter Number Of Seats: " << endl;
    cin >> num2;

    cout << "Select Seat Type: " << endl;
    cout << "1.) Regular Seats" << endl;
    cout << "2.) Recliner Seats" << endl;
    cout << "3.) Luxury Seats" << endl;
    cout << "4.) Lounger Seats" << endl;
    cin >> num3;

    switch (num1) {
        case 1: 
            switch (num3) {
                case 1:
                    price = 300;
                    break;
                case 2:
                    price = 400;
                    break;
                case 3:
                    price = 500;
                    break;
                case 4:
                    price = 600;
                    break;
                default:
                    cout << "Invalid seat type!" << endl;
                    return 1;
            }
            break;
        case 2: 
            switch (num3) {
                case 1:
                    price = 400;
                    break;
                case 2:
                    price = 500;
                    break;
                case 3:
                    price = 600;
                    break;
                case 4:
                    price = 700;
                    break;
                default:
                    cout << "Invalid seat type!" << endl;
                    return 1;
            }
            break;
        case 3: 
            switch (num3) {
                case 1:
                    price = 500;
                    break;
                case 2:
                    price = 600;
                    break;
                case 3:
                    price = 700;
                    break;
                case 4:
                    price = 800;
                    break;
                default:
                    cout << "Invalid seat type!" << endl;
                    return 1;
            }
            break;
        case 4: 
            switch (num3) {
                case 1:
                    price = 600;
                    break;
                case 2:
                    price = 700;
                    break;
                case 3:
                    price = 800;
                    break;
                case 4:
                    price = 900;
                    break;
                default:
                    cout << "Invalid seat type!" << endl;
                    return 1;
            }
            break;
        default:
            cout << "Invalid screen type!" << endl;
            return 1;
    }

    bill = price * num2;
    cout << "Total Billing Amount: " << bill << endl;
    cout << num2 << " Tickets Booked for: \n" << movieName << endl;

    return 0;
}