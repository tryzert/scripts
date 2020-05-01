#include <cstdlib>
#include <unistd.h>
#include <iostream>

int main() {
	//system("nohup python3 /home/maple/workspace/mycloud/run.py &");
	system("python /home/maple/workspace/mycloud/run.py");
	//sleep(2);
	//system("rm nohup.out");
	std::cout << "yes" << std::endl;	
	return 0;
}
