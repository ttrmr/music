#include <SFML/Audio.hpp>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main() {
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));

	sf::SoundBuffer winBuf;
	if (!winBuf.loadFromFile("win.OGG")) {
		return -1;
	}
	sf::Sound win; 
	win.setBuffer(winBuf);

	sf::SoundBuffer failBuf;
	if (!winBuf.loadFromFile("fail.OGG")) {
		return -1;
	}
	sf::Sound fail;
	fail.setBuffer(failBuf);
		

	int user;
	do {
		int rnd = 1 + rand() % 10;
		cout << "������� �����: ";
		cin >> user;
		if (rnd == user) {
			cout << "�� �������!" << endl;
			win.play();
		}
		else {
			cout << "�� �� �������. ���������� ����� - " << rnd << endl;
			fail.play();
		}
	} while (user != 0);
	return 0;
}