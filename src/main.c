#include <cli.h>

// TODO: port to windows

int main(int argc, char **argv){
	int ret;
	ret = process_args(argc, argv);
	process_code(ret);
	return ret;
}