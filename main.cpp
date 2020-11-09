#include <iostream>
#include <wiringPi.h>
#include "easywsclient.hpp"
#include <assert.h>
#include <string>

//using easywsclient::WebSocket;
//static WebSocket::pointer ws = NULL;

int main() {
	//ws = WebSocket::from_url("ws://192.168.1.31:2020");
	//assert(ws);
	//ws->send("message here");



	const int btn = 4;

	wiringPiSetup();

	pinMode(btn, OUTPUT);
	pinMode(5, INPUT);
	
	while(1) {
		/* if (digitalRead(btn) == LOW) {
			std::cout << "Released" << std::endl;
		} else {
			std::cout << "Pressed" << std::endl;
			//ws->send("p");
			//std::cout << "hi" << std::endl;
		}*/

		std::cout << digitalRead(btn) << std::endl;
		delay(10);
	}

	//delete ws;

	return 0;
}