//
// Created by szyns on 14.01.2024.
//

#include "BufferFile.h"
#include <fstream>
BufferFile::BufferFile(const string &sciezka) : sciezka(sciezka) {
    cout<<"Konstruktor klasy BufferFile"<<endl;
}

void BufferFile::add(int a) {
    ofstream ofstream1;
    ofstream1.open(sciezka,ios::app);

    try {
        if (ofstream1.is_open()) {
            ofstream1<<a<<endl;
            ofstream1.close();

        } else {
            throw runtime_error("Blad przy otwieraniu pliku");
        }
    }
    catch(runtime_error &r)
    {
        cout<<r.what()<<endl;
    }



}

void BufferFile::write() {
    ifstream ifstream1;
    ifstream1.open(sciezka);
    try {
        string line;
        if (ifstream1.is_open()) {
            cout<<"Plik "<<sciezka<<": "<<endl;
            while(!ifstream1.eof())
            {
                getline(ifstream1,line);
                cout<<line<<endl;
            }
            ifstream1.close();
        } else {
            throw runtime_error("Blad przy otwieraniu pliku");
        }
    }
    catch(runtime_error &r)
    {
        cout<<r.what()<<endl;
    }

}

BufferFile::~BufferFile() {
    cout<<"Destruktor klasy BufferFile"<<endl;

}
