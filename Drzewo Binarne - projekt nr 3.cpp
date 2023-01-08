#include<iostream>
#define SPACE 10

using namespace std;

class TreeNode {
  public:
    int value;
  TreeNode * left;
  TreeNode * right;

  TreeNode() {
    value = 0;
    left = NULL;
    right = NULL;
  }
  TreeNode(int v) {
    value = v;
    left = NULL;
    right = NULL;
  }
};

class BST {
  public:
    TreeNode * root;
  BST() {
    root = NULL;
  }
  bool isTreeEmpty() {
    if (root == NULL) {
      return true;
    } else {
      return false;
    }
  }

   void insertNode(TreeNode * new_node) { // dodaje nowy węzeł do drzewa BST
    if (root == NULL) { // drzewo jest puste, więc nowy węzeł staje się korzeniem
      root = new_node; 
      cout << "Wartosc usawiona jako nowy korzen" << endl;
    } else { // drzewo nie jest puste, trzeba znaleźć odpowiednie miejsce dla nowego węzła
      TreeNode * temp = root;  // używamy wskaźnika temp do przechodzenia po drzewie
      while (temp != NULL) {
        if (new_node -> value == temp -> value) { // nowy węzeł ma już istniejący klucz, więc kończymy funkcję
         cout << "Wartosc juz istnieje, Podaj inna wartosc" << endl;
          return;
          // nowy węzeł ma mniejszy klucz niż temp i lewe dziecko temp jest puste, 
		  //więc możemy dodać nowy węzeł jako lewe dziecko temp          
        } else if ((new_node -> value < temp -> value) && (temp -> left == NULL)) {
          temp -> left = new_node;
          cout << "wartosc dodana do lewej galezi!!" << endl;
          break;
          // nowy węzeł ma mniejszy klucz niż temp, więc idziemy dalej w lewo          
        } else if (new_node -> value < temp -> value) {
          temp = temp -> left;
          // nowy węzeł ma większy klucz niż temp i prawe dziecko temp jest puste, 
		  //więc możemy dodać nowy węzeł jako prawe dziecko temp          
        } else if ((new_node -> value > temp -> value) && (temp -> right == NULL)) {
          temp -> right = new_node;
          cout << "wartosc dodana do prawej galezi!!" << endl;
          break; //koniec pętli
        } else { // nowy węzeł ma większy klucz niż temp, więc idziemy dalej w prawo
          temp = temp -> right;
        }
      }
    }
  }

 void print2D(TreeNode *r, int space)
{
	if (r == NULL) //
	return;
	space += SPACE; // Zwiekszanie dystansu pomiedzy poziomami
	print2D(r->right, space);
	cout <<endl;
	for (int i = SPACE; i <space; i++) //pokaz obecne struktury
	cout << " ";
	cout << r->value<<"\n";
	print2D(r->left, space);
}
};

int main() {
  BST obj;
  int wybor, val;

  do
	{
	cout <<" Wybierz numer aby wykonac operacje "<< endl;

	cout << "1. Wstaw wartosc" << endl;
	cout << "2. Szukaj wartosc" << endl;
	cout << "3. Usun wartosc" << endl;
	cout << "4. Pokaz wyglad drzewa" << endl;
	cout << "0. Konczy program " <<endl;
		
	cin>> wybor;
 
    //Node n1;
    TreeNode * new_node = new TreeNode();

    switch (wybor) {
    case 0:
      break;
    case 1:
      	cout<<"Wstawianie" <<endl;
			cout<<"Podaj wartosc jaka chcesz dodac: " <<endl;
			cin >> val;
			new_node->value = val;
			obj.insertNode(new_node);
			cout<< endl;
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
			obj.print2D(obj.root,5);
			break;
    }

  } while (wybor != 0);

  return 0;
}