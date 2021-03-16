// GIT-Labor
// main.h

////////////////////////////////////////////////////////////////////////////////
// Header-Dateien
#include <iostream>		// Header für die Standard-IO-Objekte (z.B. cout, cin)
#include <stdlib.h>
// TODO: Fügen Sie hier weitere benötigte Header-Dateien ein

using namespace std;	// Erspart den scope vor Objekte der
// C++-Standard-Bibliothek zu schreiben
// z.B. statt "std::cout" kann man "cout" schreiben

// Inkludieren Sie die Header-Datei Ihrer Klasse
#include "CCleanerBot.h"
#include "CDynPointArray.h"
// Hauptprogramm
// Dient als Testrahmen, von hier aus werden die Klassen aufgerufen
int main (void)
{
	// TODO: Fügen Sie ab hier Ihren Programmcode ein
	cout << "CleanerBot gestarted." << endl << endl;
bool programende = false;
	World a;
	CCleanerBot b;
	b.setWorld(&a);
	Room room;
	room.addWall(Wall(Point2D(-3.2,-2.2),Point2D(-3.2,2.2)));
	room.addWall(Wall(Point2D(-3.2,2.2),Point2D(3.2,2.2)));
	room.addWall(Wall(Point2D(3.2,2.2),Point2D(3.2,-2.2)));
	room.addWall(Wall(Point2D(3.2,-2.2),Point2D(-3.2,-2.2)));
	a.setRoom(room);
	while(programende == false){
		string s = a.getKey();
		if( s == "up"){
			//put the positions into m_track
			b.move(1);
		}
		else if(s == "down"){
			// turn only
			b.turn(180);
		}

		else if(s == "left"){
			b.turn(45);
		}
		else if(s == "right"){
			b.turn(-45);
		}
		else if(s == "r"){
			b.replay();
		}
		else if(s == "c"){
			b.clear();
		}
		else if(s == "e"){
			programende = true;
		}
	}

	//	b.move(1);
	//	b.turn(-90);
	//	b.move(1);
	//	b.turn(60);
	//	b.print();
	//	for(int i = 0;i < 100000; i++)
	//	{
	//		CDynPointArray *pArr=new CDynPointArray(300000);
	//		delete pArr;
	//	}


	//	CDynPointArray A1(5);
	//	for(int i = -1000; i <-980; i++){
	//		CPoint p(i,i);
	//		A1.put(p);
	//	}
	//	A1.print();
	//	cout << endl<<endl;
	//	CDynPointArray A2(A1);
	//	A2.print();







	return 0;
}
