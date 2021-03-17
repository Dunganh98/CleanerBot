// GIT-Labor
// main.h

////////////////////////////////////////////////////////////////////////////////
// Header-Dateien
#include <iostream>		// Header für die Standard-IO-Objekte (z.B. cout, cin)
#include <stdlib.h>
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
	bool programmende = false;
	World m_world;
	CCleanerBot m_bot;
	m_bot.setWorld(&m_world);
	Room room;
	room.addWall(Wall(Point2D(-3.2,-2.2),Point2D(-3.2,2.2)));
	room.addWall(Wall(Point2D(-3.2,2.2),Point2D(3.2,2.2)));
	room.addWall(Wall(Point2D(3.2,2.2),Point2D(3.2,-2.2)));
	room.addWall(Wall(Point2D(3.2,-2.2),Point2D(-3.2,-2.2)));
	a.setRoom(room);
	while(programmende == false){
		string input = m_world.getKey();
		if( input == "up"){
			//put the positions into m_track
			m_bot.move(1);
		}
		else if(input == "down"){
			// turn only
			m_bot.turn(180);
		}

		else if(input == "left"){
			m_bot.turn(45);
		}
		else if(input == "right"){
			m_bot.turn(-45);
		}
		else if(input == "r"){
			m_bot.replay();
		}
		else if(input == "c"){
			m_bot.clear();
		}
		else if(input == "e"){
			programmende = true;
		}
	}
	return 0;
}
