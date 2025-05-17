//In ra hello world dung Writenconsole
#include<iostream>
#include<Windows.h>
#include "WindowsAPI.h"
#include<string>
using namespace std;
//### ** Bài 2: Đọc tên người dùng và chào lại * *
//
//-Dùng `ReadConsoleA` để nhập tên
//- In ra "Hello, [Tên]"
//- Xử lý loại bỏ ký tự xuống dòng
//int main() {
//	HANDLE handle_notion = GetStdHandle(STD_OUTPUT_HANDLE);
//	char buffer[100] = "Hay nhap ten cua ban:\n";
//	DWORD real_read;
//	bool notion = WriteConsoleA(
//		handle_notion,
//		buffer,
//		(DWORD)strlen(buffer),
//		&real_read,
//		NULL
//	);
//	HANDLE handle_input = GetStdHandle(STD_INPUT_HANDLE);
//	char buffer_input[100];
//	DWORD real;
//	bool input = ReadConsoleA(
//		handle_input,
//		buffer_input,
//		(DWORD)(10),
//		&real,
//		NULL
//	);
//	if (real >= 2) {
//		buffer_input[real - 2] = '\0';
//	}
//	else {
//		buffer_input[real] = '\0';
//	}
//	HANDLE handle_out = GetStdHandle(STD_OUTPUT_HANDLE);
//	DWORD real_out_put;
//	char hello[100] = "Hello: ";
//	strcat(hello, buffer_input);
//	WriteConsoleA(
//		handle_out,
//		hello,
//		(DWORD)strlen(hello),
//		&real_out_put,
//		NULL
//	);
//}
//### ** Bài 3: Viết chương trình nhập 2 số và in tổng * *
//
//-Nhập từng số một bằng `ReadConsole`
//- Chuyển chuỗi sang số(`atoi`, `strtol`)
//	- Tính và in kết quả bằng `WriteConsole`
int main() {
	HANDLE h_thong_bao = GetStdHandle(STD_OUTPUT_HANDLE);
	char thong_bao[100] = "MAY TINH PHEP TOAN a + b:\nNhap a: ";
	DWORD ki_tu_thuc_su_in;
	WriteConsoleA(
		h_thong_bao,
		thong_bao,
		(DWORD)strlen(thong_bao),
		&ki_tu_thuc_su_in,
		NULL
	);
	HANDLE h_nhap = GetStdHandle(STD_INPUT_HANDLE);
	char a[100];
	DWORD so_luong_ki_tu_thuc_su_nhap;
	ReadConsoleA(
		h_nhap,
		a,
		100,
		&so_luong_ki_tu_thuc_su_nhap,
		NULL
	); 
	char thong_bao_nhap_b[100] = "Nhap b: ";
	DWORD ki_tu_thuc_su_in_b;
	WriteConsoleA(
		h_thong_bao,
		thong_bao_nhap_b,
		(DWORD)strlen(thong_bao_nhap_b),
		&ki_tu_thuc_su_in_b,
		NULL
	);
	char b[100];
	DWORD ki_tu_thuc_su_nhap_b;
	ReadConsoleA(
		h_nhap,
		b,
		100,
		&ki_tu_thuc_su_nhap_b,
		NULL
	);
	int results = atoi(a) + atoi(b);
	
	string string_results = to_string(results);
	
	DWORD real_out_put;
	string ketQua = "Ket qua phep tinh la: " + string_results;
	//cout << typeid(ketQua).name() << endl;
	//cout << ketQua << endl;
	//cout << "ok" << endl;
	WriteConsoleA(
		h_thong_bao,
		ketQua.c_str(),
		(DWORD)size(ketQua),
		&real_out_put,
		NULL
	);
}