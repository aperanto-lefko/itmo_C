// 1.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <fmt/core.h>
#include <string>
#include <windows.h>
  
#include <chrono>
#include <bitset>

int main() {

	int x = 42;
	std::string name = "Alice";
	// Печать с форматированием
	fmt::print("Hello, {}, the answer is {}!\n", name, x);
	int num = 42;
	fmt::print("Hex: {:#x}\n", num);        // шестнадцатеричное с префиксом 0x
	fmt::print("Управление шириной и выравниванием:\n");
	fmt::print("|{:>10}|\n", 42);           // выравнивание вправо
	fmt::print("|{:<10}|\n", 42);           // выравнивание влево
	fmt::print("|{:^10}|\n\n", 42);         // выравнивание по центру

	double pi = 3.1415926535;
	
	fmt::print("Fixed: {:.2f}\n", pi);      // 2 знака после запятой
	fmt::print("Scientific: {:.3e}\n\n", pi); // экспоненциальный формат

	std::string s = fmt::format("Pi ≈ {:.3f}", 3.14159);
	fmt::print("{}\n", s);

	int number = 42;
	std::string binary_str = std::bitset<8>(number).to_string(); // Двоичное представление
	binary_str.erase(0, binary_str.find_first_not_of('0')); // Убираем ведущие нули

	std::string formatted = fmt::format("Dec: {}, Hex: {:#x}, Bin: 0b{}",
		number, number, binary_str);
	fmt::print(" {}\n", formatted);

	double value = 3.14159;
	std::string three_formats = fmt::format("Default: {} | Fixed: {:.2f} | Sci: {:.3e}",
		value, value, value);
	fmt::print(" {}\n", three_formats);

	fmt::print("Лог:\n");

	auto now = std::chrono::system_clock::now();
	std::time_t t = std::chrono::system_clock::to_time_t(now);

	std::tm local_tm{};
	localtime_s(&local_tm, &t); 

	char buf[20];
	std::strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S", &local_tm);

	std::string timestamp(buf);

	fmt::print("[{}] [INFO] Application started\n", timestamp);
	fmt::print("[{}] [WARNING] Low disk space\n", timestamp);
	fmt::print("[{}] [ERROR] Failed to open file\n", timestamp);
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
