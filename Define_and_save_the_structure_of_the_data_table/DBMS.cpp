#include "DBMS.h"
#include "table.h"

string dataPath = "D:\\Development\\DBSM\\DBMS_sdnu\\Define_and_save_the_structure_of_the_data_table\\data\\";
string folderPath = "D:\\Development\\DBSM\\DBMS_sdnu\\Define_and_save_the_structure_of_the_data_table\\data\\";
string path = "D:\\Development\\DBSM\\DBMS_sdnu\\Define_and_save_the_structure_of_the_data_table\\";

void showTableList() {
	cout << "--------------------------------" << endl;
	cout << "|        DBMS_sdnu             |" << endl;
	cout << "--------------------------------" << endl;
	cout << "|     1.������                 |" << endl;
	cout << "|     2.ɾ����                 |" << endl;
	cout << "|     0.�˳�����               |" << endl;
	cout << "--------------------------------" << endl;
	cout << "����������ѡ�� >> ";
}
// �������ݿ�
void createDataBase() {
	string DBMS_name;
	cout << "������Ҫ���������ݿ������: ";
	cin >> DBMS_name;
	ofstream ofs;
	string fileName = dataPath + DBMS_name + ".txt";
	ifstream ifs(fileName.c_str());
	if (ifs.good()) {
		ofs.open(dataPath + DBMS_name + ".txt", ios::in);
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
	int option;
	ofstream ofs;
	string fileName = dataPath + DBMS_name + ".txt";
	ifstream ifs(fileName.c_str());
	if (!ifs.good()) {
		ofs.open(dataPath + DBMS_name + ".txt", ios::app);
		cout << "�����ݿ�ɹ�! " << endl;
		system("pause");
		system("cls");
		while (1) {
			showTableList();
			cin >> option;
			if (!option) {	// �˳�����
				return;
			}
			switch (option) {
			case 1:	// ������
				createTable();
				break;
			case 2:	// ɾ����
				deleteTable();
				break;
			}
		}
		ofs.close();
	}
	else {
		cout << "�����ݿ�ʧ��! " << endl;
	}
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