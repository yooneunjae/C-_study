//문자열 추출 1945/8/15
//string 사용 함수 : substr/find/rfind/length
//문자열 추출 : substr ( 공백 무시하고 문자열만 추출)
//substr (2,6); 인덱스 2번부터 6번까지 인덱스 추출
// 인덱스값 의미 "123456" 1번의 인덱스는 0, 2숫자의 인덱스는 1, 3숫자의 인덱스는 2, 숫자 6의 인덱스는 5
//"1 2 3 4" 만약 공백이 있는 숫자경우의 인덱스는 숫자 1의 인덱스는 0이고, 숫자2의 인덱스는 2가됨
//문자열의 경우 공백 포함 안함


#include <iostream>
#include <string>
using namespace std;

int main() {
	string ss = "Deajin University";
	string s1 = ss.substr(2, 6);  //인덱스 2번(2번은 문자열 e에 해당) 부터 6번(U)까지 출력 <출력예상 : ejin U>
	//string s1 = ss.substr(2); 이렇게 된다면 인덱스 2번부터 끝까지 출력하란 뜻 
	cout << s1 << endl;
}

//find() 함수 : 문자열 앞에서부터 검색하여 인자값의 문자열을 찾으면 첫번쨰로 나타나는 문자열의 인덱스를 추출
//find() 함수는 공백 포함
int main() {
	string ss = "Deajin University";
	int in = ss.find('U'); //공백을 포함하니까 인덱스값이 7이라고 출력 <출력 예상 : 7>
	cout << in << endl;
}

int main() {
	string ss = "Deajin University";
	int in = ss.find('n'); //첫번째 나오는 n으로 생각 인덱스값이 5라고 출력 <출력 예상 : 5>
	int in1 = ss.find('n', in + 1); //두번째 n의 인덱스값을 알고 싶을 때 <출력 예상 : 8>
		cout << "첫번째 n의 인덱스는 "<< in<< endl;
		cout << "두번째 n의 인덱스는 " << in1 << endl;
}

//rfind() 함수 : 뒤에서부터 찾음
int main() {
	string ss = "Deajin University";
	int in = ss.rfind('n'); //첫번째 나오는 n으로 생각 인덱스값이 5라고 출력 <출력 예상 : 8>
	int in1 = ss.rfind('n', in - 1); //두번째 n의 인덱스값을 알고 싶을 때 <출력 예상 : 5>
	cout << "첫번째 n의 인덱스는 " << in << endl;
	cout << "두번째 n의 인덱스는 " << in1 << endl;
}

//stoi 함수 : 문자열을 정수로 (string to int)
//stod 함수 : 문자열을 double로
//stof 함수 : 문자열을 실수로
int main() {
	string s1 = "345"; //문자열 
	int a = stoi(s1);  //정수값

	cout << "s1 = " << s1 << endl;
	cout << "a = " << a << endl; 
	// 출력은 똑같은거처럼 보이지만 s1은 문자열 a는 정수값임
}

//lenght()함수는 전체 문자열의 길이 (크기)를 알려줌
int main() {
	string s = "1945/8/15";
	int a = s.length();
	cout << a << endl;  //전체 문자열인 9 출력 (0~9니까 총 10개문자 있단 뜻)
}


//문자열 추출 1945/8/15
//string 사용 함수 : substr/find/rfind/length

int main() {
	string s = "1945/8/15";
	int in1 = s.find("/");
	//cout << in1 << endl;  출력: 4(/는 인덱스 4임)

	string x = s.substr(0, in1); //in이 4가 되니까 0~4까지 출력 따라서 1945출력됨
	cout << x << endl;

	int in2 = s.find("/", in1 + 1);
	//cout << in2 << endl;  in1 +1  in1 그 다음 값을 찾아라 (출력 : 6)

	string y = s.substr(in1 + 1, in2 - in1 - 1);
	cout << y << endl; //8월을 뜻하는 8 출력

	string z = s.substr(in2 + 1); //끝까지
	cout << z << endl;
}