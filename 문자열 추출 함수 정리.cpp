//���ڿ� ���� 1945/8/15
//string ��� �Լ� : substr/find/rfind/length
//���ڿ� ���� : substr ( ���� �����ϰ� ���ڿ��� ����)
//substr (2,6); �ε��� 2������ 6������ �ε��� ����
// �ε����� �ǹ� "123456" 1���� �ε����� 0, 2������ �ε����� 1, 3������ �ε����� 2, ���� 6�� �ε����� 5
//"1 2 3 4" ���� ������ �ִ� ���ڰ���� �ε����� ���� 1�� �ε����� 0�̰�, ����2�� �ε����� 2����
//���ڿ��� ��� ���� ���� ����


#include <iostream>
#include <string>
using namespace std;

int main() {
	string ss = "Deajin University";
	string s1 = ss.substr(2, 6);  //�ε��� 2��(2���� ���ڿ� e�� �ش�) ���� 6��(U)���� ��� <��¿��� : ejin U>
	//string s1 = ss.substr(2); �̷��� �ȴٸ� �ε��� 2������ ������ ����϶� �� 
	cout << s1 << endl;
}

//find() �Լ� : ���ڿ� �տ������� �˻��Ͽ� ���ڰ��� ���ڿ��� ã���� ù������ ��Ÿ���� ���ڿ��� �ε����� ����
//find() �Լ��� ���� ����
int main() {
	string ss = "Deajin University";
	int in = ss.find('U'); //������ �����ϴϱ� �ε������� 7�̶�� ��� <��� ���� : 7>
	cout << in << endl;
}

int main() {
	string ss = "Deajin University";
	int in = ss.find('n'); //ù��° ������ n���� ���� �ε������� 5��� ��� <��� ���� : 5>
	int in1 = ss.find('n', in + 1); //�ι�° n�� �ε������� �˰� ���� �� <��� ���� : 8>
		cout << "ù��° n�� �ε����� "<< in<< endl;
		cout << "�ι�° n�� �ε����� " << in1 << endl;
}

//rfind() �Լ� : �ڿ������� ã��
int main() {
	string ss = "Deajin University";
	int in = ss.rfind('n'); //ù��° ������ n���� ���� �ε������� 5��� ��� <��� ���� : 8>
	int in1 = ss.rfind('n', in - 1); //�ι�° n�� �ε������� �˰� ���� �� <��� ���� : 5>
	cout << "ù��° n�� �ε����� " << in << endl;
	cout << "�ι�° n�� �ε����� " << in1 << endl;
}

//stoi �Լ� : ���ڿ��� ������ (string to int)
//stod �Լ� : ���ڿ��� double��
//stof �Լ� : ���ڿ��� �Ǽ���
int main() {
	string s1 = "345"; //���ڿ� 
	int a = stoi(s1);  //������

	cout << "s1 = " << s1 << endl;
	cout << "a = " << a << endl; 
	// ����� �Ȱ�����ó�� �������� s1�� ���ڿ� a�� ��������
}

//lenght()�Լ��� ��ü ���ڿ��� ���� (ũ��)�� �˷���
int main() {
	string s = "1945/8/15";
	int a = s.length();
	cout << a << endl;  //��ü ���ڿ��� 9 ��� (0~9�ϱ� �� 10������ �ִ� ��)
}


//���ڿ� ���� 1945/8/15
//string ��� �Լ� : substr/find/rfind/length

int main() {
	string s = "1945/8/15";
	int in1 = s.find("/");
	//cout << in1 << endl;  ���: 4(/�� �ε��� 4��)

	string x = s.substr(0, in1); //in�� 4�� �Ǵϱ� 0~4���� ��� ���� 1945��µ�
	cout << x << endl;

	int in2 = s.find("/", in1 + 1);
	//cout << in2 << endl;  in1 +1  in1 �� ���� ���� ã�ƶ� (��� : 6)

	string y = s.substr(in1 + 1, in2 - in1 - 1);
	cout << y << endl; //8���� ���ϴ� 8 ���

	string z = s.substr(in2 + 1); //������
	cout << z << endl;
}