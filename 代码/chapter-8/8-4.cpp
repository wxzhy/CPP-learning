#include<iostream>
#include<vector>
#include<iterator>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
	 cout<<"请输入一组整数，以Ctrl+Z结束：";
     istream_iterator<int>  inputIterator(cin);
	 istream_iterator<int>  end_of_stream;

	 vector<int>  intVector;
	 copy(inputIterator,end_of_stream,inserter(intVector,intVector.begin()));   //输入数字

	 sort(intVector.begin(),intVector.end(),greater<int>());	//降序排列
	 ostream_iterator<int>outputIterator(cout,"\t");
	
	 cout<<"结果为：";
	 unique_copy(intVector.begin(),intVector.end(),outputIterator);
	 cout<<endl;

     return 0;
}