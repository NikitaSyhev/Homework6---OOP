//Этот проект создан с помощью классического шаблона
#include <iostream>
#include "Car.h"
#include <string>

bool race(std::string track, Car Auto, Motorcycle Moto) {
	int distance = 50;

	if (track == "Auto") {
		double AutoSpeed = 1.1 * Auto.getAverageSpeed();
		double MotorSpeed = 0.95 * Moto.getAverageSpeedM();

		if (distance / AutoSpeed < distance / MotorSpeed) {
			
			return 0;
		}
		else
			
		return 1;
		
	}

	if (track == "Moto") {
		double AutoSpeed = 0.95 * Auto.getAverageSpeed();
		double MotorSpeed = 1.2 * Moto.getAverageSpeedM();

		if (distance / AutoSpeed < distance / MotorSpeed) {
			
			return 0;
		}
		else
		
		return 1;
	}
}









int main() {
	setlocale(LC_ALL, "Russian");

	std::string AutoTrack, MotorTrack;
	AutoTrack = "Auto";
	MotorTrack = "Moto";
	



	Car racer1(180, 50, "Ring");

	std::cout << "Время, затраченное гонщиком номер 1 на автомобиле на стандартной трассе 100 км.: " << racer1.RaceTime(180, 100) << "часа.\n";

	Motorcycle racer2(190, 50, "Ring");

	std::cout << "Время, затраченное гонщиком номер 2 на мотоцикле на стандартной трассе 100 км.: " << 
		racer2.RaceTimeM(190, 100) <<  "часа.\n";


	std::cout << "Гонка номер 1. Проходит на автомобильной трассе: (где 0 - автомобиль, 1 - мотоцикл): \n";
	std::cout << "Победитель: " << race("Auto", racer1, racer2) << std::endl;
	
	std::cout << "Гонка номер 2. Проходит на мотоциклетной трассе: (где 0 - автомобиль, 1 - мотоцикл): \n";
	std::cout << "Победитель: " << race("Moto", racer1, racer2) << std::endl;



	return 0;
}