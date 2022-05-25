// MediaPlayer.cpp : Defines the entry point for the application.
//

#include "MediaPlayer.h"
#include "Song.h"

using namespace std;

int main()
{
	struct Song song = {
		1,
		"some",
		"another"
	};

	cout << song.id << endl;
	cout << song.title << endl;
	cout << song.album << endl;

	return 0;
}
