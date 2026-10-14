#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class Track {
private:
    char* title;
    int duration;
    static int totalTracks;

public:
    Track(const char* trackTitle, int trackDuration) {
        duration = trackDuration;
        title = new char[strlen(trackTitle) + 1];
        strcpy_s(title, strlen(trackTitle) + 1, trackTitle);
        totalTracks++;
    }

    ~Track() {
        delete[] title;
        totalTracks--;
    }

    void play() const {
        cout << title << " " << duration << endl;
    }

    static void showTotal() {
        cout << totalTracks << endl;
    }
};

int Track::totalTracks = 0;