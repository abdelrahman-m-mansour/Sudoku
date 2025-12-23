
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main ()
{
  int sudoku[9][9];
  string file;
  cout<<"Enter the file name: ";
  cin>>file;
  ifstream inputFile (file);
  if (!inputFile)
	{
	  cerr << "Error: can't open the file: "<<file<< endl;
	  return 1;
	}
  for (int r = 0; r < 9; ++r)
	{
	  for (int c = 0; c < 9; ++c)
		{
		  if (!(inputFile >> sudoku[r][c]))
			{
			  cerr << "Error cant read data from file" << endl;
			  return 1;
			}
		}
	}
  inputFile.close ();
  cout<<endl;
  cout<<"Sudoku: "<<endl;
  for (int r = 0; r < 9; ++r)
	{
	  for (int c = 0; c < 9; ++c)
		{
		  cout<<sudoku[r][c]<<" ";
		}
		cout<<endl;
	}
 int sumC=0;
 int column=0;
 int row=0;
 int sumR=0;
 
  for (int r = 0; r < 9; ++r)
	{
	    sumR=0;
	  for (int c = 0; c < 9; ++c)
		{
		  sumR=sumR+sudoku[r][c];
		}
		if(sumR!=45)
		{
		 row=r; 
		 break;
		}
	}
	
for (int c = 0; c < 9; ++c)
	{
	    sumC=0;
	  for (int r = 0; r < 9; ++r)
		{
		  sumC=sumC+sudoku[r][c];
		}
		if(sumC!=45)
		{
		 column=c;
		 break;
		}
	}
	
	if(sumR==45 && sumC==45)
	{
	    cout<<endl;
	    cout<<"Sudoku is correct.";
	}
	else if (sumR!=45 && sumC==45)
	{
	    cout<<endl;
	    cout<<"Sudoku is NOT corrct."<<endl;
	    cout<<"Problem is at row. "<<row<<endl;
	}
	else if(sumR==45 && sumC!=45)
	{
	    cout<<endl;
	    cout<<"Sudoku is NOT corrct."<<endl;
	    cout<<"Problem is at column. "<<column<<endl;	    
	}
	else if (sumR!=45 && sumC!=45)
	{
	    cout<<endl;
	    cout<<"Sudoku is NOT corrct."<<endl;
	    cout<<"Problem is at row "<<row<<" and column "<<column<<"."<<endl;
	}


  return 0;
}
