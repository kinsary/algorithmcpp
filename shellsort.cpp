
/************************************************************************/
/*    kinsary   2015 - 04 - 16  Ï£¶ûÅÅÐò                            */
/************************************************************************/
#include<iostream>

using namespace std;

void shellSort( int [], int n );
void printArray(int* pData, int count);

int main()
{
	int r[] = {98,76,109,34,67,190,80,12,14,89,1};  
//	int r[] = {4,2,3,6,9,4,7};  

    int n = sizeof(r)/sizeof(r[0]);  

	cout << "before sort array :  "; 
	printArray(r, n);

    shellSort(r, n);  

    cout << "after sort array  :  ";
	printArray(r, n); 
	
	return 0;
}

void shellSort( int r[], int n )
{
	
}

void printArray(int* pData, int count){  
    for (int i = 0; i< count; i++) {  
        cout << pData[i] << " ";  
    }  
    cout << endl;  
}  