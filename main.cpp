#include <iostream>
#include "GenStack.h"
#include <fstream>
#include <sstream>

int main(int argc, char ** argv){
  std::ifstream inFile;
  std::string fileName;
  std::string line;
  float fileLength = 0.0;
  float lineLength = 0;
  float number_of_lines = 0.0;
  bool nextFile = true;



  //delimiter checker
  GenStack<char> text;
  char check;
  std::cout <<"Welcome to the syntax checker! Please input the location of the source file" << "\n";
  //getting user input into file name
  getline(std::cin, fileName);
  inFile.open(fileName.c_str());
  while(getline(inFile, line)){
//looping in user input to decide whether or not they want to read in a file
    while(nextFile!=false){

//pushing opening delimiters to a stack
    for (int i = 0; i < line.size(); ++i){
      if(line[i] == '{' | line[i] == '(' | line[i] == '['){
        text.push(line[i]);


      }
      //checking to see if there are closing delimiters that match
      else if(line[i] == '}' | line[i] == ')' | line[i] == ']'){
        if(text.isEmpty()==true){
          std::cout << "There is an error. This file is missing opening delimiter. " << "\n";
          nextFile = false;
          break;
        }
        else{
//removing opening delimiters
          text.pop();
          text.myArray[text.top] = check;

//checking for closing delimiters
          if((line[i] == '}' && check!= '{' ) | (line[i] == ')' && check!= '(') | (line[i] == ']' && check!= '[')){
            std::cout << check;
            std::cout << "There is an error. This file is missing closing delimiter." << "\n";
            nextFile = false;
            break;

        }
      }
      }
}
    }


  }




}
