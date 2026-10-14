#include <iostream>
#include "Track.h"

using namespace std;

int main() {
    Track t("Song Name", 180);
    t.play();
    Track::showTotal();
    return 0;
}