#include<iostream>
#include<vector>
#include<iterator>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
	 cout<<"������һ����������Ctrl+Z������";
     istream_iterator<int>  inputIterator(cin);
	 istream_iterator<int>  end_of_stream;

	 vector<int>  intVector;
	 copy(inputIterator,end_of_stream,inserter(intVector,intVector.begin()));   //��������

	 sort(intVector.begin(),intVector.end(),greater<int>());	//��������
	 ostream_iterator<int>outputIterator(cout,"\t");
	
	 cout<<"���Ϊ��";
	 unique_copy(intVector.begin(),intVector.end(),outputIterator);
	 cout<<endl;

     return 0;
}