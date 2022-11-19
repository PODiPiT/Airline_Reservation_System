//  Created by Alex on 15.11.2022.

#include <fstream>
#include <iostream>
#include <iomanip>

void mainMenu();

class Management {
	public:
		Management(){
			mainMenu();
		}
};
 
class Details{
	public:
		static std::string name, gender;
		int phoneNo, age;
		std::string add;
		static int cId;
		char arr[100];

		void information()
		{
			std::cout << "\nEnter the customer ID : " << std::endl;
			std::cin >> cId;
			std::cout << "\nEnter the name : " << std::endl;
			std::cin >> name;
			std::cout << "\nEnter the age : " << std::endl;
			std::cin >> age;
			std::cout << "\nAddress : " << std::endl;
			std::cin >> add;
			std::cout << "\nGender : " << std::endl;
			std::cin >> gender;
			std::cout << "Your details are saved with us\n" << std::endl;
		}
};

int Details::cId;
std::string Details::gender;
std::string Details::name;

class registration
{
	public:
		static int choice;
		int choice1, back;
		static float charges;

		void flights(){
			std::string flightN[] = {"Dubai", "Canada", "UK", "USA", "Australia", "Europe"};
			
			for (int a = 0; a < 6; a++)
			{
				std::cout << (a + 1) << ".flight to " << flightN[a] << std::endl;
				
			}
			
			std::cout << "\nWelcome to the Airlines!" << std::endl;
			std::cout << "Press their number of the country of which you want to book the flight : ";
			std::cin >> choice;

			switch (choice)
			{
			case 1:
				{
					std::cout << "________________Wilcome to Dubai Emirates______________\n" << std::endl;
					std::cout << "Your compfort is our priority. Enjoy the journey!" << std::endl;
					std::cout << "Following are the flights \n " << std::endl;

					std::cout << "1. DUB - 498" << std::endl;
					std::cout << "\t 08/01/2023 8:00AM 10hrs 400CAD" << std::endl;
					std::cout << "2. DUB - 409" << std::endl;
					std::cout << "\t 09/01/2023 10:00AM 12hrs 500CAD" << std::endl;
					std::cout << "3. DUB - 467" << std::endl;
					std::cout << "\t 10/01/2023 11:00AM 11hrs 530CAD" << std::endl;

					std::cout << "\nSelect the flight you want to book : " << std::endl;
					std::cin >> choice1;
					
					if (choice1 == 1) {
						charges = 400;
						std::cout << "\nYou have successfully booked the flight DUB - 498" << std::endl;
						std::cout << "\nYou can go back to menu and take the ticket" << std::endl;
					}
					else if (choice1 == 2) {
                        charges = 500;
						std::cout << "\nYou have successfully booked the flight DUB - 409" << std::endl;
						std::cout << "\nYou can go back to menu and take the ticket" << std::endl;
					}
					else if (choice1 == 3) {
						charges = 530;
						std::cout << "\nYou have successfully booked the flight DUB - 467 " << std::endl;
						std::cout << "\nYou can go back to menu and take the ticket" << std::endl;
					}
					else{
						std::cout << "Invalid input, shifting to the previous menu" << std::endl;
						flights();
					}
				
					std::cout<<"Press any key to go to Main menu : "<<std::endl;
					std::cin>>back;

					if (back == 1) {
						mainMenu();
					} else {
						mainMenu();
					}break;
			case 2:
				{
					std::cout << "\n________________Wilcome to Canadian Airlines______________\n" << std::endl;
					std::cout << "Your compfort is our priority. Enjoy the journey!" << std::endl;
					std::cout << "Following are the flights \n " << std::endl;

					std::cout << "1. CA - 198" << std::endl;
					std::cout << "\t 08/01/2023 8:00AM 2hrs 100CAD" << std::endl;
					std::cout << "2. CA - 109" << std::endl;
					std::cout << "\t 09/01/2023 10:00AM 3hrs 120CAD" << std::endl;
					std::cout << "3. CA - 167" << std::endl;
					std::cout << "\t 10/01/2023 11:00AM 3hrs 30min 160CAD" << std::endl;

					std::cout << "\nSelect the flight you want to book : " << std::endl;
					std::cin >> choice1;
					
					if (choice1 == 1) {
						charges = 100;
						std::cout << "\nYou have successfully booked the flight CA - 198" << std::endl;
						std::cout << "\nYou can go back to menu and take the ticket" << std::endl;
					}
					else if (choice1 == 2) {
                        charges = 120;
						std::cout << "\nYou have successfully booked the flight CA - 109" << std::endl;
						std::cout << "\nYou can go back to menu and take the ticket" << std::endl;
					}
					else if (choice1 == 3) {
						charges = 160;
						std::cout << "\nYou have successfully booked the flight CA - 167" << std::endl;
						std::cout << "\nYou can go back to menu and take the ticket" << std::endl;
					}
					else{
						std::cout << "Invalid input, shifting to the previous menu" << std::endl;
						flights();
					}
				
					std::cout<<"Press any key to go to Main menu : "<<std::endl;
					std::cin>>back;

					if (back == 1) {
						mainMenu();
					} else {
						mainMenu();
					}break;
			case 3:{
				std::cout << "________________Wilcome to British Airways______________\n" << std::endl;
					std::cout << "Your compfort is our priority. Enjoy the journey!" << std::endl;
					std::cout << "Following are the flights \n " << std::endl;

					std::cout << "1. UK - 098" << std::endl;
					std::cout << "\t 08/01/2023 9:00AM 13hrs 680CAD" << std::endl;

					std::cout << "\nSelect the flight you want to book : " << std::endl;
					std::cin >> choice1;
					
					if (choice1 == 1) {
						charges = 680;
						std::cout << "\nYou have successfully booked the flight UK - 098" << std::endl;
						std::cout << "\nYou can go back to menu and take the ticket" << std::endl;
					}
					
					else{
						std::cout << "Invalid input, shifting to the previous menu" << std::endl;
						flights();
					}
				
					std::cout<<"Press any key to go to Main menu : "<<std::endl;
					std::cin>>back;

					if (back == 1) {
						mainMenu();
					} else {
						mainMenu();
					}break;
			}
			case 4:
				{
					std::cout << "________________Wilcome to PanAm______________\n" << std::endl;
					std::cout << "Your compfort is our priority. Enjoy the journey!" << std::endl;
					std::cout << "Following are the flights \n " << std::endl;

					std::cout << "1. US - 698" << std::endl;
					std::cout << "\t 08/01/2023 8:00AM 2hrs 160CAD" << std::endl;
					std::cout << "2. US - 609" << std::endl;
					std::cout << "\t 09/01/2023 10:00AM 3hrs 180CAD" << std::endl;
					std::cout << "3. US - 667" << std::endl;
					std::cout << "\t 10/01/2023 11:00AM 3hrs 30min 195CAD" << std::endl;

					std::cout << "\nSelect the flight you want to book : " << std::endl;
					std::cin >> choice1;
					
					if (choice1 == 1) {
						charges = 160;
						std::cout << "\nYou have successfully booked the flight US - 698" << std::endl;
						std::cout << "\nYou can go back to menu and take the ticket" << std::endl;
					}
					else if (choice1 == 2) {
                        charges = 180;
						std::cout << "\nYou have successfully booked the flight US - 609" << std::endl;
						std::cout << "\nYou can go back to menu and take the ticket" << std::endl;
					}
					else if (choice1 == 3) {
						charges = 195;
						std::cout << "\nYou have successfully booked the flight US - 667" << std::endl;
						std::cout << "\nYou can go back to menu and take the ticket" << std::endl;
					}
					else{
						std::cout << "Invalid input, shifting to the previous menu" << std::endl;
						flights();
					}
				
					std::cout<<"Press any key to go to Main menu : "<<std::endl;
					std::cin>>back;

					if (back == 1) {
						mainMenu();
					} else {
						mainMenu();
					}break;
				}
				case 5:
				{
					std::cout << "________________Wilcome to Australian Airlines______________\n" << std::endl;
					std::cout << "Your compfort is our priority. Enjoy the journey!" << std::endl;
					std::cout << "Following are the flights \n " << std::endl;

					std::cout << "1. AU - 998" << std::endl;
					std::cout << "\t 08/01/2023 8:00AM 21hrs 1160CAD" << std::endl;
					std::cout << "2. AU - 909" << std::endl;
					std::cout << "\t 09/01/2023 10:00AM 23hrs 1180CAD" << std::endl;
					std::cout << "3. AU - 967" << std::endl;
					std::cout << "\t 10/01/2023 11:00AM 20hrs 1195CAD" << std::endl;

					std::cout << "\nSelect the flight you want to book : " << std::endl;
					std::cin >> choice1;
					
					if (choice1 == 1) {
						charges = 1160;
						std::cout << "\nYou have successfully booked the flight AU - 998" << std::endl;
						std::cout << "\nYou can go back to menu and take the ticket" << std::endl;
					}
					else if (choice1 == 2) {
                        charges = 1180;
						std::cout << "\nYou have successfully booked the flight AU - 909" << std::endl;
						std::cout << "\nYou can go back to menu and take the ticket" << std::endl;
					}
					else if (choice1 == 3) {
						charges = 1195;
						std::cout << "\nYou have successfully booked the flight AU - 967" << std::endl;
						std::cout << "\nYou can go back to menu and take the ticket" << std::endl;
					}
					else{
						std::cout << "Invalid input, shifting to the previous menu" << std::endl;
						flights();
					}
				
					std::cout<<"Press any key to go to Main menu : "<<std::endl;
					std::cin>>back;

					if (back == 1) {
						mainMenu();
					} else {
						mainMenu();
					}break;
				}
				case 6:
				{
					std::cout << "________________Wilcome to Europian Airlines______________\n" << std::endl;
					std::cout << "Your compfort is our priority. Enjoy the journey!" << std::endl;
					std::cout << "Following are the flights \n " << std::endl;

					std::cout << "1. EU - 898" << std::endl;
					std::cout << "\t 08/01/2023 8:00AM 22hrs 330CAD" << std::endl;
					std::cout << "2. EU - 809" << std::endl;
					std::cout << "\t 09/01/2023 10:00AM 23hrs 450CAD" << std::endl;
					std::cout << "3. EU - 867" << std::endl;
					std::cout << "\t 10/01/2023 11:00AM 20hrs 510CAD" << std::endl;

					std::cout << "\nSelect the flight you want to book : " << std::endl;
					std::cin >> choice1;
					
					if (choice1 == 1) {
						charges = 330;
						std::cout << "\nYou have successfully booked the flight EU - 898" << std::endl;
						std::cout << "\nYou can go back to menu and take the ticket" << std::endl;
					}
					else if (choice1 == 2) {
                        charges = 450;
						std::cout << "\nYou have successfully booked the flight EU - 809" << std::endl;
						std::cout << "\nYou can go back to menu and take the ticket" << std::endl;
					}
					else if (choice1 == 3) {
						charges = 510;
						std::cout << "\nYou have successfully booked the flight EU - 867" << std::endl;
						std::cout << "\nYou can go back to menu and take the ticket" << std::endl;
					}
					else{
						std::cout << "Invalid input, shifting to the previous menu" << std::endl;
						flights();
					}
				
					std::cout<<"Press any key to go to Main menu : "<<std::endl;
					std::cin>>back;

					if (back == 1) {
						mainMenu();
					} else {
						mainMenu();
					}break;
				}
			default:{
				std::cout << "Invalid input, shifting to the previous Main menu" << std::endl;
				mainMenu();
				break;
				}
			}

		}
}}};

float registration :: charges;
int registration::choice;

class ticket : public registration, Details{
	public:
		void Bill(){
			std::string destination = "";
			std::ofstream outf("record.txt");
			{
				outf << "_____________XYZ Airlines_____________" << std::endl;
				outf << "_____________Ticket___________________" << std::endl;
				outf << "______________________________________" << std::endl;

				outf << "Customer ID : " << Details::cId << std::endl;
				outf << "Customer Name : " << Details::name << std::endl;
				outf << "Customer Gender : " << Details::gender << std::endl;
				outf << "\tDescription" << std::endl;
				
				if (registration::choice == 1)
				{
					destination = "Dubai";
				}
				else if (registration::choice == 2)
				{
					destination = "Canada";
				}
				else if (registration::choice == 3)
				{
					destination = "UK";
				}
				else if (registration::choice == 4)
				{
					destination = "USA";
				}
				else if (registration::choice == 5)
				{
					destination = "Australia";
				}
				else if (registration::choice == 6)
				{
					destination = "Europe";
				}

				outf << "Description\t\t" <<destination<< std::endl;
				outf << "Flight cost : \t\t" <<registration::charges<< std::endl;
			}
			outf.close();
		}
		void dispBill(){
			std::ifstream ifs("record.txt");
			{
				if(!ifs){
					std::cout << "File error" << std::endl;
				}
				while (!ifs.eof())
				{
					ifs.getline(arr, 100);
					std::cout << arr << std::endl;
				}
			}
			ifs.close();
		}
};


void mainMenu()
{
	int lchoice, schoice, back;
	
	std::cout<<"\t                       XYZ Airlines  \n"<<std::endl;
	std::cout<<"\t_________________Main Menu________________"<<std::endl;
	
	std::cout<<"\t__________________________________________"<<std::endl;
	std::cout<<"\t\t\t\t\t\t|"<<std::endl;
	
	std::cout<<"\t|\tPress 1 to add the Customer Details     \t|"<<std::endl;
	std::cout<<"\t|\tPress 2 for flight registration         \t|"<<std::endl;
	std::cout<<"\t|\tPress 3 for Ticket and Charges          \t|"<<std::endl;
	std::cout<<"\t|\tPress 4 to Exit                         \t|"<<std::endl;
	std::cout<<"\t|\t\t\t\t\t|"<<std::endl;
	std::cout<<"\t__________________________________________"<<std::endl;
	std::cout<<"Enter a choice : "<<std::endl;
	std::cin>>lchoice;
	
	Details d;
	registration r;
	ticket t;
	
	switch (lchoice) {
		case 1:{
				std::cout<<"________________Customers______________\n"<<std::endl;
				d.information();
				std::cout<<"Press any key to go back to Main menu "<<std::endl;
				std::cin>>back;
				if (back == 1) 
				{
					mainMenu();
				}
				else
				{
					mainMenu();
				}
				break;
			}
		case 2:{
			std::cout<<"________Book a flight using this system_______\n"<<std::endl;
			r.flights();
			break;
		}
		case 3:{
			std::cout<<"________GET YOUR TICKET_______\n"<<std::endl;
			t.Bill();
			
			std::cout<<"Your ticket is printed, you can collect it \n"<<std::endl;
			std::cout<<"Press 1 to display your ticket "<<std::endl;
			
			std::cin>>back;
			
			if (back == 1) {
				t.dispBill();
				std::cout<<"Press any key to go to Main menu : "<<std::endl;
				std::cin>>back;
				if (back == 1) {
					mainMenu();
				} else {
					mainMenu();
				}
			} else {
				mainMenu();
			}
			break;
		}
			
		case 4:{
			std::cout<<"\n\n\t________Thank you_______\n"<<std::endl;
			break;
		}
		default:{
			std::cout<<"Invalid input, Please try again\n"<<std::endl;
			mainMenu();
			break;
		}
	}
}

int main() {
	Management Mobj;
	return 0;
}
