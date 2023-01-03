//���� ������ ������ � ������� ������������� �������
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

	std::cout << "�����, ����������� �������� ����� 1 �� ���������� �� ����������� ������ 100 ��.: " << racer1.RaceTime(180, 100) << "����.\n";

	Motorcycle racer2(190, 50, "Ring");

	std::cout << "�����, ����������� �������� ����� 2 �� ��������� �� ����������� ������ 100 ��.: " << 
		racer2.RaceTimeM(190, 100) <<  "����.\n";


	std::cout << "����� ����� 1. �������� �� ������������� ������: (��� 0 - ����������, 1 - ��������): \n";
	std::cout << "����������: " << race("Auto", racer1, racer2) << std::endl;
	
	std::cout << "����� ����� 2. �������� �� ������������� ������: (��� 0 - ����������, 1 - ��������): \n";
	std::cout << "����������: " << race("Moto", racer1, racer2) << std::endl;



	return 0;
}