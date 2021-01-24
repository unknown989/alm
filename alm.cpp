#include <iostream>
#include <fstream>

#define VERSION "Version : 1.0"

using namespace std;

void readFile(string filename);

int main(int argc,char* argv[]){
        if(!argv[1]){
                cout << "No file Included" << endl;
                return 1;
        }
        std::string arg = argv[1];
        if(arg == "-h" || arg == "--help"){
                cout << "Usage : alm <filename>\nHelp: alm <-h><--help>\nVersion: alm -v" << endl;
                return 0;
        }else if(arg == "-v"){
                cout << VERSION << endl;
                return 0;
        }else{
                readFile(arg);
        }
        return 0;

}

void readFile(string filename){
        string data;
        string line;
        fstream file;

        file.open(filename,fstream::in);

        if(!file.is_open()){
                cerr << "Error While Opening The File" << endl;
                exit(1);
        }else{
                while(getline(file,line)){cout << line << endl;};
                file.close();
        }

}
