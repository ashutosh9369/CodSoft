#include <iostream>
using namespace std;
int main() {
    int selected_movie;
    int number_of_seats;
    int movie_conformed;
    int seat_valid ;

    int booked_seats_1[] = {1, 2, 3, 4, 5, 10, 11, 12, 15, 17, 18, 19, 26, 27, 28, 29, 30, 34, 35, 36, 37, 38, 40, 41, 50, 51, 52};
    int booked_seats_2[] = {1, 2, 3, 4, 7, 9, 11, 13, 14, 15, 18, 19, 22, 25, 26, 28, 29, 30, 33, 35, 37, 39, 41, 43, 44, 46, 48, 49, 50, 51};
    int booked_seats_3[] = {2, 3, 5, 6, 10, 12, 13, 16, 17, 19, 22, 24, 25, 28, 29, 30, 31, 33, 35, 38, 39, 41, 43, 47, 48, 50, 51};

    int filled_1 = sizeof(booked_seats_1) / sizeof(booked_seats_1[0]);
    int avail_1 = 52 - filled_1;
    int filled_2 = sizeof(booked_seats_2) / sizeof(booked_seats_2[0]);
    int avail_2 = 52 - filled_2;
    int filled_3 = sizeof(booked_seats_3) / sizeof(booked_seats_3[0]);
    int avail_3 = 52 - filled_3;

    cout <<".....Welcome to Movie Booking system....." <<endl;
    cout <<endl;
    cout <<"Please fill the details according to your requirements" <<endl;
    cout <<endl;
    cout <<"We have total 3  movies available for now " <<endl;
    cout <<endl;
    cout <<"1. KGF chapter 2 at prize 150 ruppes" <<endl;
    cout <<"2. Puspa-the Rise at prize 130 ruppes" <<endl;
    cout <<"3. Gaurdians of Galaxy Volume 3 at prize 120 ruppes" <<endl;
    cout <<endl;
    cout <<"Chose your movie (as 1,2 or 3): "<<ends;
    cin >>selected_movie;
    cout <<endl;
    switch (selected_movie)
    {
        case 1: cout<<".....KGF chapter 2....." <<endl;
        movie_conformed = 1 ;
        cout<<"unavailable seats (already occupied) are : "<<ends;
        cout <<filled_1<<" out of 52"<<endl;
        cout <<endl;
        cout<<"Unavailable seat number :"<<ends;
        for (int i = 0; i < filled_1; i++) 
		{
        cout << booked_seats_1[i] <<ends;
        if (i != filled_1 - 1) 
		{
            cout << "," <<ends;
        }
        else 
		{
            cout<< "" <<endl;
        }
        }
        cout<<endl;
            cout << "availabe seats :" << avail_1 <<endl;
        break;

        case 2:  cout << ".....Puspa-the Rise....." << endl;
        movie_conformed = 2 ;
         cout << "unavailable seats (already occupied) are : " <<  ends;
         cout << filled_2 << " out of 52" <<  endl;
         cout <<  endl;

         cout << "Unavailable seat number :" <<  ends;
        for (int i = 0; i < filled_2; i++) {
         cout << booked_seats_2[i] <<  ends;
        if (i != filled_2 - 1) {
             cout << "," <<  ends;
        }
        else {
             cout << "" <<  endl;
            }
        }
         cout <<  endl;
             cout << "availabe seats: " << avail_2 <<  endl;
        break;

        case 3:  cout << ".....Gaurdians of Galaxy Volume 3....." << endl;
        movie_conformed = 3 ;
         cout << "unavailable seats (already occupied) are : " <<  ends;
         cout << filled_3 << " out of 52" <<  endl;
         cout <<  endl;

         cout << "Unavailable seat number :" <<  ends;
        for (int i = 0; i < filled_3; i++) {
         cout << booked_seats_3[i] <<  ends;
        if (i != filled_3 - 1) {
             cout << "," <<  ends;
        }
        else {
             cout << "" <<  endl;
            }
        }
         cout <<  endl;
             cout << "availabe seats :" << avail_3 <<  endl;
        break;
    }

     cout << "how many seats you want to book? : " << ends;
     cin >> number_of_seats;
     cout <<  endl;

    switch (movie_conformed)
    {
        case 1:
        if (number_of_seats > avail_1 ) {
             cout << "sorry...We do not have that number of available seats." <<  endl;
        }
        break;

        case 2:
        if (number_of_seats > avail_2 ) {
             cout << "sorry...We do not have that number of available seats." <<  endl;
        }
        break;

        case 3:
        if (number_of_seats > avail_3 ) {
             cout << "sorry...We do not have that number of available seats." <<  endl;
        }
        break;
    }

    int* chosen_seats = new int[number_of_seats];
     cout<< "please enter the seat.no that you want to book" << endl;

    switch(movie_conformed){
    case 1:
    for (int i = 1; i <= number_of_seats; i++) {
    seat_valid = 0;
    do {
         cout << "enter seat.no " << i << " :" <<  ends;
         cin >> chosen_seats[i - 1];
        
        if (chosen_seats[i - 1] < 1 || chosen_seats[i - 1] > 52) {
             cout << "Invalid seat number. Please enter a valid seat number (1 to 52)." <<  endl;
        } else {
            bool alreadyChosen = false;
            for (int j = 0; j < i - 1 ; j++) {
                if (chosen_seats[j] == chosen_seats[i - 1]) {
                     cout << "You had already chosen that seat before. Enter another seat number." <<  endl;
                    alreadyChosen = true;
                    break;
                }
            }
            if (!alreadyChosen) {
                for (int m = 0; m < filled_1; m++) {
                    if (booked_seats_1[m] == chosen_seats[i - 1]) {
                         cout << "Selected seat is already occupied. Please choose another seat." <<  endl;
                        break;
                        break;
                    } 
                    else {
                        seat_valid = 1;
                        }
                    }
                }
            }
        } while (seat_valid == 0);
    }
    break;

    case 2:
    for (int i = 1; i <= number_of_seats; i++) {
    seat_valid = 0;
    do {
         cout << "enter seat.no " << i << " :" <<  ends;
         cin >> chosen_seats[i - 1];
        
        if (chosen_seats[i - 1] < 1 || chosen_seats[i - 1] > 52) {
             cout << "Invalid seat number. Please enter a valid seat number (1 to 52)." <<  endl;
        } else {
            bool alreadyChosen = false;
            for (int j = 0; j < i - 1 ; j++) {
                if (chosen_seats[j] == chosen_seats[i - 1]) {
                     cout << "You had already chosen that seat before. Enter another seat number." <<  endl;
                    alreadyChosen = true;
                    break;
                }
            }
            if (!alreadyChosen) {
                for (int m = 0; m < filled_2; m++) {
                    if (booked_seats_2[m] == chosen_seats[i - 1]) {
                         cout << "Selected seat is already occupied. Please choose another seat." <<  endl;
                        break;
                    } else {
                        seat_valid = 1;
                        }
                    }
                }
            }
        } while (seat_valid == 0);
    }
    break;

    case 3:
    for (int i = 1; i <= number_of_seats; i++) {
    seat_valid = 0;
    do {
         cout << "enter seat.no " << i << " :" <<  ends;
         cin >> chosen_seats[i - 1];
        
        if (chosen_seats[i - 1] < 1 || chosen_seats[i - 1] > 52) {
             cout << "Invalid seat number. Please enter a valid seat number (1 to 52)." <<  endl;
        } else {
            bool alreadyChosen = false;
            for (int j = 0; j < i - 1 ; j++) {
                if (chosen_seats[j] == chosen_seats[i - 1]) {
                     cout << "You had already chosen that seat before. Enter another seat number." <<  endl;
                    alreadyChosen = true;
                    break;
                }
            }
            if (!alreadyChosen) {
                for (int m = 0; m < filled_3; m++) {
                    if (booked_seats_3[m] == chosen_seats[i - 1]) {
                         cout << "Selected seat is already occupied. Please choose another seat." <<  endl;
                        break;
                    } else {
                        seat_valid = 1;
                        }
                    }
                }
            }
        } while (seat_valid == 0);
    }
    break;

    }

     cout <<  endl <<  endl;
     cout << "..... TOTAL BILL ....." <<  endl;
     cout <<  endl;
     cout << "Movie Name : " <<  ends;

    switch(selected_movie){
        case 1 :  cout << "KGF chapter 2 " <<  endl;
        break;

        case 2 :  cout << "Puspa-the Rise " <<  endl;
        break;
        
        case 3 :  cout << "Gaurdians of Galaxy Volume 3 " <<  endl;
        break;

    }

     cout << "Seats Booked : " <<  ends;
     cout << number_of_seats <<  endl;
     cout <<  endl;

     cout << "Booked seats' number " <<  endl;

    for (int i = 1; i <= number_of_seats; i++)
    {
         cout << "Seat number " << i << " : " <<  ends; 
         cout << chosen_seats[i - 1] <<  endl; 
    }
    
     cout <<  endl;

     cout << "Ticket Cost Per Seat: " <<  ends;

    switch (selected_movie)
    {
    case 1:  cout << "150 Rupees " <<  endl;
        break;

    case 2:  cout << "130 Rupees " <<  endl;
        break;

    case 3:  cout << "120 Rupees " <<  endl;
        break;

    }

     cout<< "Total Cost : " <<  ends;

    switch (selected_movie)
    {
    case 1:  cout << 150 * number_of_seats <<  ends;
        break;

    case 2:  cout << 130 * number_of_seats <<  ends;
        break;

    case 3:  cout << 120 * number_of_seats <<  ends;
        break;

    }

     cout << " Rupees" <<  endl;

     cout <<  endl;
     cout<< "..... THANK YOU FOR PURCHASING TICKECTS ....." <<  endl;
     cout << "..... ENJOY THE MOVIE ....." <<  endl;
     cout <<  ends;  

    return 0;
}
