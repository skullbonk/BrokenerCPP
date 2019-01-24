//
//  Controller.cpp
//  BrokenerCPP
//
//  Created by Fairbanks, Reagan on 1/24/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

Controller :: Controller() //part of Controller() class
{
	this -> fancyNumber = 1337;
}

void Controller :: start()
{
	cout << "This means it works" << endl;
	cout << "This is gonna be words on my screen I hope" << endl;
	cout << fancyNumber << endl;
}
