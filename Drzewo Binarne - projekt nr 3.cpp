#include <iostream>
using namespace std;

class TreeNode{
	public:
		int value; //nasz klucz o wartości int
		TreeNode *left;
		TreeNode* right;


	TreeNode()
	{
		value = 0;
		left=NULL;
		right=NULL;
	}
	TreeNode(int v)
	{
	value = v;
	left= NULL;
	right= NULL;
	}
};

class BST{
	
	public:
		TreeNode *root;
		bool isEmpty()
		{
			if (root==NULL)
			return true;
			else
			return false;
		}
};


int main()
{
	int wybor;
	
	
	do
	{
		cout <<" Wybierz numer aby wykonac operacje "<< endl;

	cout << "1. Wstaw wartosc" << endl;
	cout << "2. Szukaj wartosc" << endl;
	cout << "3. Usun wartosc" << endl;
	cout << "4. Pokaz wyglad drzewa" << endl;
	cout << "0. Konczy program " <<endl;
		
		cin>> wybor;
		switch(wybor)
		{
		case 0:
			break;
		case 1:
			cout<<"Wstawianie" <<endl;
			// wybor wstawiania
			break;
		case 2:
			cout<<"Szukanie" <<endl;
			// wybor wstawiania
			break;
		case 3:
			cout<<"Usuwanie" <<endl;
			// wybor wstawiania
			break;
		case 4:
			cout<<"Wyglad drzewa" <<endl;
			// wybor wstawiania
			break;
		
	
	
	
	
	
	
	
		}
		
		} 
	
	while(wybor!=0);
	
	
	
	
	return 0;
}