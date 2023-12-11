#include <iostream>
using namespace std;
/*
CSC 134
M1HW1
Kent
8/30/23
*/
int main() {
  // Declaring Variables
  string movieTitle = "You are Umasou";
  int releaseYear = 2010;
  double boxOffice = 181;

  // Display Gneral information
  cout << "The movie " << movieTitle << " came out in " << releaseYear
       << ", and had a worldwide gross of around $" << boxOffice
       << " Million dollars." << endl;
  cout << endl; // Space

  // Display Movie Synopsis
  cout << "The movie follows a Tyrannosaurus rex named Heart raised as a "
          "herbivore, meeting and takes care of an orphaned baby Ankylosaurus, "
          "Umasou, all the while trying to fight his natural instincts of a "
          "predator and survive in the wild."
       << endl;
  cout << endl; // Space

  // Discuss interesting scene
  cout << "Throughout the movie, a certain song is sung by not only the main "
          "character, Heart, but is the background song of a great fight scene "
          "that brilliantly contradicts what is being shown to the audience. "
          "The beginning lyrics of the song goes: "
       << endl;
  cout << "-----------------" << endl; // Space
  cout << "Nen koro, Nen koro, Nen koro, ni" << endl
       << "Naku ko wa ooago tori ni karu" << endl
       << "Karada gotsugotsu, kiba gizagizo" << endl
       << "Naku ko wa ooago tori ni karu" << endl
       << "Nak ko wa dokoja ago tori ni karu." << endl;
  cout << "-----------------" << endl; // Space
  cout << "This translates to: " << endl;
  cout << "-----------------" << endl; // Space
  cout << "Big jaw comes to steal crying children" << endl
       << "A rugged body, jagged fangs" << endl
       << "Where are the crying children? Jaws come for them." << endl;
  cout << "-----------------" << endl; // Space

  cout << "What makes this scene all the more amazing is the fact that the "
          "song is talking about a t-rex, Big Jaw, stealing children, but the "
          "scene shown to the audience is quite the opposite. Heart, a t-rex "
          "is shown defending Umasou from a gang of other t-rexes. Taking "
          "place during the climax of the movie, this scene showed how much "
          "Heart had outgrown the stereotype of a vicious t-rex and surpassed "
          "his natural instincts of a predator."
       << endl;
}