#include <iostream>
#include <toml.hpp>
#include <cstdlib>

using namespace std;
using namespace toml;

int
main(int argc, char *argv[]) 
{

	auto data = parse("tmake.toml");
	
	string target = argv[1];

	vector<string> commands = find<vector<string>>(data, target);
	
	for (string command : commands) {
		cout << command << "\n";
	       	system(command.c_str());
	}
	
	return 0;	
}
