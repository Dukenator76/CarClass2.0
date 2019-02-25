

#include "pch.h"
#include <string>
#include <iostream>
#include "Car.h"

using namespace std;


int main()
{
	Car car1;
	Car car2;
	Car car3;
	Car car4;
	car1.display();
	car2.display();
	car3 = car1 + car2; 
	car3.display();
	

	car3.pumpGas(3);
	car3.display();
	car1.display();
	car2 = car3 - car1;
	car2.display();
	car2 = car1 - car3;
	car2.display();

	for (int i = 0; i < 5; i++) {
		car1.goFast();
	}
	car1--;
	car1.display();
	--car1;
	car1.display();
	
	car4.display();
	--car4;
	car4.display();
	car4--;
	car4.display();
		


	
}

