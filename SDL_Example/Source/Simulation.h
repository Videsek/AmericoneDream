
#include <stdlib.h>	// For random tint
#include "Math.h"
#include "Render.h"

void Log(const char *fmt, ...);


class Simulation
{
public:
	static Simulation* GetSimulation() {return &singleton;}

	void Init();
	void Shutdown();

	void SimulateOneFrame(float deltaTime);	// A single logic step
	void DrawFrame();						// Draw all the sprites


private:
	Simulation();							// Force use of singleton

	static Simulation singleton;
};
