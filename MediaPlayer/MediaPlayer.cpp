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

	int Id;

	std:cout << "Enter id to search";
	std::cout << '\n';
	std::cin >> Id;

	std::list<Song> songs = { 
		{1, "some1", "another1"},
		{2, "some2", "another2"},
		{3, "some3", "another3"},
		{4, "some4", "another4"},
	};

	auto n = std::find(songs.begin(), songs.end(), Id);
	cout << n->id;
	cout << n->title;
	cout << n->album;

	// std::for_each(songs.begin(), songs.end(), [](const Song n) { 
	// 	cout << n.id << endl;
	// 	cout << n.title << endl;
	// 	cout << n.album << endl;
	// 	std::cout << '\n';
	// });


	return 0;
}
