#include "DBMS.h"

string dataPath = "D:\\Development\\DBSM\\DBMS_sdnu\\Define_and_save_the_structure_of_the_data_table\\data\\";
string folderPath = "D:\\Development\\DBSM\\DBMS_sdnu\\Define_and_save_the_structure_of_the_data_table\\data\\";
string path = "D:\\Development\\DBSM\\DBMS_sdnu\\Define_and_save_the_structure_of_the_data_table\\";

// �������ݿ�
void createDataBase() {
	string DBMS_name;
	cout << "������Ҫ���������ݿ������: ";
	cin >> DBMS_name;
	ofstream ofs;
	ofs.open(dataPath + DBMS_name + ".txt", ios::in);
	if (!ofs) {
		ofs.open(dataPath + DBMS_name + ".txt", ios::app);
		ofs.close();
		cout << "�����ɹ�! " << endl;
	}
	else {
		cout << "����ʧ��! " << endl;
		cout << "ʧ��ԭ��: �����Ƶ����ݿ��Ѿ�����" << endl;
	}
}

// ʹ�����ݿ�
void useDataBase() {
	string DBMS_name;
	cout << "������Ҫʹ�õ����ݿ������: ";
	cin >> DBMS_name;

}

// ɾ�����ݿ�
void deleteDataBase() {
	string DBMS_name;
	cout << "������Ҫɾ�������ݿ������: ";
	cin >> DBMS_name;
	string tempPath = dataPath + DBMS_name + ".txt";
	if (!(remove(tempPath.c_str()))) {
		cout << "���ݿ�ɾ���ɹ�!" << endl;
	}
	else{
		cout << "���ݿ�ɾ��ʧ��!" << endl;
	}
}

//DBMS::DBMS(string name) {
//	DBMS_name = name;
//	string command;
//	command = "mkdir data\\" + DBMS_name;
//	if (system(command.c_str())) {
//		cout << "����ʧ��!" << endl;
//	}
//	else {
//		cout << "�����ɹ�! " << endl;
//	}
//}