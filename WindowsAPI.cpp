//In ra hello world dung Writenconsole
#include<iostream>
#include<Windows.h>
#include "WindowsAPI.h"
#include<string>
#include <sstream>
#include<map>

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
//int main() {
//	HANDLE h_thong_bao = GetStdHandle(STD_OUTPUT_HANDLE);
//	char thong_bao[100] = "MAY TINH PHEP TOAN a + b:\nNhap a: ";
//	DWORD ki_tu_thuc_su_in;
//	WriteConsoleA(
//		h_thong_bao,
//		thong_bao,
//		(DWORD)strlen(thong_bao),
//		&ki_tu_thuc_su_in,
//		NULL
//	);
//	HANDLE h_nhap = GetStdHandle(STD_INPUT_HANDLE);
//	char a[100];
//	DWORD so_luong_ki_tu_thuc_su_nhap;
//	ReadConsoleA(
//		h_nhap,
//		a,
//		100,
//		&so_luong_ki_tu_thuc_su_nhap,
//		NULL
//	); 
//	char thong_bao_nhap_b[100] = "Nhap b: ";
//	DWORD ki_tu_thuc_su_in_b;
//	WriteConsoleA(
//		h_thong_bao,
//		thong_bao_nhap_b,
//		(DWORD)strlen(thong_bao_nhap_b),
//		&ki_tu_thuc_su_in_b,
//		NULL
//	);
//	char b[100];
//	DWORD ki_tu_thuc_su_nhap_b;
//	ReadConsoleA(
//		h_nhap,
//		b,
//		100,
//		&ki_tu_thuc_su_nhap_b,
//		NULL
//	);
//	int results = atoi(a) + atoi(b);
//	
//	string string_results = to_string(results);
//	
//	DWORD real_out_put;
//	string ketQua = "Ket qua phep tinh la: " + string_results;
//	//cout << typeid(ketQua).name() << endl;
//	//cout << ketQua << endl;
//	//cout << "ok" << endl;
//	WriteConsoleA(
//		h_thong_bao,
//		ketQua.c_str(),
//		(DWORD)size(ketQua),
//		&real_out_put,
//		NULL
//	);
//}
//### ** Bài 4: Tạo menu đơn giản trong console * *
//
//-Hiển thị :
//
//```
//markdown
//Sao chépChỉnh sửa
//1. Tính tổng
//2. Tính hiệu
//3. Thoát
//
//```
//
//- Người dùng chọn mục bằng nhập số
//- Thực hiện hành động tương ứng
//int main() {
//	HANDLE h_in = GetStdHandle(STD_INPUT_HANDLE);
//	HANDLE h_out = GetStdHandle(STD_OUTPUT_HANDLE);
//	char messenge[] = "1. Tinh tong\n2.Tinh hieu\n3.Thoat\nNhap chuc nang ban mong muon: ";
//	DWORD ki_tu_in_ra;
//	WriteConsoleA(
//		h_out,
//		messenge,
//		(DWORD)strlen(messenge),
//		&ki_tu_in_ra,
//		NULL
//	);
//	char input[100];
//	DWORD ki_tu_nhap_vao;
//	ReadConsoleA(
//		h_in,
//		input,
//		100,
//		&ki_tu_nhap_vao,
//		NULL
//	);
//	int nhap = atoi(input);
//	if (nhap == 1) {
//		char notion_sum[] = "Thuc hien chuc nang tinh tong a + b.\nNhap a: ";
//		WriteConsoleA(
//			h_out,
//			notion_sum,
//			(DWORD)strlen(notion_sum),
//			&ki_tu_in_ra,
//			NULL
//		);
//		char a[100];
//		ReadConsoleA(
//			h_in,
//			a,
//			100,
//			&ki_tu_nhap_vao,
//			NULL
//		);
//		char notion_input_b[] = "Nhap b: ";
//		WriteConsoleA(
//			h_out,
//			notion_input_b,
//			(DWORD)strlen(notion_input_b),
//			&ki_tu_in_ra,
//			NULL
//		);
//		char b[100];
//		ReadConsoleA(
//			h_in,
//			b,
//			100,
//			&ki_tu_nhap_vao,
//			NULL
//		);
//		int tong = atoi(a) + atoi(b);
//		string results = "Ket qua phep tinh a + b la: " + to_string(tong);
//		WriteConsoleA(
//			h_out,
//			results.c_str(),
//			(DWORD)size(results),
//			&ki_tu_in_ra,
//			NULL
//		);
//	}
//	else if (nhap == 2) {
//		char notion_tru[] = "Thuc hien chuc nang tinh hieu a - b.\nNhap a: ";
//		WriteConsoleA(
//			h_out,
//			notion_tru,
//			(DWORD)strlen(notion_tru),
//			&ki_tu_in_ra,
//			NULL
//		);
//		char a[100];
//		ReadConsoleA(
//			h_in,
//			a,
//			100,
//			&ki_tu_nhap_vao,
//			NULL
//		);
//		char notion_b[] = "Nhap b: ";
//		WriteConsoleA(
//			h_out,
//			notion_b,
//			(DWORD)strlen(notion_b),
//			&ki_tu_in_ra,
//			NULL
//		);
//		char b[100];
//		ReadConsoleA(
//			h_in,
//			b,
//			100,
//			&ki_tu_nhap_vao,
//			NULL
//		);
//		int results = atoi(a) - atoi(b);
//		string  out = "Ket qua phep tinh a - b la: " + to_string(results);
//		WriteConsoleA(
//			h_out,
//			out.c_str(),
//			(DWORD)size(out),
//			&ki_tu_in_ra,
//			NULL
//		);
//	}
//	else if (nhap == 3) {
//		char notion[] = "Thoat chuong trinh thanh cong \n";
//		WriteConsoleA(
//			h_out,
//			notion,
//			(DWORD)strlen(notion),
//			&ki_tu_in_ra,
//			NULL
//		);
//	}
//	else {
//		char error[] = "Vui long nhap mot trong cac chuc nang co ben tren. Khoi dong lai chuong trinh di";
//		WriteConsoleA(
//			h_in,
//			error,
//			(DWORD)strlen(error),
//			&ki_tu_in_ra,
//			NULL
//		);
//	}
//}
//### ** Bài 5: Đếm số từ nhập vào * *
//
//-Nhập một dòng văn bản
//- Đếm số từ trong chuỗi đó(tách bằng khoảng trắng)
//- In ra kết quả
int main() {
	HANDLE h_in = GetStdHandle(STD_INPUT_HANDLE);
	HANDLE h_out = GetStdHandle(STD_OUTPUT_HANDLE);
	DWORD real_in;
	DWORD real_out;
	char notion[] = "Nhap chuoi muon dem: ";
	WriteConsoleA(
		h_out,
		notion,
		(DWORD)strlen(notion),
		&real_out,
		NULL
	);
	char input[100] = {0};
	ReadConsoleA(
		h_in,
		input,
		100,
		&real_in,
		NULL
	);
	if (size(input)) {
		input[real_in] = '\0';
	}
	
	string string_input = string(input);
	stringstream ss(string_input);
	string word;
	map<string, int> word_count;
	while (ss >> word) {
		if (word_count.count(word) != 0) {
			word_count[word] += 1;
		}
		else {
			word_count[word] = 1;
		}
	}
	for (auto it : word_count){
		string results = "Key: " + it.first + " Value: " + to_string(it.second) + "\n";
		WriteConsoleA(
			h_out,
			results.c_str(),
			(DWORD)size(results),
			&real_out,
			NULL
		);
	}
}