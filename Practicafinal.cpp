// Practicafinal.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>

using namespace std;
const unsigned CAPACITY = 1000;
//struct that store information about an app
struct App {
	unsigned Id_app;
	string type;
	unsigned date;
	unsigned downloads;
};
//declared an vector os type App
typedef App infoApps[CAPACITY];

//struct info about an vector
struct Vector_apps {
	infoApps apps;
	unsigned curren_size;
};

void read_file(ifstream &in_file, Vector_apps &vector_apps) {


}

int main()
{
	//added aome changes
    return 0;
}

