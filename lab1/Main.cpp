// Daniel Semeniuk, 101368587, October 7th 2021

#include <iostream>
using namespace std;

// init function - sets up SDL and all of it's subsystems
void Init()
{
	cout << "Initializing game..." << endl;
}

// jhandleevents function - gets inputs (keys, controller, etc)
void HandleEvents() 
{
	cout << "Handling events..." << endl;
}

// update function - moves assets, calculates collision and physics
void Update()
{
	cout << "Processing..." << endl;
}

// render function - updates window with changes each frame
void Render()
{
	cout << "Rendering..." << endl;
}

// clean function - deinitialized SDL and deallocated memory
void Clean()
{
	cout << "Cleaning up..." << endl;
}

// run function - contains primary game
int Run()
{
	bool isRunning = true;
	char input;

	Init();
	while (isRunning)
	{
		HandleEvents(); // input
		Update(); // processing
		Render(); // output
		cout << "exit? [y/n]: ";
		cin >> input;
		if (input == 'y')
			isRunning = false;
	}
	Clean();

	return 0;
}


int main()
{
	return Run();
}