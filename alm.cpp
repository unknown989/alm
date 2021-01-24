#include <iostream>
#include <fstream>
#include <ncurses.h>


using namespace std;

string readFile(string filename);

int main(int argc,char* argv[]){

	if(!argv[1]){
		cout << "No file Included" << endl;
		return 1;
	}
	string data = readFile(argv[1]);
	cout << data << endl;
	return 0;

}



string readFile(string filename){
	
	string data;
	string line;
	fstream file;

	file.open(filename,fstream::in);

	if(!file.is_open()){
		cerr << "Error While Opening The File" << endl;
		exit(1);
	}else{
		while(getline(file,line)){data.append(line+"\n");};
		file.close();
	}

	return data;

}
