//In ra hello world dung Writenconsole
#include<iostream>
#include<Windows.h>
#include "WindowsAPI.h"
#include<string>
#include <sstream>
#include<map>
#include <utility>
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
//int main() {
//	HANDLE h_in = GetStdHandle(STD_INPUT_HANDLE);
//	HANDLE h_out = GetStdHandle(STD_OUTPUT_HANDLE);
//	DWORD real_in;
//	DWORD real_out;
//	char notion[] = "Nhap chuoi muon dem: ";
//	WriteConsoleA(
//		h_out,
//		notion,
//		(DWORD)strlen(notion),
//		&real_out,
//		NULL
//	);
//	char input[100] = {0};
//	ReadConsoleA(
//		h_in,
//		input,
//		100,
//		&real_in,
//		NULL
//	);
//	if (size(input)) {
//		input[real_in] = '\0';
//	}
//	
//	string string_input = string(input);
//	stringstream ss(string_input);
//	string word;
//	map<string, int> word_count;
//	while (ss >> word) {
//		if (word_count.count(word) != 0) {
//			word_count[word] += 1;
//		}
//		else {
//			word_count[word] = 1;
//		}
//	}
//	for (auto it : word_count){
//		string results = "Key: " + it.first + " Value: " + to_string(it.second) + "\n";
//		WriteConsoleA(
//			h_out,
//			results.c_str(),
//			(DWORD)size(results),
//			&real_out,
//			NULL
//		);
//	}
//}
//### ** Bài 6: Vẽ khung chữ nhật bằng ký tự * *
//
//-Nhập chiều dài, chiều rộng
//- Vẽ hình chữ nhật bằng dấu  trong console

//int main() {
//	HANDLE h_in = GetStdHandle(STD_INPUT_HANDLE);
//	HANDLE h_out = GetStdHandle(STD_OUTPUT_HANDLE);
//	DWORD real;
//	char notion[] = "Nhap chieu dai, chieu rong khung chu nhat ban muon ve!!\nNhap chieu dai: ";
//	WriteConsoleA(
//		h_out,
//		notion,
//		(DWORD)strlen(notion),
//		&real,
//		NULL
//	);
//	char a[100] = { 0 };
//	ReadConsoleA(
//		h_in,
//		a,
//		100,
//		&real,
//		NULL
//	);
//	if (strlen(a) != 0) {
//		a[real] = '\0';
//	}
//	char notion_input_b[] = "Nhap chieu rong: ";
//	WriteConsoleA(
//		h_out,
//		notion_input_b,
//		(DWORD)strlen(notion_input_b),
//		&real,
//		NULL
//	);
//	char b[100];
//	ReadConsoleA(
//		h_in,
//		b,
//		100,
//		&real,
//		NULL
//	);
//	if (strlen(b) != 0) {
//		b[real] = '\0';
//	}
//	for (int i = 0; i < atoi(a); i++) {
//		for (int j = 0; j < atoi(b); j++) {
//			if (i == 0 || j == 0 || i == (atoi(a) - 1) || j == (atoi(b) - 1)) {
//				WriteConsoleA(
//					h_out,
//					"*",
//					1,
//					&real,
//					NULL
//				);
//			}
//			else {
//				WriteConsoleA(
//					h_out,
//					" ",
//					1,
//					&real,
//					NULL
//				);
//			}
//		}
//		WriteConsoleA(
//			h_out,
//			"\n",
//			1,
//			&real,
//			NULL
//		);
//	}
//}
//### ** Đọc file bằng WinAPI và in nội dung ra console**
//
//-Mở file bằng `CreateFile`
//- Đọc bằng `ReadFile`
//- In nội dung bằng `WriteConsole`
//int main() {
//	HANDLE h_out = GetStdHandle(STD_OUTPUT_HANDLE);
//	DWORD real;
//	char path[] = "./test.txt";
//	HANDLE h_file = CreateFileA(
//		path,
//		GENERIC_READ,
//		0,
//		NULL,
//		OPEN_EXISTING,
//		NULL,
//		NULL
//	);
//	char results[100];
//	ReadFile(
//		h_file,
//		results,
//		100,
//		&real,
//		NULL
//	);
//	if (size(results) > 0) {
//		results[real] = '\0';
//	}
//	string output = string(results);
//	WriteConsoleA(
//		h_out,
//		output.c_str(),
//		(DWORD)size(output),
//		&real,
//		NULL
//	);
//	CloseHandle(h_file);
//}
//### ** Bài 8: Ghi chuỗi nhập từ người dùng vào file * *
//
//-Nhập từ console
//- Ghi vào file bằng `WriteFile`
//int main() {
//	HANDLE h_in = GetStdHandle(STD_INPUT_HANDLE);
//	DWORD real;
//	HANDLE h_out = GetStdHandle(STD_OUTPUT_HANDLE);
//	char notion[] = "Nhap noi dung can ghi vao file: ";
//	WriteConsoleA(
//		h_out,
//		notion,
//		(DWORD)strlen(notion),
//		&real,
//		NULL
//	);
//	char a[100];
//	ReadConsoleA(
//		h_in,
//		a,
//		100,
//		&real,
//		NULL
//	);
//	a[real] = '\0';
//	string ok = string(a) + "\n";
//	char path[] = "./test.txt";
//	HANDLE h_file = CreateFileA(
//		path,
//		GENERIC_WRITE,
//		0,
//		NULL,
//		OPEN_EXISTING,
//		NULL,
//		NULL
//	);
//	SetFilePointer(
//		h_file,
//		0,
//		NULL,
//		FILE_END
//	);
//	WriteFile(
//		h_file,
//		ok.c_str(),
//		(DWORD)size(ok),
//		&real,
//		NULL
//	);
//}
//### ** Bài 9: Đồng hồ đếm giây(dùng Sleep và WriteConsole) * *
//
//-In số từ 0, mỗi giây tăng 1
//- Dùng `Sleep(1000)`
//- Dùng `SetConsoleCursorPosition` để in đè
//int main() {
//	HANDLE h_out = GetStdHandle(STD_OUTPUT_HANDLE);
//	HANDLE h_in = GetStdHandle(STD_INPUT_HANDLE);
//	DWORD real;
//	int i = 0;
//	while (true) {
//		if (i == 100) {
//			break;
//		}
//		COORD pos;
//		pos.X = 0;
//		pos.Y = 0;
//		SetConsoleCursorPosition(h_out, pos);
//		WriteConsoleA(
//			h_out,
//			to_string(i).c_str(),
//			(DWORD)size(to_string(i)),
//			&real,
//			NULL
//		);
//		Sleep(1000);
//		i += 1;
//	}
//}
//### ** Bài 10: Ứng dụng mini : Máy tính console * *
//
//-Menu :
//
//    ```
//    markdown
//    Sao chépChỉnh sửa
//    1. Cộng
//    2. Trừ
//    3. Nhân
//    4. Chia
//    5. Thoát
//
//    ```
//
//    - Nhập 2 số, chọn phép tính và in kết quả
//pair<int, int> input_number(HANDLE h_in , HANDLE h_out) {
//	DWORD real;
//	char notion1[] = "Nhap a: ";
//	WriteConsoleA(
//		h_out,
//		notion1,
//		(DWORD)strlen(notion1),
//		&real,
//		NULL
//	);
//	char a[1000];
//	ReadConsoleA(
//		h_in,
//		a,
//		1000,
//		&real,
//		NULL
//	);
//	char notion2[] = "Nhap b: ";
//	WriteConsoleA(
//		h_out,
//		notion2,
//		(DWORD)strlen(notion2),
//		&real,
//		NULL
//	);
//	char b[1000];
//	ReadConsoleA(
//		h_in,
//		b,
//		1000,
//		&real,
//		NULL
//	);
//	return { atoi(a) , atoi(b) };
//}
//void for_loop_fuction() {
//	HANDLE h_in = GetStdHandle(STD_INPUT_HANDLE);
//	HANDLE h_out = GetStdHandle(STD_OUTPUT_HANDLE);
//	DWORD real;
//	char notion1[] = "==MAY TINH==\n1. Cong\n2.Tru\n3.Nhan\n4.Chia\n5.Thoat\nNhap chuc nang ban mong muon: ";
//	WriteConsoleA(
//		h_out,
//		notion1,
//		(DWORD)strlen(notion1),
//		&real,
//		NULL
//	);
//	char option[100];
//	ReadConsoleA(
//		h_in,
//		option,
//		100,
//		&real,
//		NULL
//	);
//	int optiton = stoi(option);
//	if (optiton == 1) {
//		pair<int, int> a = input_number(h_in, h_out);
//		string results = "Ket qua phep tinh la: " + to_string(a.first + a.second) + "\n";
//		WriteConsoleA(
//			h_out,
//			results.c_str(),
//			(DWORD)size(results),
//			&real,
//			NULL
//		);
//		for_loop_fuction();
//	}
//	else if (optiton == 2) {
//		pair<int, int> a = input_number(h_in, h_out);
//		string results = "Ket qua phep tinh la: " + to_string(a.first - a.second) + "\n";
//		WriteConsoleA(
//			h_out,
//			results.c_str(),
//			(DWORD)size(results),
//			&real,
//			NULL
//		);
//		for_loop_fuction();
//	}
//	else if (optiton == 3) {
//		pair<int, int> a = input_number(h_in, h_out);
//		string results = "Ket qua phep tinh la: " + to_string(a.first * a.second) + "\n";
//		WriteConsoleA(
//			h_out,
//			results.c_str(),
//			(DWORD)size(results),
//			&real,
//			NULL
//		);
//		for_loop_fuction();
//	}
//	else if (optiton == 4) {
//		pair<int, int> a = input_number(h_in, h_out);
//		string results = "Ket qua phep tinh la: " + to_string(a.first / a.second) + "\n";
//		WriteConsoleA(
//			h_out,
//			results.c_str(),
//			(DWORD)size(results),
//			&real,
//			NULL
//		);
//		for_loop_fuction();
//	}
//	else if (optiton == 5) {
//		return;
//	}
//	else {
//		char error[] = "Vui long nhap nhung lua chon co trong may tinh\n";
//		WriteConsoleA(
//			h_out,
//			error,
//			(DWORD)strlen(error),
//			&real,
//			NULL
//		);
//		for_loop_fuction();
//	}
//}
//int main() {
//	for_loop_fuction();
//}
//### ** Bài 11: Tô màu chữ và nền console * *
//
//-Dùng `SetConsoleTextAttribute`
//- In ra chuỗi với nhiều màu khác nhau

//i/*nt main() {
//	HANDLE h_out = GetStdHandle(STD_OUTPUT_HANDLE);
//	DWORD real;
//	SetConsoleTextAttribute(h_out, 2);
//	char out[] = "Hello mau ";
//	WriteConsoleA(
//		h_out,
//		out,
//		(DWORD)strlen(out),
//		&real,
//		NULL
//	);
//}*/
//### ** Bài 12: Điều khiển con trỏ console * *
//
//-Tạo trò chơi nhỏ : di chuyển ký tự `@` bằng các phím mũi tên
//- Sử dụng `GetAsyncKeyState` hoặc `ReadConsoleInput`
//int main() {
//	while (true) {
//
//	}
//}
//### ** Bài 13: Ghi nhật ký hệ thống * *
//
//-Mỗi lần chạy chương trình, ghi thời gian hiện tại vào file "log.txt"
//- Lấy thời gian bằng `GetLocalTime`
//- Ghi file bằng `WriteFile`
//int main() {
//	char path[] = "./test.txt";
//	HANDLE h_file = CreateFileA(
//		path,
//		GENERIC_WRITE,
//		0,
//		NULL,
//		OPEN_EXISTING,
//		NULL,
//		NULL
//	);
//	DWORD real;
//	SYSTEMTIME st;
//	GetLocalTime(&st);
//	string time_now = to_string(st.wMilliseconds) + ":" + to_string(st.wMinute) + string(":") + to_string(st.wHour) + " " + to_string(st.wDay) + "/" + to_string(st.wMonth) + "/" + to_string(st.wYear) + "\n";
//	cout << time_now << endl;
//	SetFilePointer(
//		h_file,
//		0,
//		NULL,
//		FILE_END
//	);
//	WriteFile(
//		h_file,
//		time_now.c_str(),
//		(DWORD)size(time_now),
//		&real,
//		NULL
//	);
//}
//### ** Bài 14: Tạo đồng hồ số thời gian thực * *
//
//-Cập nhật thời gian hiện tại mỗi giây
//- In tại một vị trí cố định trên console
//int main() {
//	HANDLE h_out = GetStdHandle(STD_OUTPUT_HANDLE);
//	DWORD real;
//	while (true) {
//		SYSTEMTIME time;
//		GetLocalTime(&time);
//		string gio = to_string(time.wHour);
//		string phut = to_string(time.wMinute);
//		string giay = to_string(time.wSecond);
//		while (size(gio) < 2) {
//			gio = "0" + gio;
//		}
//		while (size(phut) < 2) {
//			phut = "0" + phut;
//		}
//		while (size(giay) < 2) {
//			giay = "0" + giay;
//		}
//		string time_now = gio + ":" + phut + " " + giay;
//		COORD pos;
//		pos.X = 0;
//		pos.Y = 0;
//		SetConsoleCursorPosition(h_out, pos);
//		WriteConsoleA(
//			h_out,
//			time_now.c_str(),
//			(DWORD)size(time_now),
//			&real,
//			NULL
//		);
//		Sleep(1000);
//	}
//}