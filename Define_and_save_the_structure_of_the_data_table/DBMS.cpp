#include "DBMS.h"

string dataPath = "D:\\Development\\DBSM\\DBMS_sdnu\\Define_and_save_the_structure_of_the_data_table\\data\\";
string folderPath = "D:\\Development\\DBSM\\DBMS_sdnu\\Define_and_save_the_structure_of_the_data_table\\data\\";
string path = "D:\\Development\\DBSM\\DBMS_sdnu\\Define_and_save_the_structure_of_the_data_table\\";

// 创建数据库
void createDataBase() {
	string DBMS_name;
	cout << "请输入要创建的数据库的名称: ";
	cin >> DBMS_name;
	ofstream ofs;
	ofs.open(dataPath + DBMS_name + ".txt", ios::in);
	if (!ofs) {
		ofs.open(dataPath + DBMS_name + ".txt", ios::app);
		ofs.close();
		cout << "创建成功! " << endl;
	}
	else {
		cout << "创建失败! " << endl;
		cout << "失败原因: 该名称的数据库已经存在" << endl;
	}
}

// 使用数据库
void useDataBase() {
	string DBMS_name;
	cout << "请输入要使用的数据库的名称: ";
	cin >> DBMS_name;

}

// 删除数据库
void deleteDataBase() {
	string DBMS_name;
	cout << "请输入要删除的数据库的名称: ";
	cin >> DBMS_name;
	string tempPath = dataPath + DBMS_name + ".txt";
	if (!(remove(tempPath.c_str()))) {
		cout << "数据库删除成功!" << endl;
	}
	else{
		cout << "数据库删除失败!" << endl;
	}
}

//DBMS::DBMS(string name) {
//	DBMS_name = name;
//	string command;
//	command = "mkdir data\\" + DBMS_name;
//	if (system(command.c_str())) {
//		cout << "创建失败!" << endl;
//	}
//	else {
//		cout << "创建成功! " << endl;
//	}
//}