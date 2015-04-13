#include <iostream>

using namespace std;

void bubbleSort(int* pData, int count);
void printArray(int* pData, int count); 

int main(int, char **, char **)
{
	int data[] = {10, 8, 9, 7, 4, 5, 19, 36, 8, 22, 12};  

	bubbleSort(data, 11);

    cout << "The sort result:" << endl;  
    printArray(data, 11);  


	return 0;
}

// for example in int
void bubbleSort(int* pData, int count) 
{
	int temp;
	for (int i = 1; i<count; i++)
	{
		for (int j = count - 1; j > i - 1; j--)
		{
			if (pData[j] < pData[j - 1])
			{
				temp = pData[j - 1];
				pData[j - 1] = pData[j];
				pData[j] = temp;
			}
		}
		cout << "The "<< i <<" round:" << endl;  
        printArray(pData, count);  
        cout << "----------------------------" << endl; 
	}

}

void printArray(int* pData, int count){  
    for (int i = 0; i< count; i++) {  
        cout << pData[i] << " ";  
    }  
    cout << endl;  
}  
  