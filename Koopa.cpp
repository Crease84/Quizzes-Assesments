#include<iostream>
#include<Windows.h>
using namespace std;

class FylingKoopaTroopa {
private:
	string name;
	int xPosition;
	int yPosition;
	string direction;
	string height;
public:
	FylingKoopaTroopa(int x, int y, string lable);
	void walk();
	void print();

};

int main() {

	//FylingKoopaTroopa g1;
	//FylingKoopaTroopa g2;
	//g1.setPostion(300, 200);

	FylingKoopaTroopa Cryptid(300, 800, "a Criptid"); //instantiate Cool and Quirky Koopas
	FylingKoopaTroopa Kat(10, 200, "Kat");
	//LOOP------------
	while (1) {//game loop
		//physics engine!
		Cryptid.walk();
		Kat.walk();
		//"render" section
		Cryptid.print();
		Kat.print();
		//"render" section
		Sleep(160);
		system("CLS");
	}

}

FylingKoopaTroopa::FylingKoopaTroopa(int x, int y, string lable) {
	xPosition = x;
	yPosition = y;
	direction = "left";
	height = "up";
	name = lable;
}

void FylingKoopaTroopa::walk() {
	if (direction == "left")
		xPosition -= 10;
	if (xPosition <= 0)
		direction = "right";

	if (direction == "right")
		xPosition += 10;
	if (xPosition >= 800)
		direction = "left";

	if (height == "up")
		yPosition += 20;
	if (yPosition > 800)
		height = "down";

	if (height == "down")
		yPosition -= 20;
	if (yPosition < 400)
		height = "up";
}

void FylingKoopaTroopa::print() {

	cout << "Hi, I'm " << name << " koopa and I'm at " << "x =" << xPosition << " and y=" << yPosition << " And im moving " << direction << " and " << height << endl;

	if (direction == "left") {
		cout << char(17);
	}
	else {
		cout << char(16);
	}
	if (height == "up") {
		cout << char(30);
	}
	else {
		cout << char(31);
	}
	cout << endl;
}
