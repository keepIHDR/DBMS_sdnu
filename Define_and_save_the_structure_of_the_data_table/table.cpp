#include "table.h"

string dataPathTable = "D:\\Development\\DBSM\\DBMS_sdnu\\Define_and_save_the_structure_of_the_data_table\\data\\";

string createTable() {
	string table_name;
	cout << "������Ҫ�����ı������: ";
	cin >> table_name;
	ofstream ofs;
	string fileName = dataPathTable + table_name + ".txt";
	ifstream ifs(fileName.c_str());
	if (!ifs.good()) {	// ���ݱ��ļ�����
		int count;
		ofs.open(dataPathTable + table_name + ".txt", ios::out);
		cout << "�������±���ֶ���: ";
		cin >> count;
		for (int i = 0; i < count; i++) {
			string temp_name;
			cout << "������� " << i + 1 << " ���ֶ���: ";
			cin >> temp_name;
			ofs << temp_name + "\t";
		}
		ofs << endl;
		ofs.close();
		cout << "�����ɹ�! " << endl;
		return fileName + "\n";
	}
	else {
		cout << "����ʧ��! " << endl;
		cout << "ʧ��ԭ��: �����Ƶ����ݱ��Ѿ�����" << endl;
		return "";
	}
}

void deleteTable() {

}