#include <iostream>
using namespace std;

int main()
{
    int quant, choice;
//Quantity of food items we have 
    int Qrooms = 0, Qpasta=0, Qburger=0, Qnoodles=0, Qshakes=0, Qchicken=0;
//Quantity of food items we sold
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshakes=0, Schicken=0;
//Total price of items
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shakes=0, Total_chicken=0;

    cout<<endl<<"\t Quantity of items we have";
    cout<<endl<<"Rooms available: ";
    cin>>Qrooms;
    cout<<endl<<"Quantity of pasta: ";
    cin>>Qpasta;
    cout<<endl<<"Quantity of burger: ";
    cin>>Qburger;
    cout<<endl<<"Quantity of noodles: ";
    cin>>Qnoodles;
    cout<<endl<<"Quantity of shake: ";
    cin>>Qshakes;
    cout<<endl<<"Quantity of chicken-roll: ";
    cin>>Qchicken;

    m:
//Creating the menu for the user
    cout<<"\n\t\t\t Please select from the given menu options ";
    cout<<"\n\n1. Rooms\n2. Pasta\n3. Burger\n4. Noodles\n5. Shake\n6. Chicken-roll\n7. Information regarding sales and collection\n8. Exit";
    
    cout<<"\n\nPlease Enter your choice! ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"Enter the number of rooms you want: ";
            cin>>quant;
            if(Qrooms-Srooms>=quant) {
                Srooms+=quant;
                Total_rooms+=quant*1200;
                cout<<"\n\n\t\t"<<quant<<" room(s) have been alloted to you!";
            } else {
                cout<<"\n\tOnly "<<Qrooms-Srooms<<" Rooms remaining in hotel";
            }
            break;
        case 2:
            cout<<"Enter the pasta quantity: ";
            cin>>quant;
            if(Qpasta-Spasta>=quant) {
                Spasta+=quant;
                Total_pasta+=quant*250;
                cout<<"\n\n\t\t"<<quant<<" pasta is the order!";
            } else {
                cout<<"\n\tOnly "<<Qpasta-Spasta<<" Pasta remaining in hotel";
            }
            break;
        case 3:
            cout<<"Enter the burger quantity: ";
            cin>>quant;
            if(Qburger-Sburger>=quant) {
                Sburger+=quant;
                Total_burger+=quant*250;
                cout<<"\n\n\t\t"<<quant<<" burger is the order!";
            } else {
                cout<<"\n\tOnly "<<Qburger-Sburger<<" Burger remaining in hotel";
            }
            break;
        case 4:
            cout<<"Enter the noodles quantity: ";
            cin>>quant;
            if(Qnoodles-Snoodles>=quant) {
                Snoodles+=quant;
                Total_noodles+=quant*250;
                cout<<"\n\n\t\t"<<quant<<" noodles is the order!";
            } else {
                cout<<"\n\tOnly "<<Qnoodles-Snoodles<<" Noodles remaining in hotel";
            }
            break;
        case 5:
            cout<<"Enter the Shakes quantity: ";
            cin>>quant;
            if(Qshakes-Sshakes>=quant) {
                Sshakes+=quant;
                Total_shakes+=quant*250;
                cout<<"\n\n\t\t"<<quant<<" shakes is the order!";
            } else {
                cout<<"\n\tOnly "<<Qshakes-Sshakes<<" Shakes remaining in hotel";
            }
            break;
        case 6:
            cout<<"Enter the chicken-roll quantity: ";
            cin>>quant;
            if(Qchicken-Schicken>=quant) {
                Schicken+=quant;
                Total_chicken+=quant*250;
                cout<<"\n\n\t\t"<<quant<<" chicken-roll is the order!";
            } else {
                cout<<"\n\tOnly "<<Qchicken-Schicken<<" Chicken-roll remaining in hotel";
            }
            break;
        case 7:

            cout<<"\n\t\tDetails of sales and collection ";
            cout<<"\n\nNumber of rooms we had: "<<Qrooms;
            cout<<"\n\nNumber of rooms we gave for rent: "<<Srooms;
            cout<<"\n\nNumber of rooms remaining: "<<Qrooms-Srooms;
            cout<<"\n\nTotal rooms collection for the day : "<<Total_rooms;

            cout<<"\n\nNumber of Pastas we had: "<<Qpasta;
            cout<<"\n\nNumber of Pastas we sold: "<<Spasta;
            cout<<"\n\nPastas remaining: "<<Qpasta-Spasta;
            cout<<"\n\nTotal Pastas collection for the day : "<<Total_pasta;
            
            cout<<"\n\nNumber of Burger we had: "<<Qburger;
            cout<<"\n\nNumber of Burger we sold: "<<Sburger;
            cout<<"\n\nBurger remaining: "<<Qburger-Sburger;
            cout<<"\n\nTotal Burger collection for the day : "<<Total_burger;
            
            cout<<"\n\nNumber of Noodles we had: "<<Qnoodles;
            cout<<"\n\nNumber of Noodles we sold: "<<Snoodles;
            cout<<"\n\nNoodles remaining: "<<Qnoodles-Snoodles;
            cout<<"\n\nTotal Noodles collection for the day : "<<Total_noodles;
            
            cout<<"\n\nNumber of Chicken-roll we had: "<<Qchicken;
            cout<<"\n\nNumber of Chicken-roll we sold: "<<Schicken;
            cout<<"\n\nChicken-roll remaining: "<<Qchicken-Schicken;
            cout<<"\n\nTotal Chicken-roll collection for the day : "<<Total_chicken;
            
            cout<<endl<<"Total collection for the day: "<<Total_rooms+Total_pasta+Total_burger+Total_chicken+Total_noodles+Total_shakes+Total_chicken<<endl;
            break;
        case 8:
            exit(0);
        default:
            cout<<"\n Please select the numbers mentioned above!";
    }
    goto m;

    return 0;
}
