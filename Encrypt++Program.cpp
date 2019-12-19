#include <iostream>
#include <string>
#include <fstream>
#include <math.h> 
#include <sstream> 
using namespace std;

long convertToInt(char x){
   int Temp=0;
	 srand (time(0));
	 Temp = rand()%60+40;
   return pow(int(x),2)*Temp;
}



long encode(char x) { 
  switch (x) { 
  case 'a': 
    return convertToInt(x); 
  case 'b': 
    return convertToInt(x); 
  case 'c': 
    return convertToInt(x); 
  case 'd': 
    return convertToInt(x); 
  case 'e': 
    return convertToInt(x); 
  case 'f': 
    return convertToInt(x); 
  case 'g': 
    return convertToInt(x); 
  case 'h': 
    return convertToInt(x); 
  case 'i': 
    return convertToInt(x); 
  case 'j': 
    return convertToInt(x); 
  case 'k': 
    return convertToInt(x); 
  case 'l': 
    return convertToInt(x); 
  case 'm': 
    return convertToInt(x); 
  case 'n': 
    return convertToInt(x); 
  case 'o': 
    return convertToInt(x); 
  case 'p': 
    return convertToInt(x); 
  case 'q': 
    return convertToInt(x); 
  case 'r': 
    return convertToInt(x); 
  case 's': 
    return convertToInt(x); 
  case 't': 
    return convertToInt(x); 
  case 'u': 
    return convertToInt(x); 
  case 'v': 
    return convertToInt(x); 
  case 'w': 
    return convertToInt(x); 
  case 'x': 
    return convertToInt(x); 
  case 'y': 
    return convertToInt(x); 
  case 'z': 
    return convertToInt(x); 
  case ' ':
    return convertToInt(x);
 case ',':
    return convertToInt(x);
  case '.':
    return convertToInt(x);
 default:
   return 55; 
  } 
} 




char decodeLine(long x) { 

  long z = x;

      if (z == convertToInt('a')){
        return 'a'; 
    }
    else if (convertToInt('b') == z){
    return 'b';
    } 
    else if (convertToInt('c') == z){
    return 'c';
    } 
    else if (convertToInt('d') == z){
    return 'd';
    } 
    else if (convertToInt('e') == z){
    return 'e';
    } 
    else if (convertToInt('f') == z){
    return 'f';
    } 
    else if (convertToInt('g') == z){
    return 'g';
    } 
    else if (convertToInt('h') == z){
    return 'h';
    } 
    else if (convertToInt('i') == z){
    return 'i';
    } 
    else if (convertToInt('j') == z){
    return 'j';
    } 
    else if (convertToInt('k') == z){
    return 'k';
    } 
    else if (convertToInt('l') == z){
    return 'l';
    } 
    else if (convertToInt('m') == z){
    return 'm';
    } 
    else if (convertToInt('n') == z){
    return 'n';
    } 
    else if (convertToInt('o') == z){
    return 'o';
    } 
    else if (convertToInt('p') == z){
    return 'p';
    } 
    else if (convertToInt('q') == z){
    return 'q';
    } 
    else if (convertToInt('r') == z){
    return 'r';
    } 
    else if (convertToInt('s') == z){
    return 's';
    } 
    else if (convertToInt('t') == z){
    return 't';
    } 
    else if (convertToInt('u') == z){
    return 'u';
    } 
    else if (convertToInt('v') == z){
    return 'v';
    } 
    else if (convertToInt('w') == z){
    return 'w';
    } 
    else if (convertToInt('x') == z){
    return 'x';
    } 
    else if (convertToInt('y') == z){
    return 'y';
    } 
    else if (convertToInt('z') == z){
    return 'z';
    } 
    else if (convertToInt('.') == z){
    return '.';
    } 
    else {
    return ' ';
    }
}  

int main()

{
  

   cout << "This program incrypt text in 'data'.txt' to 'code.txt' and also create a descrypt in 'decode.txt'.\n\n";
 ifstream inputFile("data.txt"); // Open the file for input
 if (!inputFile)
 { cout << "The file data.txt could not be opened.";
 return 1; }

    ofstream code("code.txt", ios::out);


 int numberLinesProcessed = 0;
 string line;
 while (getline(inputFile, line))
 {
   for (int i=0; i < line.size(); i++){
   code << encode(line[i]) << "/";}
  
 numberLinesProcessed++;
 if (numberLinesProcessed == 24){
   system("pause");
 }}

code.close();
inputFile.close();
 ifstream inputFile1("code.txt");
  if (!inputFile1)
  { cout << "The file data.txt could not be opened.";
 return 1; } 
  ofstream decode("decode.txt", ios::out);
 string line1;
 while (getline(inputFile1, line1, '/'))
 {int i = 1;


  stringstream convert(line1); 
    int x = 0; 
    convert >> x; 
long z = x;
char word = decodeLine(z);
decode << word;


    i++;}
 cout << "\nThe entire file has been displayed." << endl;
  inputFile1.close();
  decode.close();
 return 0;
}
