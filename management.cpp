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

    cout<<"Enter the Quantity of Items in Stock"<<endl;
    cout<<"Rooms Available: ";
    cin>>Qrooms;
    cout<<"Quantity of Pasta: ";
    cin>>Qpasta;
    cout<<"Quantity of Burger: ";
    cin>>Qburger;
    cout<<"Quantity of Noodles: ";
    cin>>Qnoodles;
    cout<<"Quantity of Shake: ";
    cin>>Qshakes;
    cout<<"Quantity of Chicken-roll: ";
    cin>>Qchicken;
    cout<<endl<<endl;
    m:
//Creating the menu for the user
    cout<<endl<<"Please select from the given menu options "<<endl;
    cout<<"1. Rooms\n2. Pasta\n3. Burger\n4. Noodles\n5. Shake\n6. Chicken-roll\n7. Information regarding sales and collection\n8. Exit"<<endl;
    cout<<"Please Enter your choice! ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"Enter the number of rooms you want: ";
            cin>>quant;
            if(Qrooms-Srooms>=quant) {
                Srooms+=quant;
                Total_rooms+=quant*1200;
                cout<<""<<quant<<" room(s) have been alloted to you!"<<endl;
            } else {
                cout<<"Only "<<Qrooms-Srooms<<" Rooms remaining in hotel"<<endl;
            }
            break;
        case 2:
            cout<<"Enter the pasta quantity: ";
            cin>>quant;
            if(Qpasta-Spasta>=quant) {
                Spasta+=quant;
                Total_pasta+=quant*250;
                cout<<""<<quant<<" pasta is the order!"<<endl;
            } else {
                cout<<"Only "<<Qpasta-Spasta<<" Pasta remaining in hotel"<<endl;
            }
            break;
        case 3:
            cout<<"Enter the burger quantity: ";
            cin>>quant;
            if(Qburger-Sburger>=quant) {
                Sburger+=quant;
                Total_burger+=quant*250;
                cout<<""<<quant<<" burger is the order!"<<endl;
            } else {
                cout<<"Only "<<Qburger-Sburger<<" Burger remaining in hotel"<<endl;
            }
            break;
        case 4:
            cout<<"Enter the noodles quantity: ";
            cin>>quant;
            if(Qnoodles-Snoodles>=quant) {
                Snoodles+=quant;
                Total_noodles+=quant*250;
                cout<<""<<quant<<" noodles is the order!"<<endl;
            } else {
                cout<<"Only "<<Qnoodles-Snoodles<<" Noodles remaining in hotel"<<endl;
            }
            break;
        case 5:
            cout<<"Enter the Shakes quantity: ";
            cin>>quant;
            if(Qshakes-Sshakes>=quant) {
                Sshakes+=quant;
                Total_shakes+=quant*250;
                cout<<""<<quant<<" shakes is the order!"<<endl;
            } else {
                cout<<"Only "<<Qshakes-Sshakes<<" Shakes remaining in hotel"<<endl;
            }
            break;
        case 6:
            cout<<"Enter the chicken-roll quantity: ";
            cin>>quant;
            if(Qchicken-Schicken>=quant) {
                Schicken+=quant;
                Total_chicken+=quant*250;
                cout<<""<<quant<<" chicken-roll is the order!"<<endl;
            } else {
                cout<<"Only "<<Qchicken-Schicken<<" Chicken-roll remaining in hotel"<<endl;
            }
            break;
        case 7:

            cout<<endl<<"Details of sales and collection "<<endl;
            cout<<"Number of rooms we had: "<<Qrooms<<endl;
            cout<<"Number of rooms we gave for rent: "<<Srooms<<endl;
            cout<<"Number of rooms remaining: "<<Qrooms-Srooms<<endl;
            cout<<"Total rooms collection for the day : "<<Total_rooms<<endl<<endl;

            cout<<"Number of Pastas we had: "<<Qpasta<<endl;
            cout<<"Number of Pastas we sold: "<<Spasta<<endl;
            cout<<"Pastas remaining: "<<Qpasta-Spasta<<endl;
            cout<<"Total Pastas collection for the day : "<<Total_pasta<<endl<<endl;
            
            cout<<"Number of Burger we had: "<<Qburger<<endl;
            cout<<"Number of Burger we sold: "<<Sburger<<endl;
            cout<<"Burger remaining: "<<Qburger-Sburger<<endl;
            cout<<"Total Burger collection for the day : "<<Total_burger<<endl<<endl;
            
            cout<<"Number of Noodles we had: "<<Qnoodles<<endl;
            cout<<"Number of Noodles we sold: "<<Snoodles<<endl;
            cout<<"Noodles remaining: "<<Qnoodles-Snoodles<<endl;
            cout<<"Total Noodles collection for the day : "<<Total_noodles<<endl<<endl;
            
            cout<<"Number of Chicken-roll we had: "<<Qchicken<<endl;
            cout<<"Number of Chicken-roll we sold: "<<Schicken<<endl;
            cout<<"Chicken-roll remaining: "<<Qchicken-Schicken<<endl;
            cout<<"Total Chicken-roll collection for the day : "<<Total_chicken<<endl<<endl;
            
            cout<<"Total collection for the day: "<<Total_rooms+Total_pasta+Total_burger+Total_chicken+Total_noodles+Total_shakes+Total_chicken<<endl;
            break;
        case 8:
            exit(0);
        default:
            cout<<" Please select the numbers mentioned above!"<<endl;
    }
    goto m;

    return 0;
}
