#include  <iostream>
#include  <fstream>
#include  <iomanip>
using namespace std;

int  main( )
{
    fstream  outFile("numbers.txt", ios::out );
    int   nums[3][3] = { 1234, 3, 567, 34, 8, 6789, 124, 2345, 89 } ;

	for( int  row = 0 ; row < 3 ; row++ ) 	// 向文件输出三行
    {       
		for( int  col = 0 ; col < 3 ; col++ )
			outFile << setw(10) << nums[row][col] <<"  " ;
		outFile << endl ;
    }

    outFile.close( );

    return 0;
}