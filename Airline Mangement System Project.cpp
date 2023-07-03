/*
****************************************************************************************************************************************
Airlines Mangement System Project



******************************************************************************************************************************************

*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void book();
void cancel();
void list();
void change();
void status2();
void search();
fstream file;   // Global file variable
string paris = "Paris > 30-05-2022 > takes off at 9:00 land at 13:30";
string  london = "London > 22-05-2022 > takes off at 17:30 lands at 23:00";
string  rome = "Rome > 24-05-2022 >  takes off at 15:45 lands at 20:15";
string  istanbul = "Istanbul > 23-05-2022 >  takes off at 14:30 lands at 17:45";
string  dubai = "Dubai > 22-05-2022 > takes off at 6:40 lands at 9:20";
string destination;

int passport;
int button ;
string first_name;
string last_name;
char email[20];	
int password;
int seat_number;
	




int main() {
	int choice;
    cout<<"\n\n\t\t *************************************************************"<<endl;
		cout<<"\n\t\t                   Welcome to YGD Airlines                  "<<endl;
	cout<<"\n\t\t   **************************************************************"<<endl;
             
             
             
	//cout << "1.Sign up" << endl;
	cout << "\n    1.Make Reservation" << endl;
	
	cout << "\n    2.Cancel Reservation" << endl;
	
	cout << "\n    3.Search Passenger" << endl; 
	
	cout << "\n    4.Change Reservation" << endl; 
	         
	cout << "\n    5.Print a list" << endl;  
	      
	cout << "\n    6.Print status report" << endl;
	
	cout << "\n    7.Quit" << endl;
	cout << "Please choose a number:" << endl;
	cin >> choice ;
	switch(choice){
		case 1 : book();  break ;
        case 2 : cancel();break ;
		case 3 : search();break ;
		case 4 : change();break ;
		case 5 : list();break ;
		case 6 : status2();break ;
		case 7 : exit(1);break ;

		
	}

	
	return 0;
}
void book(){
 
	int button;
string paris = "Paris > 30-05-2022 > takes off at 9:00 land at 13:30";
string  london = "London > 22-05-2022 > takes off at 17:30 lands at 23:00";
string  rome = "Rome > 24-05-2022 >  takes off at 15:45 lands at 20:15";
string  istanbul = "Istanbul > 23-05-2022 >  takes off at 14:30 lands at 17:45";
string  dubai = "Dubai > 22-05-2022 > takes off at 6:40 lands at 9:20";
	
	
	int password_new;

	int flight_number;

	file.open("passenger.txt",ios::app); //write
	cout << "..............Sign up............" << endl;
	cout << "\n" << endl;
	cout << "Please enter your email : " << endl;
	cin >> email ;
	cout << "\n" << endl;
	cout << "Please enter your first name : " << endl;
	cin >> first_name ;
	cout << "\n" << endl;
	cout << "Please enter your last name : " << endl;
	cin >> last_name ;
	cout << "\n" << endl;
	cout << "Please enter a password : " << endl;
	cin >> password ;
	cout << "\n" << endl;
	cout << "verify your password : " << endl;
	cin >> password_new ;
	cout << "\n" << endl;

	if(password == password_new)         
	{
		cout << "Please enter your passport number: " << endl;
	    cin >> passport;
	    cout << "These are the available flights right now :\n" << "Paris > 30-05-2022 > takes off at 9:00 land at 13:30 (number of the flight is 1)\n"
	    << "London > 22-05-2022 > takes off at 17:30 lands at 23:00 (number of the flight is 2)\n" << "Rome > 24-05-2022 >  takes off at 15:45 lands at 20:15 (number of the flight is 3)\n"
	    << "Istanbul > 23-05-2022 >  takes off at 14:30 lands at 17:45 (number of the flight is 4)\n" <<"Dubai > 22-05-2022 > takes off at 6:40 lands at 9:20 (number of the flight is 5)\n";
	    cout << "Please enter the flight number you want to book : " << endl;
	    cin >> flight_number ;
	    switch(flight_number){
	    	case 1: destination = paris ; break;
	    	case 2: destination = london ; break;
	    	case 3: destination = rome ; break;
	    	case 4: destination = istanbul ; break;
	    	case 5: destination = dubai ; break;
	    default :
	    	cout << "You entered a wrong flight number, please try again.";}
	    	cout << "\n" << endl;
		
	    cout << "Please enter your seat number : " << endl;
	    cin >> seat_number ;
	    cout << "\n" << endl;
	    cout << "Your flight has been booked" << endl;
	    cout << "\n" << endl;
	}
	else {
		cout << "Sorry your passwords don't match, try again " << endl;
		cout << "\n" << endl;
	}
	


	if(file.is_open()){
		file << "The email :" << email <<"\n";
		file << "The password :\n" << password<<"\n";
		file << "Name of the passenger :\n" <<first_name << " " << last_name <<"\n";
		file << "The destination info :\n" << destination <<"\n";
		file << "The passport number :\n" << passport<<"\n";
		file << "The seat number is :\n" << seat_number<<"\n";
		file.close();
	}
	cout << "To return to the main menu press 1 " << endl;
	cin >> button ;
	if(button == 1){
		main();
	}
	else {
		"Error";
	}
	
	
}


void list(){                                    // read mode
	cout << " This is the flight's list :\n" << endl;
	file.open("passenger.txt", ios::in);
	string line;
	while(getline(file, line)){
		cout << line << endl;
	}
	file.close();
	
		cout << "To return to the main menu press 1 " << endl;
		cout << "\n" << endl;
	cin >> button ;
	if(button == 1){
		main();
	}
	else {
		"Error";
	}
		
	}



	
void cancel()
{ int num=1;
int password2;
int passport_number ;
	cout << "In order to cancel your reservation please enter passport number :" << endl;
	cin >> passport_number ;
	cout << "\n" << endl;
	cout << "Please enter your password :" << endl; \
	cin >> password2 ;
	if(passport_number == passport && password2==password){

file.open("passenger.txt",ios::app);
if(file.is_open()){
	file << "This flight has been cancelled " << endl ;    
	file.close(); 
	cout << "Your flight has been cancelled " << endl ;       
}}
else {
	
	cout<<"You entered a wrong passport number or password please try again"<<endl ;
	cout << "\n" << endl;
	cancel();
	
}
	cout << "To return to the main menu press 1" << endl;
	cin >> button ;
	cout << "\n" << endl;
	if(button == 1){
		main();
	}
	else {
		"Error";
	}

}


void change()
{
	int password2;
	int passport_number;
	file.open("passenger.txt",ios::app);
	cout<<"In order to change your reservation please enter your passport number" << endl;
	cin >> passport_number ;
	cout << "\n" << endl;
	cout << "Please enter your password :" << endl; \
	cin >> password2 ;
	cout << "\n" << endl;
	if(passport_number == passport && password2 == password)
	{
	
	//	book();
			//file.open("passenger.txt",ios::app);
	
	int password_new;

	int flight_number;


	cout << "..............Sign up............" << endl;
	cout << "\n" << endl;
	cout << "Please enter your email : " << endl;
	cin >> email ;
	cout << "\n" << endl;
	cout << "Please enter your first name : " << endl;
	cin >> first_name ;
	cout << "\n" << endl;
	cout << "Please enter your last name : " << endl;
	cin >> last_name ;
	cout << "\n" << endl;
	cout << "Please enter a password : " << endl;
	cin >> password ;
	cout << "\n" << endl;
	cout << "verify your password : " << endl;
	cin >> password_new ;
	cout << "\n" << endl;

	if(password == password_new)         
	{
		cout << "Please enter your passport number: " << endl;
	    cin >> passport;
	    cout << "These are the available flights right now :\n" << "Paris > 30-05-2022 > takes off at 9:00 land at 13:30 (number of the flight is 1)\n"
	    << "London > 22-05-2022 > takes off at 17:30 lands at 23:00 (number of the flight is 2)\n" << "Rome > 24-05-2022 >  takes off at 15:45 lands at 20:15 (number of the flight is 3)\n"
	    << "Istanbul > 23-05-2022 >  takes off at 14:30 lands at 17:45 (number of the flight is 4)\n" <<"Dubai > 22-05-2022 > takes off at 6:40 lands at 9:20 (number of the flight is 5)\n";
	    cout << "Please enter the flight number you want to book : " << endl;
	    cin >> flight_number ;
	    switch(flight_number){
	    	case 1: destination = paris ; break;
	    	case 2: destination = london ; break;
	    	case 3: destination = rome ; break;
	    	case 4: destination = istanbul ; break;
	    	case 5: destination = dubai ; break;
	    default :
	    	cout << "You entered a wrong flight number, please try again.";}
	    	cout << "\n" << endl;
		
	    cout << "Please enter your seat number : " << endl;
	    cin >> seat_number ;
	    cout << "\n" << endl;
	    //cout << "Your flight has been booked" << endl;
	    //cout << "\n" << endl;
	}
	else {
		cout << "Sorry your passwords don't match, try again " << endl;
		cout << "\n" << endl;
	}
	


	if(file.is_open()){
		file << "The email :" << email <<"\n";
		file << "The password :\n" << password<<"\n";
		file << "Name of the passenger :\n" <<first_name << " " << last_name <<"\n";
		file << "The destination info :\n" << destination <<"\n";
		file << "The passport number :\n" << passport<<"\n";
		file << "The seat number is :\n" << seat_number<<"\n";
		file<<"This  flight has been changed  " <<endl;
		
	}
 	//file<<"this  flight has been changed  " <<endl;
 	cout << "Your flight has been changed" << endl;
	cout << "\n" << endl;
 	
 	

 
	}

	

file.close();
	cout << "To return to the main menu press 1 " << endl;
	cin >> button ;
	cout << "\n" << endl;
	if(button == 1){
		main();
	}
	else {
		"Error";
	}

}

void status2(){
	
	int password2;
	int passport_number;

	
	cout << "Please enter your passport number: "<<endl;
	cin >> passport_number ;
	cout << "\n" << endl;
	cout << "Please enter your password :" << endl; \
	cin >> password2 ;
	cout << "\n" << endl;
	if(passport_number == passport && password2 == password){
		cout << "These are your information : " << endl;
		cout << "\n" << endl;
		cout << "Your full name: "<< first_name << " " << last_name<< endl;
		cout << "\n" << endl;
		cout << "Your Passport number :"<< passport << endl;
		cout << "\n" << endl;
		cout << "Your destination " << destination << endl;
		cout << "\n" << endl;
		cout << "Your seat number "<< seat_number << endl;
		cout << "\n" << endl;
		
		
	}
	else{
		cout << "Couldn't find your password number, Please try again"<<endl;
		cout << "\n" << endl;
	}
}
void search(){
	int password2;
	int pass;
	cout<< "Enter your passport number :"<<endl;
	cin >> pass;
	cout << "\n" << endl;
	cout << "Please enter your password :" << endl; \
	cin >> password2 ;
	cout << "\n" << endl;
	if(pass == passport && password == password){
		cout << "These are your information : " << endl;
		cout << "\n" << endl;
		cout << "Your full name: "<< first_name << " " << last_name<< endl;
		cout << "\n" << endl;
		cout << "Your Passport number :"<< passport << endl;
		cout << "\n" << endl;
		cout << "Your destination: " << destination << endl;
		cout << "\n" << endl;
		cout << "Your seat number: "<< seat_number << endl;
		cout << "\n" << endl;
		
	}
	else
	{
	   cout<<"you dont have any reservation"<<endl;	
	   cout << "\n" << endl;
	}
	
		cout << "To return to the main menu press 1 " << endl;
	cin >> button ;
	cout << "\n" << endl;
	if(button == 1){
		main();
	}
	else {
		"Error";
	}
	
	
}
