//This program asks the user to input an unsorted array //and will sort and display the array

//Selaction Sort protype 

void SelectionSort(int *&A, int n);

int main() { //main loop is used so the progrm does not exit instanly int select = 1; while (select != 0) {

	//Initialization of n and declaration of dynamic array A
	int n = 0;
	cout << "size of array: " << endl;
	cin >> n;
	int* A = new int[n];


	//initialization of array A
	for (int i = 0; i < n; i++) {

		cout << "please enter  integer in position #" << i << ": ";
		cin >> A[i];

	}


	//Outputs the unsorted array onto the screen
	cout << "Your array is: ";
	for (int i = 0; i < n; i++) {

		cout << A[i] << " ";

	}

	//Selection sort function call
	SelectionSort(A, n);

	//Outputs the sorted array onto the screen
	cout << "\nYour sorted array is: ";
	for (int i = 0; i < n; i++) {

		cout << A[i] << " ";

	}

	//Frees memory space from the heap
	delete[]A;

	cout << "\nInput 0 to exit the program" << endl;
	cin >> select;

}

return 0;
}

//Selection Sort definition void SelectionSort(int *&A, int n) {

for (int i = 0; i < n - 1; i++) {

	int maxInd = i;

	for (int j = i + 1; j < n ; j++) {

		if (A[j] < A[maxInd])
			maxInd = j;

		int temp = A[i];

		A[i] = A[maxInd];

		A[maxInd] = temp;


	}
}
}
