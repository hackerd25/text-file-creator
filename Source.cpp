#include <iostream>
#include <fstream>
#include <string>

std::string name;
std::string path;
std::string content;
int makeAFileIn()
{
	std::cout << "\nType name of text file: ";
	std::getline(std::cin, name);
	std::cout << "\nPath for the file. If blank it will be in C: -> Documents -> Text Files. Insert: ";
	std::getline(std::cin, path);
	std::cout << "\nContent of file: ";
	std::getline(std::cin, content);
	if (path == "") {
		path = "C:/Users/123/Documents/Text_files";
	}
	
		std::ofstream File(path + "/" + name + ".txt");
	
		File << content;
		return 1;
}

int main() {
	std::cout << "Hi this program creates files in directories";
		std::cout << "\nIf successful will return 1";
		makeAFileIn();
		std::cout << "Check the folder.";



	return 0;
}