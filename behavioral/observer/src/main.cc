#include "charger/charger.h"
#include "gui/gui.h"
#include <thread>
#include <chrono>
#include <random>

int main() {
	Charger charger;
	GUI gui(charger);

	std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 6);

    for (int i = 1; i <= 10; ++i) {
        int wait_time = dist(gen);
		if(wait_time % 2 == 0) {
			charger.Start();
		} else {
			charger.Stop();
		}

        std::this_thread::sleep_for(std::chrono::seconds(wait_time));
    }
}
