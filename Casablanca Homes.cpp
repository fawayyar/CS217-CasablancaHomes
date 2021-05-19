#include<iostream>
#include<conio.h>
#include<windows.h>
#include<iomanip>
using namespace std;
class agency {
	string name;
public:
	agency() {
		cout << "Enter your name : ";
		cin >> name;
	}
	void meeting() {
		cout << "Meet the landlord to finalise your booking " << endl;
	}
};
class buy :virtual public agency {
	int type;
	string meet;
	string location;
	int area, rooms;
	int price;
public:
	buy() {
		cout<<"---------------------------------------------------"<< endl;
		cout << "What do you want to buy? : " << endl << "1.Plot" << endl << "2.Bungalow" << endl << "3.Apartment" << endl;
		cin >> type;
		if (type == 1) {
			cout << "---Enter the location where you want the plot in Defence from phase 1 to phase 4 ---" << endl;
			cin >> location;
			if (location == "phase1") {
				cout << "Enter the area of plot in yards : " << "150 square yards, 500 square yards or 1000 square yards" << endl;
				cin >> area;
				if (area == 150) {
					cout << "1 plot avaialble " << endl;
					price = 15000000;
					cout << "price is :Rs" << price << endl;
					cout << "Do you want to meet the landlord?" << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us" << endl;
					}
				}
				else if (area == 500) {
					cout << "1 plot available " << endl;
					price = 30000000;
					cout << "price is :Rs" << price << endl;
					cout << "Do you want to meet the landlord? " << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us " << endl;
					}
				}
				else if (area == 1000) {
					cout << "No plots are currently available of this size" << endl;
				}
				else {
					cout << "Error";
				}
			}
			else if (location == "phase2") {
				cout << "Enter the area of the plot in yards " << "150 square yards, 500 square yards or 1000 square yards" << endl;
				cin >> area;
				if (area == 150) {
					cout << "1 plot available " << endl;
					price = 20000000;
					cout << "Price is :Rs " << price << endl;
					cout << "Do you want to meet the landlord ?" << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us" << endl;
					}
				}
				else if (area == 500) {
					cout << "1 plot available " << endl;
					price = 40000000;
					cout << "Price is :Rs " << price << endl;
					cout << "Do you want to meet the landlord > " << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us " << endl;
					}
				}
				else if (area == 1000) {
					cout << "1 land is available " << endl;
					price = 80000000;
					cout << "Price is : Rs" << price << endl;
					cout << "Do you want to meet the landlord ?" << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us " << endl;
					}
				}
			}
			else if (location == "phase3") {
				cout << "Enter the area of the plot in yards" << "150 square yards ,500 square yards or 1000 square yards" << endl;
				cin >> area;
				if (area == 150) {
					cout << "No land of this area is available in phase 3";
				}
				else if (area == 500) {
					cout << "1 land is available " << endl;
					price = 45000000;
					cout << "Price is : Rs" << price << endl;
					cout << "Do you want to meet the landlord? " << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us " << endl;
					}
				}
				else if (area == 1000) {
					cout << "1 land is available " << endl;
					price = 90000000;
					cout << "Price is :Rs" << price << endl;
					cout << "Do you want to meet the landlord ?" << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us" << endl;
					}
				}
				else {
					cout << "Search more options with us " << endl;
				}
			}
			else if (location == "phase4") {
				cout << "Enter the area of the plot in yards" << " 150 square yards, 500 square yards or 1000 square yards" << endl;
				cin >> area;
				if (area == 150) {
					cout << "No land of this area is available in phase 3";
				}
				else if (area == 500) {
					cout << "1 land is available " << endl;
					price = 50000000;
					cout << "Price is :Rs" << price << endl;
					cout << "Do you want to meet the landlord? " << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us " << endl;
					}
				}
				else if (area == 1000) {
					cout << "1 land is available " << endl;
					price = 10000000;
					cout << "Price is: Rs" << price << endl;
					cout << "Do you want to meet the landlord ?" << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us" << endl;
					}
				}
				else {
					cout << "Search more options with us " << endl;
				}
			}
			else {
				cout << "Only 4 phases of defence are covered by our agency " << endl;
			}
		}
		else if (type == 2) {
			cout << "---Enter the location where you want the Bungalow in Defence (from phase 1 to phase 4)---" << endl;
			cin >> location;
			if (location == "phase1") {
				cout << "Enter the area of banglow in yards : " << "150 square yards ,500 square yards or 1000 square yards" << endl;
				cin >> area;
				if (area == 150) {
					cout << "1 banglow avaialble " << endl;
					price = 5000000;
					cout << "Price is :Rs" << price << endl;
					cout << "Do you want to meet the landlord?" << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us" << endl;
					}
				}
				else if (area == 500) {
					cout << "1 banglow available " << endl;
					price = 100000000;
					cout << "Price is: Rs " << price << endl;
					cout << "Do you want to meet the landlord? " << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us " << endl;
					}
				}
				else if (area == 1000) {
					cout << "No bungalow are currently available of this size ,stay tuned to get more updates " << endl;
				}
				else {
					cout << "Error";
				}
			}
			else if (location == "phase2") {
				cout << "Enter the area of the banglow in yards " << "150 square yards, 500 square yards or 1000 square yards" << endl;
				cin >> area;
				if (area == 150) {
					cout << "1 banglow available " << endl;
					price = 50000000;
					cout << "Price is: Rs" << price << endl;
					cout << "Do you want to meet the landlord ?" << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us" << endl;
					}
				}
				else if (area == 500) {
					cout << "1 banglow available " << endl;
					price = 90000000;
					cout << "Price is: Rs" << price << endl;
					cout << "Do you want to meet the landlord > " << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us " << endl;
					}
				}
				else if (area == 1000) {
					cout << "1 banglow is available " << endl;
					price = 150000000;
					cout << "Price is :Rs" << price << endl;
					cout << "Do you want to meet the landlord ?" << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us " << endl;
					}
				}
			}
			else if (location == "phase3") {
				cout << "Enter the area of the banglow in yards" << "150 square yards, 500 square yards or 1000 square yards" << endl;
				cin >> area;
				if (area == 150) {
					cout << "No house of this area is available in phase 3";
				}
				else if (area == 500) {
					cout << "1 banglow is available " << endl;
					price = 60000000;
					cout << "Price is :Rs" << price << endl;
					cout << "Do you want to meet the landlord? " << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us " << endl;
					}
				}
				else if (area == 1000) {
					cout << "1 banglow is available " << endl;
					price = 130000000;
					cout << "Price is :Rs" << price << endl;
					cout << "Do you want to meet the landlord ?" << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us" << endl;
					}
				}
				else {
					cout << "Error" << endl;
				}
			}
			else if (location == "phase4") {
				cout << "Enter the area of the banglow in yards" << endl << "150 square yards, 500 square yards and 1000 square yards";
				cin >> area;
				if (area == 150) {
					cout << "No banglow of this area is available in phase 3";
				}
				else if (area == 500) {
					cout << "1 banglow is available " << endl;
					price = 150000000;
					cout << "Price is :Rs" << price << endl;
					cout << "Do you want to meet the landlord? " << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us " << endl;
					}
				}
				else if (area == 1000) {
					cout << "1 banglow is available " << endl;
					price = 250000000;
					cout << "Price is: Rs " << price << endl;
					cout << "Do you want to meet the landlord ?" << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us" << endl;
					}
				}
				else {
					cout << "Error " << endl;
				}
			}
			else {
				cout << "Only 4 phases of defence are covered by our agency " << endl;
			}
		}
		else if (type == 3) {
			cout << "---Enter the location where you want the apartment in Defence (from phase 1 to phase 4)---" << endl;
			cin >> location;
			if (location == "phase1") {
				cout << "Enter the number of rooms you want(from 2 to 5) : " << endl;
				cin >> rooms;
				if (rooms == 2) {
					cout << "1 apartment avaialble " << endl;
					price = 400000;
					cout << "Price is :Rs" << price << endl;
					cout << "Do you want to meet the landlord?" << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us" << endl;
					}
				}
				else if (rooms == 3) {
					cout << "1 apartment available " << endl;
					price = 6000000;
					cout << "Price is :Rs" << price << endl;
					cout << "Do you want to meet the landlord? " << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us " << endl;
					}
				}
				else if (rooms == 4) {
					cout << "No apartments are currently available of this size ,stay tuned to get more updates " << endl;
				}
				else if (rooms == 5) {
					cout << "1 apartment is available " << endl;
					price = 9000000;
					cout << "Do you want to meet the landlord?" << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us" << endl;
					}
				}
				else {
					cout << "Error";
				}
			}
			else if (location == "phase2") {
				cout << "Enter the number of rooms in the apartment(from 2 to 5)" << endl;
				cin >> rooms;
				if (rooms == 2) {
					cout << "1 apartment available " << endl;
					price = 5000000;
					cout << "The pice is: Rs" << price << endl;
					cout << "Do you want to meet the landlord ?" << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us" << endl;
					}
				}
				else if (rooms == 3) {
					cout << "1 apartment available " << endl;
					price = 6000000;
					cout << "Price is: Rs" << price << endl;
					cout << "Do you want to meet the landlord > " << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us " << endl;
					}
				}
				else if (rooms == 4) {
					cout << "1 apartment is available " << endl;
					price = 70000000;
					cout << "Price  is Rs" << price << endl;
					cout << "Do you want to meet the landlord? " << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us " << endl;
					}
				}
				else if (rooms = 5) {
					cout << "1 apartment available " << endl;
					price = 8000000;
					cout << "Price is : Rs" << price << endl;
					cout << "Do you want to meet the landlord? " << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us " << endl;
					}
				}
				else {
					cout << "Search more options with us " << endl;
				}
			}
			else if (location == "phase3") {
				cout << "Enter the number o rooms you want in the apartment(from 2 to 5)" << endl;
				cin >> rooms;
				if (rooms == 2) {
					cout << "No such apartment is available in phase 3";
				}
				else if (rooms == 3) {
					cout << "1 apartment is available " << endl;
					price = 40000000;
					cout << "Price is Rs" << price << endl;
					cout << "Do you want to meet the landlord? " << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us " << endl;
					}
				}
				else if (rooms == 4) {
					cout << "1 apartment is available " << endl;
					price = 50000000;
					cout << "Price of the apartment is Rs " << price << endl;
					cout << "Do you want to meet the landlord? " << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us " << endl;
					}
				}
				else if (rooms = 5) {
					cout << "1 apartment is available " << endl;
					price = 6000000;
					cout << "Price is Rs " << price << endl;
					cout << "Do you want to meet the landlord? " << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us " << endl;
					}
				}
				else {
					cout << "Error" << endl;
				}
			}
			else if (location == "phase4") {
				cout << "Enter the number of rooms you want in the apartment (from 2 to 5)" << endl;
				cin >> rooms;
				if (rooms == 2) {
					cout << "No apartment is available in phase 3";
				}
				else if (rooms == 3) {
					cout << "1 apartment is available " << endl;
					price == 30000000;
					cout << "Price is Rs " << price << endl;
					cout << "Do you want to meet the landlord? " << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us " << endl;
					}
				}
				else if (rooms == 4) {
					cout << "1 apartment is available " << endl;
					price == 4000000;
					cout << "Price is Rs " << price << endl;
					cout << "Do you want to meet the landlord? " << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us " << endl;
					}
				}
				else if (rooms == 5) {
					cout << "1 apartment is available " << endl;
					price = 35000000;
					cout << "Price is Rs " << price << endl;
					cout << "Do you want to meet the landlord? " << endl;
					cin >> meet;
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us " << endl;
					}
				}
				else {
					cout << "Error " << endl;
				}
			}
			else {
				cout << "Only 4 phases of defence are covered by our agency " << endl;
			}
		}
	}
	void meeting() {
		int days;
		cout << "In how many days do you want the meeting to be scheduled?" << endl;
		cin >> days;
		cout << "Meeting is arranged in " << days << " days ,visit our main office at 2 pm sharp. " << endl;
		cout<<"THANKYOU FOR VISITING US ";
		}
};
class sell :virtual public agency{
	int type;
	string meet;
	string location;
	int area;
	int room;
	int day;
	double price;
public:
	void meeting() {
		cout << "In how many days you want to schedule your meeting?" << endl;
		cin >> day;
		cout << "Your meeting is schedule after ";
		cout << day;
		cout << " days kindly visit our office for futher details..." << endl;
	}
	sell()
	{
		cout<<"----------------------------------------------"<< endl;
		cout << "You have the option to sell : " << endl;
		cout << "1.plot" << endl;
		cout << "2.home" << endl;
		cout << "3.apartment" << endl;
		cin >> type;
		if (type == 1) {
			{	cout << "Enter the location where you want to sell the plot" << endl;
			cin >> location; }
			if (location == "phase1")
			{
				{ cout << "Enter the area of plot in yards : " << endl;
				cin >> area; }
				if (area == 150) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent?" << endl;
						cin >> meet; }
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us" << endl;
					}
				}

				else if (area == 500) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent? " << endl;
						cin >> meet; }
					if (meet == "yes")
					{
						meeting();
					}

					else {
						cout << "Error";
					}
				}

				else if (area == 1000) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent? " << endl;
						cin >> meet; }
					if (meet == "yes")
					{
						meeting();
					}

					else {
						cout << "Error";
					}
				}
			}

			else if (location == "phase2") {
				{ cout << "Enter the area of plot in yards : " << endl;
				cin >> area; }
				if (area == 150) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent?" << endl;
						cin >> meet; }
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us" << endl;
					}
				}

				else if (area == 500) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent? " << endl;
						cin >> meet; }
					if (meet == "yes")
						meeting();

					else {
						cout << "Error";
					}
				}

				else if (area == 1000) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent? " << endl;
						cin >> meet; }
					if (meet == "yes")
						meeting();

					else {
						cout << "Error";
					}
				}
			}

			else if (location == "phase3") {
				{ cout << "Enter the area of plot in yards : " << endl;
				cin >> area; }
				if (area == 150) {
					{cout << "What is your demand" << endl;
					cin >> price;
					cout << "Price is " << price << endl;
					cout << "Do you want to meet the agent? " << endl;
					cin >> meet; }
					if (meet == "yes")
						meeting();

					else {
						cout << "Error";
					}
				}

				else if (area == 500) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent? " << endl;
						cin >> meet; }
					if (meet == "yes")
						meeting();

					else {
						cout << "Error";
					}
				}

				else if (area == 1000)
				{
					{   cout << "What is your demand" << endl;
					cin >> price;
					cout << "Price is " << price << endl;
					cout << "Do you want to meet the agent?" << endl;
					cin >> meet; }
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us" << endl;
					}
				}
			}

			else if (location == "phase4") {
				{ cout << "Enter the area of plot in yards : " << endl;
				cin >> area; }
				if (area == 150) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent?" << endl;
						cin >> meet; }
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us" << endl;
					}
				}

				else if (area == 500) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent? " << endl;
						cin >> meet; }
					if (meet == "yes")
						meeting();

					else {
						cout << "Error";
					}
				}

				else if (area == 1000) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent? " << endl;
						cin >> meet; }
					if (meet == "yes")
						meeting();

					else {
						cout << "Error";
					}
				}
			}
		}


		else if (type == 2) {
			{	cout << "Enter the location where you want to sell the home" << endl;
			cin >> location; }
			if (location == "phase1") {
				{
					cout << "Enter the area of home in yards : " << endl;
					cin >> area; }
				if (area == 150) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent?" << endl;
						cin >> meet; }
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us" << endl;
					}
				}

				else if (area == 500) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent? " << endl;
						cin >> meet; }
					if (meet == "yes")
						meeting();

					else {
						cout << "Error";
					}
				}

				else if (area == 1000) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent? " << endl;
						cin >> meet; }
					if (meet == "yes")
						meeting();

					else {
						cout << "Error";
					}
				}
			}

			else if (location == "phase2") {
				{ cout << "Enter the area of home in yards : " << endl;
				cin >> area; }
				if (area == 150) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent?" << endl;
						cin >> meet; }
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us" << endl;
					}
				}
				else if (area == 500) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent? " << endl;
						cin >> meet; }
					if (meet == "yes")
						meeting();

					else {
						cout << "Error";
					}
				}

				else if (area == 1000) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent? " << endl;
						cin >> meet; }
					if (meet == "yes")
						meeting();

					else {
						cout << "Error";
					}
				}
			}

			else if (location == "phase3") {
				{ cout << "Enter the area of home in yards : " << endl;
				cin >> area; }
				if (area == 150) {
					{cout << "What is your demand" << endl;
					cin >> price;
					cout << "Price is " << price << endl;
					cout << "Do you want to meet the agent? " << endl;
					cin >> meet; }
					if (meet == "yes")
						meeting();

					else {
						cout << "Error";
					}
				}

				else if (area == 500) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent? " << endl;
						cin >> meet; }
					if (meet == "yes")
						meeting();

					else {
						cout << "Error";
					}
				}

				else if (area == 1000)
				{
					{	cout << "What is your demand" << endl;
					cin >> price;
					cout << "Price is " << price << endl;
					cout << "Do you want to meet the agent?" << endl;
					cin >> meet; }
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us" << endl;
					}
				}
			}

			else if (location == "phase4") {
				{ cout << "Enter the area of home in yards : " << endl;
				cin >> area; }
				if (area == 150) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;;
						cout << "Do you want to meet the agent?" << endl;
						cin >> meet; }
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us" << endl;
					}
				}

				else if (area == 500) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent? " << endl;
						cin >> meet; }
					if (meet == "yes")
						meeting();

					else {
						cout << "Error";
					}
				}

				else if (area == 1000) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent? " << endl;
						cin >> meet; }
					if (meet == "yes")
						meeting();

					else {
						cout << "Error";
					}
				}
			}
		}


		else if (type == 3) {
			{cout << "Enter the location where you want to sell the apartment" << endl;
			cin >> location; }
			if (location == "phase1") {
				{
					cout << "Enter the number of rooms : " << endl;
					cin >> room; }
				if (room == 2) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent?" << endl;
						cin >> meet; }
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us" << endl;
					}
				}

				else if (room == 3) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent? " << endl;
						cin >> meet; }
					if (meet == "yes")
						meeting();

					else {
						cout << "Error";
					}
				}


				else if (room == 5) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent? " << endl;
						cin >> meet; }
					if (meet == "yes")
						meeting();

					else {
						cout << "Error";
					}
				}
			}

			else if (location == "phase2") {
				{ cout << "Enter the number of rooms you want : " << endl;
				cin >> room; }
				if (room == 2) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent?" << endl;
						cin >> meet; }
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us" << endl;

					}
				}
				else if (area == 3) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent? " << endl;
						cin >> meet; }
					if (meet == "yes")
						meeting();

					else {
						cout << "Error";
					}
				}

				else if (room == 5) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent? " << endl;
						cin >> meet; }
					if (meet == "yes")
						meeting();

					else {
						cout << "Error";
					}
				}
			}

			else if (location == "phase3") {

				{ cout << "Enter the number of rooms you want : " << endl;
				cin >> room; }
				if (room == 2) {
					{cout << "What is your demand" << endl;
					cin >> price;
					cout << "Price is " << price << endl;
					cout << "Do you want to meet the agent? " << endl;
					cin >> meet; }
					if (meet == "yes")
						meeting();

					else {
						cout << "Error";
					}
				}

				else if (room == 3) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent? " << endl;
						cin >> meet; }
					if (meet == "yes")
						meeting();

					else {
						cout << "Error";
					}
				}

				else if (room == 5) {
					{ cout << "What is your demand" << endl;
					cin >> price;
					cout << "Price is " << price << endl;
					cout << "Do you want to meet the agent?" << endl;
					cin >> meet; }
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us" << endl;
					}
				}
			}

			else if (location == "phase4") {
				{ cout << "Enter the number of rooms you want : " << endl;
				cin >> room; }
				if (room == 2) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent?" << endl;
						cin >> meet; }
					if (meet == "yes") {
						meeting();
					}
					else {
						cout << "Search more options with us" << endl;

					}
				}
				else if (room == 3) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent? " << endl;
						cin >> meet; }
					if (meet == "yes")
						meeting();

					else {
						cout << "Error";
					}
				}

				else if (room == 5) {
					{
						cout << "What is your demand" << endl;
						cin >> price;
						cout << "Price is " << price << endl;
						cout << "Do you want to meet the agent? " << endl;
						cin >> meet; }
					if (meet == "yes")
						meeting();

					else {
						cout << "Error";
					}
				}
			}
	}
	}
};
class rent:virtual public agency
{
	int type;
	bool meet;
	string location;
	int area;
	int rooms;
	string day;
	double price;
	public:
		void meeting()
		{
			cout << "----------------------------------------------------------------------";
			cout << "\nOn which day would you like to schedule a meeting with the owner: ";
			cin >> day;
			cout << "Your meeting is scheduled on " << day << " with the owner.";
			cout << "\n\n";
			cout << "THANKYOU FOR VISITING US. HAVE A NICE DAY!";
		}
		void nomeeting()
		{
			cout<< "Explore more on our website.";
		}

	rent()
	{
		cout << "\nDear Customer, Make a selection for what would you like to rent: " << endl;
		cout << "1. Apartment\n2. Bungalow\n";
		cin >> type;
		cout << "----------------------------------------------------------------------------------------";
		if (type == 1)
		{
			{
				cout << "\nEnter DHA Phase for your Apartment (1,2,3,4)." << endl;
				cin >> location;
			}

			if (location == "phase1")
			{
				{
					cout << "How many rooms would you like?\n 2\n 3\n 5\n";
					cin >> rooms;
				}

				if (rooms == 2)
				{
					cout << "How much rent would you like to pay? (Available price range: 10000 to 15000 PKR)" << endl;
					cin >> price;

					if (price >= 10000 && price <= 15000)
					{
						cout << "Do you want to meet the agent? (If yes, press 1 & if no, press 0)" << endl;
						cin >> meet;
						if (meet == 1)
					{
						meeting();
					}
					else if (meet == 0)
					{
					    nomeeting();
					}
					
					}
					else 
					{
						cout<< "Invalid entry.";
					}

					
				}
				else if (rooms == 3)
				{
					cout << "How much rent would you like to pay? (Available price range: 15000 to 30000 PKR)" << endl;
					cin >> price;

					if (price >= 15000 && price <= 30000)
					{
						cout << "Do you want to meet the agent? (If yes, press 1 & if no, press 0)" << endl;
						cin >> meet;
						if (meet == 1)
					{
						meeting();
					}
					else if (meet == 0)
					{
						nomeeting();
					}
						
					}
                    else 
					{
						cout<<"Invalid entry.";
					}
				
				}
			
				else if (rooms == 5)
				{
					cout << "How much rent would you like to pay? (Available price range: 30000 to 50000 PKR)" << endl;
					cin >> price;

					if (price >= 30000 && price <= 50000)
					{
						cout << "Do you want to meet the agent? (If yes, press 1 & if no, press 0)" << endl;
						cin >> meet;
						if (meet == 1)
					{
						meeting();
					}
					else if (meet == 0)
					{
						nomeeting();
					}
					
					}
					else
					{
						cout<<"Invalid entry.";
					}

					
				}
			}
			else if (location == "phase2")
			{
				{
					cout << "How many rooms would you like?\n 2\n 3\n 5\n";
					cin >> rooms;
				}

				if (rooms == 2)
				{
					cout << "How much rent would you like to pay? (Available price range: 15000 to 20000 PKR)" << endl;
					cin >> price;

					if (price >= 15000 && price <= 20000)
					{
						cout << "Do you want to meet the agent? (If yes, press 1 & if no, press 0)" << endl;
						cin >> meet;
						if (meet == 1)
					{
						meeting();
					}
					else if (meet == 0)
					{
						nomeeting();
					}
					
					}
					else
					{
						cout<<"Invalid entry.";
					}

					
				}
				else if (rooms == 3)
				{
					cout << "How much rent would you like to pay? (Available price range: 25000 to 35000 PKR)" << endl;
					cin >> price;

					if (price >= 25000 && price <= 35000)
					{
						cout << "Do you want to meet the agent? (If yes, press 1 &if no, press 0)" << endl;
						cin >> meet;
						if (meet == 1)
					{
						meeting();
					}
					else if (meet == 0)
					{
						nomeeting();
					}
					
					}
					else
					{
						cout<<"Invalid entry.";
					}

					
				}
				else if (rooms == 5)
				{
					cout << "How much rent would you like to pay? (Available price range: 35000 to 50000 PKR)" << endl;
					cin >> price;

					if (price >= 35000 && price <= 50000)
					{
					    cout << "Sorry! No Apartment found." << endl;

					}
					
					else 
					{
							nomeeting();
					}
				}
			}
				else if (location == "phase4")
				{
					{
						cout << "How many rooms would you like?\n 2\n 3\n 5\n";
						cin >> rooms;
					}

					if (rooms == 2)
					{
						cout << "How much rent would you like to pay? (Available price range: 10000 to 15000 PKR)" << endl;
						cin >> price;

						if (price >= 10000 && price <= 15000)
						{
							cout << "Do you want to meet the agent? (If yes, press 1 & if no, press 0)" << endl;
							cin >> meet;
							if (meet == 1)
						{
							meeting();
						}
						else if (meet == 0)
						{
							nomeeting();
						}
						}
						else
						{
							cout<<"Invalid entry.";
						}

						
					}
					else if (rooms == 3)
					{
						cout << "How much rent would you like to pay? (Available price range: 20000 to 35000 PKR)" << endl;
						cin >> price;

						if (price >= 20000 && price <= 35000)
						{
							cout << "Do you want to meet the agent? (If yes, press 1 & if no, press 0)" << endl;
							cin >> meet;
							if (meet == 1)
						{
							meeting();
						}
						else if (meet == 0)
						{
							nomeeting();
						}
						}
						else
						{
							cout<<"Invalid entry.";
						}

						
					}
					else if (rooms == 5)
					{
						cout << "How much rent would you like to pay? (Available price range: 35000 to 50000 PKR)" << endl;
						cin >> price;

						if (price >= 35000 && price <= 50000)
						{
							cout << "Do you want to meet the agent? (If yes, press 1 &if no, press 0)" << endl;
							cin >> meet;
							if (meet == 1)
						{
							meeting();
						}
						else if (meet == 0)
						{
							nomeeting();
						}
						}
						else
						{
							cout<<"Invalid entry.";
						}

						
					}
				}
				else if (location == "phase4")
				{
					{
						cout << "How many rooms would you like?\n 2\n 3\n 5\n";
						cin >> rooms;
					}

					if (rooms == 2)
					{
						cout << "How much rent would you like to pay? (Available price range: 20000 to 30000 PKR)" << endl;
						cin >> price;

						if (price >= 20000 && price <= 30000)
						{
							    cout << "Sorry! No Apartment found." << endl;

					    }
					
					    else 
					    {
							nomeeting();
					    }
					}
						else if (rooms == 3)
						{
							cout << "How much rent would you like to pay? (Available price range: 40000 to 50000 PKR)" << endl;
							cin >> price;

							if (price >= 40000 && price <= 50000)
							{
								cout << "Do you want to meet the agent? (If yes, press 1 & if no, press 0)" << endl;
								cin >> meet;
									if (meet == 1)
							{
								meeting();
							}
							else if (meet == 0)
							{
								nomeeting();
							}
							}
							else
							{
								cout<<"Invalid entry.";
							}

						
						}
						else if (rooms == 5)
						{
							cout << "How much rent would you like to pay? (Available price range: 50000 to 65000 PKR)" << endl;
							cin >> price;

							if (price >= 50000 && price <= 65000)
							{
								cout << "Do you want to meet the agent? (If yes, press 1 & if no, press 0)" << endl;
								cin >> meet;
								if (meet == 1)
							{
								meeting();
							}
							else if (meet == 0)
							{
								nomeeting();
							}
							}
							else
							{
								cout<<"Invalid entry.";
							}

							
						}
					
				}
			}
		
		else if (type == 2)
		{
			{
				cout << "\nEnter DHA Phase for your Bungalow. (1,2,3,4)" << endl;
				cin >> location;
			}

			if (location == "phase1")
			{
				{
					cout << "How big would you like your Bungalow to be (in yards)?\n 150 \n 500 \n 1000" << endl;
					cin >> area;

				}

				if (area == 150)
				{
					cout << "How much rent would you like to pay? (Available price range: 10000 to 15000 PKR)" << endl;
					cin >> price;

					if (price >= 10000 && price <= 15000)
					{
						cout << "Sorry! No Bungalow found. " << endl;
					}
					else
					{
						nomeeting();
					}
				}
				else if (area == 500)
				{
					cout << "How much rent would you like to pay? (Available price range: 45000 to 50000 PKR)" << endl;
					cin >> price;

					if (price >= 45000 && price <= 50000)
					{
						cout << "Do you want to meet the agent? (If yes, press 1 & if no, press 0)" << endl;
						cin >> meet;
						if (meet == 1)
					{
						meeting();
					}
					else if (meet == 0)
					{
						nomeeting();
					}
					}
					else
					{
						cout<<"Invalid entry.";
					}

					
				}
				else if (area == 1000)
				{
					cout << "How much rent would you like to pay? (Available price range: 60000 to 70000 PKR)" << endl;
					cin >> price;

					if (price >= 60000 && price <= 70000)
					{
						cout << "Do you want to meet the agent? (If yes, press 1 & if no, press 0)" << endl;
						cin >> meet;
						if (meet == 1)
					{
						meeting();
					}
					else if (meet == 0)
					{
						nomeeting();
					}
					}
					else
					{
						cout<<"Invalid entry.";
					}

					
				}
			}
			else if (location == "phase2")
			{
				{
					cout << "How big would you like your Bungalow to be (in yards)?\n 150 \n 500 \n 1000 " << endl;
					cin >> area;

				}

				if (area == 150)
				{
					cout << "How much rent would you like to pay? (Available price range: 20000 to 25000 PKR)" << endl;
					cin >> price;

					if (price >= 20000 && price <= 25000)
					{
						cout << "Do you want to meet the agent? (If yes, press 1 & if no, press 0)" << endl;
						cin >> meet;
						if (meet == 1)
					{
						meeting();
					}
					else if (meet == 0)
					{
						nomeeting();
					}
					}
					else
					{
						cout<<"Invalid entry.";
					}

					
				}
				else if (area == 500)
				{
					cout << "How much rent would you like to pay? (Available price range: 35000 to 45000 PKR)" << endl;
					cin >> price;

					if (price >= 35000 && price <= 45000)
					{
						cout << "Do you want to meet the agent? (If yes, press 1 & if no, press 0)" << endl;
						cin >> meet;
						if (meet == 1)
					{
						meeting();
					}
					else if (meet == 0)
					{
						nomeeting();
					}
					}
					else
					{
						cout<<"Invalid entry.";
					}

					
				}
				else if (area == 1000)
				{
					cout << "How much rent would you like to pay? (Available price range: 35000 to 50000 PKR)" << endl;
					cin >> price;

					if (price >= 35000 && price <= 50000)
					{
						cout << "Sorry! No Bungalow found." << endl;

					}
					else
					{
						nomeeting();
					}
				} 
			}
				else if (location == "phase3")
				{
					{
						cout << "How big would you like your Bungalow to be (in yards)?\n 150 \n 500 \n 1000 " << endl;
						cin >> area;

					}

					if (area == 150)
					{
						cout << "How much rent would you like to pay? (Available price range: 10000 to 20000 PKR)" << endl;
						cin >> price;

						if (price >= 10000 && price <= 20000)
						{
							cout << "Do you want to meet the agent? (If yes, press 1 & if no, press 0)" << endl;
							cin >> meet;
							if (meet == 1)
						{
							meeting();
						}
						else if (meet == 0)
						{
							nomeeting();
						}
						}
						else
						{
							cout<<"Invalid entry.";
						}

						
					}
					else if (area == 500)
					{
						cout << "How much rent would you like to pay? (Available price range: 20000 to 45000 PKR)" << endl;
						cin >> price;

						if (price >= 20000 && price <= 45000)
						{
							cout << "Sorry! No Bungalow found. " << endl;
						}
						else
						{
							nomeeting();
						}
					}
					else if (area == 1000)
					{
						cout << "How much rent would you like to pay? (Available price range: 65000 to 70000 PKR)" << endl;
						cin >> price;

						if (price >= 65000 && price <= 70000)
						{
							cout << "Do you want to meet the agent? (If yes, press 1 & if no, press 0)" << endl;
							cin >> meet;
								if (meet == 1)
						{
							meeting();
						}
						else if (meet == 0)
						{
						    nomeeting();
						}
						}
						else
						{
							cout<<"Invalid entry.";
						}

					
					}
				}
				else if (location == "phase4")
				{
					{
						cout << "How big would you like your Bungalow to be (in yards)?\n 150 \n 500 \n 1000 " << endl;
						cin >> area;

					}

					if (area == 150)
					{
						cout << "How much rent would you like to pay? (Available price range: 25000 to 30000 PKR)" << endl;
						cin >> price;

						if (price >= 25000 && price <= 30000)
						{
							cout << "Sorry! No Bungalow found." << endl;

						}
						else
						{
							nomeeting();
						}
					}
						
						else if (area == 500)
						{
							cout << "How much rent would you like to pay? (Available price range: 55000 to 60000 PKR)" << endl;
							cin >> price;

							if (price >= 55000 && price <= 60000)
							{
								cout << "Do you want to meet the agent? (If yes, press 1 & if no, press 0)" << endl;
								cin >> meet;
									if (meet == 1)
							{
								meeting();
							}
							else if (meet == 0)
							{
								nomeeting();
							}
							}
							else
							{
								cout<<"Invalid entry.";
							}

						
						}
						else if (area == 1000)
						{
							cout << "How much rent would you like to pay? (Available price range: 75000 to 90000 PKR)" << endl;
							cin >> price;

							if (price >= 75000 && price <= 90000)
							{
								cout << "Do you want to meet the agent? (If yes, press 1 & if no, press 0)" << endl;
								cin >> meet;
								if (meet == 1)
							{
								meeting();
							}
							else if (meet == 0)
							{
								nomeeting();
							}
							}
							else
							{
								cout<<"Invalid entry.";
							}

							
						}
					
				}
			}
		}
};

int main() {
	int n,agent;
	    system("color 0E");
		cout << "--------------- Welcome to Casablanca Homes! -------------- " << endl<<endl;
		cout << "The agents available are:" << endl;
		
		cout << "Name-----------------ID" << endl;
		cout << "1.Fabiha Atique    20k-0369" << endl;
		cout << "2.Khizra Sabir     20k-1650" << endl;
		cout << "3.Fawayya Rafi     20k-0331" << endl;
		cout << "4.Aneeq Ahmed Khan 20k-1120" << endl;
		cout << "Select 1 agent. " << endl;
		cin >> agent;
		if (agent >= 1 && agent <= 4) {
			cout << "--- Your agent is been selected, they will guide you throughout -----  " << endl;
		}
		else {
			cout << "Error, only 4 agents are available at the moment." << endl;
		}

	cout << "Do you want to buy, sell or rent a house?\n1.Buy \n2.Sell \n3.Rent"<<endl;
	cin >> n;
	if (n == 1) {
		buy b;
	}
	else if (n == 2) {
		sell s;
	}
	else if(n == 3){
		rent r;
	}
	else {
		cout << "Error";
	}
	
	getch();
	return 0;
}


