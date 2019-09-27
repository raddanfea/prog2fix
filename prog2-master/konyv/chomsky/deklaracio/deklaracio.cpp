#include <iostream>

using namespace std;

int main()
{
int a = 5;
int *b = &a;
int &c = a;
int arr[8];
int *arr2[8];
int *d ();
int *(*e) ();
int (*v (int c)) (int a, int b);
int (*(*g) (int a)) (int b, int c);

cout << a << endl;
cout << *b << endl;
cout << &c << endl;
}

/*
• egész
• egészre mutató mutató
• egész referenciája
• egészek tömbje
• egészek tömbjének referenciája (nem az első elemé)
• egészre mutató mutatók tömbje
• egészre mutató mutatót visszaadó függvény
• egészre mutató mutatót visszaadó függvényre mutató mutató
• egészet visszaadó és két egészet kapó függvényre mutató mutatót visszaadó, egészet kapó függvény
• függvénymutató egy egészet visszaadó és két egészet kapó függvényre mutató mutatót visszaadó, egészet
kapó függvényre

*/
