#include<iostream>
#include<fstream>
using namespace std;


int main(){
    ofstream write;
    write.open("ascii_table.doc");

    for(int i=0;i<256;i++){
        char ch=i;
        write<<i<<" : "<<ch<<endl;
    }
    write.close();
}
