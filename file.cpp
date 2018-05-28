#include <iostream>
#include <fstream>
using namespace std;
int main(){
  fstream outFile;
  string outputFileName="text.txt";
  //outFile.open(outputFileName);
  outFile.open(outputFileName, ios::out);
  if(outFile.is_open()){
    outFile<<"hello there"<<endl;
    outFile<<1234<<endl;
    outFile.close();
  }
  else{
    cout<<"Could not create file : "<<outputFileName<<endl;
  }
  return 0;
}
