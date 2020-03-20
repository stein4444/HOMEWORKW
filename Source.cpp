#include <iostream>
#include <ctime>

using namespace std;



void showArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

}

int main() {
	
	srand(time(NULL));


	const int size = 100;
	int arr[size];
	int action = 0;
	int a = 0, b = 0;
	int index = 0;
	int count = 0;
	int sum = 0;
	int avarage = 0;
	int temp = 0;
	int indexPrew;


	do
	{

		cout << "1. Enter range : " << endl;
		cout << "2. Show array: " << endl;
		cout << "3. Find element of array: " << endl;
		cout << "4. Sort array " << endl;
		cout << "5. Find avarage number in array " << endl;
		cout << "6. find the numbers of elements of the heel five " << endl;
		cout << "7. Shift array" << endl;
		cout << "8. Exit" << endl;
		cout << endl;
		cout << "Pls select action: ";
		cin >> action;

		switch (action) {



			cin >> action;
		case 1:
			cout << "Enter start numb: ";
			cin >> a;
			cout << endl;
			cout << "Enter end number: ";
			cin >> b;
			for (int i = 0; i < size; i++) {
				arr[i] = rand() % b + a;

			}
			break;

		case 2:
			cout << "Your array: " << endl;
			showArr(arr, size);

			break;
		case 3:
			cout << "Enter your element: " << endl;
			cin >> index;
			cout << endl;
			//не паше хз чого)))
			for (int i = 0; i < size; i++) {
				arr[i] = i;
				if (index == arr[i]) {
					cout << "Element " << index << " is at index " << i << " in the array";
				}
				else 
					cout << "-1";
				
				}
			
			
			

			break;
		case 4:
			cout << "Sort array: " << endl;
			int sort;
			int type;
			cout << "Grow up - 1; down - 2 " << endl;
			cin >> sort;
			cout << "Type 1 - boubble, 2 - insert, 3 - select" << endl;
			cin >> type;
			if (sort == 1 && type == 1 ) {
				for (int i = 0; i < size - 1; i++) {
					for (int j = 0; j < size - 1; j++) {
						if (arr[j] > arr[j + 1]) {
							int temp = arr[j];
							arr[j] = arr[j + 1];
							arr[j + 1] = temp;
						}
						
					}
				}
				showArr(arr, size);
			}

			else if (sort == 1 && type == 2) {
				for (int i = 1; i < size; i++) {

					temp = arr[i]; 
					indexPrew = i - 1; 
					while (indexPrew >= 0 && arr[indexPrew] > temp) 
					{

						
						arr[indexPrew + 1] = arr[indexPrew];
						arr[indexPrew] = temp;
						indexPrew--;

					}
				}
				showArr(arr, size);
			}
			else if (sort == 1 && type == 3) {

				for (int i = 0; i < size; i++) {
					int temp = arr[0];
					for (int j = i + 1; j < size; j++) {
						if (arr[i] > arr[j]) {
							temp = arr[i];
							arr[i] = arr[j];
							arr[j] = temp;
						}
					}
				}
				showArr(arr, size);
			}

			else if (sort == 2 && type == 1) 
			{
				for (int i = 0; i < size - 1; i++) {
					for (int j = 0; j < size - 1; j++) {
						if (arr[j] < arr[j + 1]) {
							int temp = arr[j];
							arr[j] = arr[j + 1];
							arr[j + 1] = temp;
						}

					}
				}
				showArr(arr, size);
			}
			else if (sort == 2 && type == 2) 
			{
				for (int i = 1; i < size; i++) {

					temp = arr[i];
					indexPrew = i - 1;
					while (indexPrew >= 0 && arr[indexPrew] < temp)
					{



						arr[indexPrew + 1] = arr[indexPrew];
						arr[indexPrew] = temp;
						indexPrew--;
					}
				}
				showArr(arr, size);

			}
			else if (sort == 2 && type == 3) {

				for (int i = 0; i < size; i++) {
					int temp = arr[0];
					for (int j = i + 1; j < size; j++) {
						if (arr[i] < arr[j]) {
							temp = arr[i];
							arr[i] = arr[j];
							arr[j] = temp;
						}
					}
				}
				showArr(arr, size);
			}
			






			break;
		case 5:
			cout << "Evarage number of array: " << endl;

			for (int i = 0; i < size; i++) {
				sum += arr[i];

			}
			avarage = sum / size;
			cout << "avarage number: " << avarage << endl;

			break;
		case 6:
			cout << "Find number elements % 5: " << endl;
			for (int i = 0; i < size; i++)
			{
				if (arr[i] % 5 == 0) {
					count++;
				}
			}
			cout << "In array " << count << " elements %5" << endl;
			break;
		case 7:
			cout << "Your array: " << endl;


			break;
			{
		case 8:
			cout << "see you later BB" << endl;
			break;
		default:
			cout << "Invalid action" << endl;
			break;
			}
		}
	} while (action != 8);






	return 0;

}