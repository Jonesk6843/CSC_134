#include <iostream>
#include "SinglyLinkedList.h"
using namespace std;
// Kent Jones
// Norris
// M6T3
// 12/6/23
// This program will create a linked list and add nodes to it.
int main() {
   // Declaring Variables
   LinkedList pokemonList;
   Node* node_pokemon1 = new Node ("Lucario");
   Node* node_pokemon2 = new Node ("Braixen");
   Node* node_pokemon3 = new Node ("Shinx");
   Node* node_pokemon4 = new Node ("Oshuwatt");
   Node* node_pokemon5 = new Node ("Gengar");
   Node* node_pokemon6 = new Node ("Zangoose");
   Node* node_pokemon2a = new Node ("Braixen"); // Singly ERROR

  cout << "Preschooler Lorenzo challenges you to a battle!" << endl;
  // append adds things to the tail
  // prepend adds them to the head
   pokemonList.Append(node_pokemon1);
   pokemonList.Append(node_pokemon2);
   pokemonList.Append(node_pokemon3);
   pokemonList.Append(node_pokemon4);
   pokemonList.Append(node_pokemon5);
   pokemonList.Append(node_pokemon6);

   // Output list
   cout << "Pokemon Team: ";
   pokemonList.PrintList(cout);

  // remove sixth pokemon and print
  pokemonList.RemoveAfter(node_pokemon5);
  cout << "Zangoose fainted!" << endl;
  cout << "Pokemon Team: ";
  pokemonList.PrintList(cout);

  // remove second pokemon and print
  pokemonList.RemoveAfter(node_pokemon1);
  cout << "Braixen fainted!" << endl;
  cout << "Pokemon Team: ";
  pokemonList.PrintList(cout);

  // remove third pokemon and print
  pokemonList.RemoveAfter(node_pokemon1);
  cout << "Shinx fainted!" << endl;
  cout << "Pokemon Team: ";
  pokemonList.PrintList(cout);

  // add braixen back in and print
  // We should be able to reuse nodes, but if we can't... [SinglyLinkedList error]
  pokemonList.InsertAfter(node_pokemon1, node_pokemon2a);
  cout << "Trainer Kent used a revive seed!" << endl;
  cout << "Pokemon Team: ";
  pokemonList.PrintList(cout);

  cout << "Garchomp fainted!" << endl;
  cout << "Trainer Kent wins!" << endl;
   // LinkedList destructor frees remaining nodes
}