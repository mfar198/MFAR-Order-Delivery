#include <iostream>
#include <string>
#include <conio.h>
#define Newline '\n' //A declaration for \n

using namespace std;

int main()
{
	system("COLOR 7C"); //This will make your program console turn white
	//Local Variable
	string name, address, Input, extraorder, proceed;
	int phonenumber; //Use string so that program will keep the 0XX of the customer number
	double confirmation = 0;
	double totalorder = 0, checkoutprice1 = 0, checkoutprice2 = 0;
	double checkoutprice3 = 0, checkoutprice4 = 0, totalcheckout;
	int quantity1 = 0, quantity2 = 0, quantity3 = 0, quantity4 = 0, shipping;
	double orderprice1 = 0, orderprice2 = 0, orderprice3 = 0, orderprice4 = 0;
	double shipprice1, shipprice2, shipprice3, shipprice4;
	double totalpastameat = 0, totalpizza = 0, totalnutsalad = 0;
	double totalbrocoli = 0, grandtotal = 0;
	//This section of coding is for password protection section
	char order;
	string shipdetail1, shipdetail2, shipdetail3, shipdetail4;
	int shipdetail;

	string password = "MFAR"; //You can change the password of you program here

	cout << "           .::WELCOME::.          " << endl;
	cout << "This program is protected with password." << endl;
	cout << "\nPlease enter the password: ";
	getline(cin, Input);
	cout << Newline;
	//Use If loop because there is only probably 2 outcome which If loop is more convenient
	if (Input.compare(password) != 0) //Operation if password is incorrect
	{
		system("CLS");
		cout << "ERROR! Seems the password you have entered is incorrect. ";
		cout << Newline;
		cout << Newline;
		system("pause"); //If the user input the wrong password it will pause and show press any key to continue and it will terminate
	}
	else if (Input.compare(password) != 1) //Operation if password is correct
	{
		system("CLS");
		cout << "The password you have entered is correct.\n";
		system("pause"); //Pause the system after user input the correct password
		system("CLS"); //CLS is like clear the program screen
		cout << "Please fill in your detail\n" << endl;
		cout << "Name: ";
		cin >> name;
		cout << "Address: ";
		cin >> address;
		cout << "Phone Number: ";
		cin >> phonenumber;
		system("CLS");
		//This section will menu section for user to select the menu they want
		cout << "          Welcome to MFAR Order and Delivery Program" << endl;
		cout << "       -----------------------------------------------" << endl;
		cout << Newline;
		cout << "----------------------------------------" << endl;
		cout << "|   Food Menu                 Price    |" << endl;
		cout << "| 1) Pizza                  = RM8.50   |" << endl;
		cout << "| 2) Penne Pasta & Meatball = RM12.00  |" << endl;
		cout << "| 3) Nutty Mix-Up Salad     = RM7.50   |" << endl;
		cout << "| 4) Broccoli Cheese Soup   = RM6.00   |" << endl;
		cout << "----------------------------------------" << endl;
		cout << Newline;
		while (true) //While loop is used for selecting the menu because there is more than 2 and it's more convenient to use While loop
		{
			cout << "Input the item number: ";
			cin >> order;
			if (order == '1')
			{
				cout << "You have selected item: Pizza" << endl;
				orderprice1 = 8.50; //Set the price for the item
				cout << "Quantity: ";
				cin >> quantity1;
				totalpizza = orderprice1 * quantity1; //The total price of pizza will multiply with the quantity of the user desired
			}
			else if (order == '2')
			{
				cout << "You have selected item: Penne Pasta & Meatball" << endl;
				orderprice2 = 12.00;
				cout << "Quantity: ";
				cin >> quantity2;
				totalpastameat = orderprice2 * quantity2;
			}
			else if (order == '3')
			{
				cout << "You have selected item: Nutty Mix-Up Salad selected" << endl;
				orderprice3 = 7.50;
				cout << "Quantity: ";
				cin >> quantity3;
				totalnutsalad = orderprice3 * quantity3;
			}
			else if (order == '4')
			{
				cout << "You have selected item: Broccoli Cheese Soup selected" << endl;
				orderprice4 = 6.00;
				cout << "Quantity: ";
				cin >> quantity4;
				totalbrocoli = orderprice4 * quantity4;
			}
			else if (order)
				//Else than the char 1,2,3 or 4, it will recognize as else order means it is not recognized by the system
			{
				cout << "We are sorry, but there is no item number match with your input." << endl;
			}
			cout << "Do you wish to add another order? (yes/no) : ";
			//This will allow user to add multiple order
			cin >> extraorder;
			cout << Newline;
			if (extraorder == "no")
			{
				break; //If the user input no it will break the loop
			}
		}
		system("CLS");
		//Shipping section where user were needed to choose which shipping method they want to use
		cout << "-----------------------------------------------------------------" << endl;
		cout << "|   Shipping option       Below RM 10.00    More than RM10.00   |" << endl;
		cout << "|1) Regular Shipping         RM 2.00            RM 3.00         |" << endl;
		cout << "|2) Overnight Shiping        RM 5.00            RM 5.00         |" << endl;
		cout << "-----------------------------------------------------------------" << endl;
		grandtotal = totalbrocoli + totalnutsalad + totalpastameat + totalpizza; //Don't worry, it will only total only the selected one that has been registered in switch loop
		cout << "\nYour total cart is: RM" << grandtotal << endl;
		cout << "\nPlease choose a shipping option: ";
		cin >> shipping;
		switch (shipping) //Swtich case is use for choosing the shipping method unlike the menu
		{
		case 1:
			if (grandtotal < 10) //It will determine the shipping price depends on the customer's total cart
			{
				shipprice1 = 2.00;
				checkoutprice1 = grandtotal + shipprice1;
				shipdetail1 = "RM2.00";
				break;
			}
			else if (grandtotal > 10)
			{
				shipprice2 = 3.00;
				checkoutprice2 = grandtotal + shipprice2;
				shipdetail2 = "RM3.00";
				break;
			}
		case 2:
			if (grandtotal < 10)
			{
				shipprice3 = 5.00;
				checkoutprice3 = grandtotal + shipprice3;
				shipdetail3 = "RM5.00";
				break;
			}
			else if (grandtotal > 10)
			{
				shipprice4 = 5.00;
				checkoutprice4 = grandtotal + shipprice4;
				shipdetail4 = "RM5.00";
				break;
			}
		default:
			//It will display a message when user has enter other than keyword 1 or 2 that recognized in the program
			cout << "I'm sorry but you have enter else than key 1 or 2. Try again later" << endl;
		}
		totalcheckout = checkoutprice1 + checkoutprice2 + checkoutprice3 + checkoutprice4; //It will total the selected case in switch
		system("cls");
		cout << Newline;
		//After customer has make their choose, the program will display the customers detail with the total cart
		cout << "-----------------------------------------------------------------" << endl;
		cout << "Customer Detail\n" << endl;
		cout << "Name:" << name << endl;
		cout << "\nAddress:" << address << endl;
		cout << "\nPhone Number:" << phonenumber << endl;
		cout << "-----------------------------------------------------------------" << endl;
		cout << Newline;
		cout << "\nYour total cart is: RM" << totalcheckout << endl;
		cout << "\nDo you wish to proceed and checkout? (yes/no) : ";
		cin >> proceed;
		if (proceed == "yes")
		{
			system("cls");
			cout << "\nThank you for using our service. Your item will delivered within 3 working days" << endl;;
		}
		else
		{
			system("cls");
			cout << "\nWe are very sorry for any inconvenient with our service. Hope to you again soon..." << endl;
		}
		system("pause");
		return 0;
	}
}

