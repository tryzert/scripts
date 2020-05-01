#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char* args[]) {
		if (argc < 2) {
			cout << "缺少文件名或者参数。\n用法：  jvv Hello.java   ---即可直接编译并运行，但不保存编译文件。" << endl;
		}
		else if (argc == 2) {
		string command = "java ", file = args[1];
		system((command + file).c_str());
	}
	return 0;
}
