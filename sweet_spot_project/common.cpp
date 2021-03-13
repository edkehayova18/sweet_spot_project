#include "common.h"
#include "dataTypes.h"
#include <chrono>
#include <thread>

using namespace std;

void wait(int delay)
{
	if (ANIMATION_ENABLED)
	{
		this_thread::sleep_for(chrono::milliseconds(delay));
	}
}

