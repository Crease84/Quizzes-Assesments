#include<iostream>
#include<string>

using namespace std;

void calendar(int month);

int main() {
	int Choice;
	int day;
	string input;
	int room = 1;

	cout << "Select a month by number" << endl;

	cin >> Choice;
	calendar(Choice);

	system("PAUSE");

	do {

		cout << "You in DA house" << endl;
		cout << endl;

		switch (room) {
		case 1:
			cout << "Much room" << endl;
			cout << endl;
			cout << "you can go North, East, and West" << endl;

			getline(cin, input);

			if (input == "North" || input == "north" || input == "n" || input == "N")
				room = 2;
			else if (input == "East" || input == "east" || input == "e" || input == "E")
				room = 4;
			else if (input == "West" || input == "west" || input == "w" || input == "W")
				room = 3;

			system("CLS");

			break;

		case 2:

			cout << "Looks like ROOM" << endl;
			cout << endl;
			cout << "you can go South" << endl;

			getline(cin, input);

			if (input == "South" || input == "south" || input == "s" || input == "S")
				room = 1;

			system("CLS");

			break;

		case 3:

			cout << "ROOOMS" << endl;
			cout << endl;
			cout << "you can go East" << endl;

			getline(cin, input);

			if (input == "East" || input == "east" || input == "e" || input == "E")
				room = 1;

			system("CLS");

			break;

		case 4:

			cout << "So like...Theres a room" << endl;
			cout << endl;
			cout << "you can go West or South" << endl;

			getline(cin, input);

			if (input == "West" || input == "west" || input == "w" || input == "W")
				room = 1;
			else if (input == "South" || input == "south" || input == "s" || input == "S")
				room = 5;

			system("CLS");

			break;

		case 5:

			cout << "End of the line PARTNER" << endl;
			cout << endl;
			cout << "you can go North" << endl;

			getline(cin, input);

			if (input == "North" || input == "north" || input == "n" || input == "N")
				room = 4;

			system("CLS");

			break;
		}
	
	} while (input != "q");
	
	

}

void calendar(int month) {
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		cout << "That month has 31 Days" << endl;
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		cout << "That month has 30 Days" << endl;
	else if (month == 2)
		cout << "That month has 28 Days" << endl;
	else
		cout << "Not a month but K." << endl;
	
	cout << endl;

}
