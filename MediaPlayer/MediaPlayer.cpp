// MediaPlayer.cpp : Defines the entry point for the application.
//

#include "MediaPlayer.h"
#include "Song.h"
#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

int main()
{
	struct Song song = {
		1,
		"some",
		"another"
	};
	std::list<Song> l = { 
		{1, "some1", "another1"},
		{2, "some2", "another2"},
		{3, "some3", "another3"},
		{4, "some4", "another4"},
	};

	std::for_each(l.begin(), l.end(), [](const Song n) { 
		cout << n.id << endl;
		cout << n.title << endl;
		cout << n.album << endl;
		std::cout << '\n';
	});


	return 0;
}
