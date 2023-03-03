#include <iostream>
#include <fstream>
#include <direct.h>
using namespace std;
#include "DBMS.h"


DBMS::~DBMS() {

}

DBMS::DBMS() {

}

DBMS::DBMS(string name) {
	DBMS_name = name;
	string folderPath = "D:\Development\DBSM\DBMS_sdnu\Define_and_save_the_structure_of_the_data_table";
	
	string command;
	command = "mkdir " + DBMS_name;
	system(command.c_str());
	cout << "创建成功! " << endl;
}