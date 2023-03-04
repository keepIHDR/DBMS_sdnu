#include "table.h"

string dataPathTable = "D:\\Development\\DBSM\\DBMS_sdnu\\Define_and_save_the_structure_of_the_data_table\\data\\";

string createTable() {
	string table_name;
	cout << "请输入要创建的表的名称: ";
	cin >> table_name;
	ofstream ofs;
	string fileName = dataPathTable + table_name + ".txt";
	ifstream ifs(fileName.c_str());
	if (!ifs.good()) {	// 数据表文件存在
		int count;
		ofs.open(dataPathTable + table_name + ".txt", ios::out);
		cout << "请输入新表的字段数: ";
		cin >> count;
		for (int i = 0; i < count; i++) {
			string temp_name;
			cout << "请输入第 " << i + 1 << " 个字段名: ";
			cin >> temp_name;
			ofs << temp_name + "\t";
		}
		ofs << endl;
		ofs.close();
		cout << "创建成功! " << endl;
		return fileName + "\n";
	}
	else {
		cout << "创建失败! " << endl;
		cout << "失败原因: 该名称的数据表已经存在" << endl;
		return "";
	}
}

void deleteTable() {

}