#include <unistd.h>
#include <cstdlib>
int main(int argc, char* args[]) {
	system("cd /home/maple/桌面/myqtMusicPlayer && nohup ./MusicPlayer &");
	sleep(2);
	system("cd /home/maple/桌面/myqtMusicPlayer && rm nohup.out");
	return 0;
}
