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
  
  /*
  Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.
  */
  else{
    cout<<"Could not create file : "<<outputFileName<<endl;
  }
  return 0;
}
