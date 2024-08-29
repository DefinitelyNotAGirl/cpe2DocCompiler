#pragma once
#include <string>
#include <filesystem>

inline void CreateDirectory(std::string path) {
	if(std::filesystem::exists(path))return;
	std::filesystem::create_directory(std::filesystem::path(path));
}

inline void SymbolicLink(std::string src, std::string dst) {
	std::cout << "Symbolic Link: \x1B[34m" << src << "\x1B[0m --> \x1B[35m" << dst << "\x1B[0m" << std::endl;
	system(("ln -s "+src+" "+dst).c_str());
}

inline void Execute(std::string cmd) {
	system(cmd.c_str());
}

class FileNotFoundException {
public:
	std::string path;
	FileNotFoundException(std::string path)
		:path(path){}
};

inline std::string GetFileContent(std::string path) {
	if(!std::filesystem::exists(path))
		throw FileNotFoundException(path);
	FILE* f = fopen(path.c_str(),"r");
	fseek(f,0,SEEK_END);
	int size = ftell(f);
	rewind(f);
	void* buffer = malloc(size+1);
	((char*)buffer)[size] = 0x00;
	fread(buffer,size,1,f);
	fclose(f);
	std::string content((char*)buffer);
	free(buffer);
	return content;
}
