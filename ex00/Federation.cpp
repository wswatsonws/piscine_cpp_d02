#include <iostream>
#include <string>
#include "Federation.hh"
#include "Warpsystem.hh"

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp)
{
	this->_length = length;
	this->_width = width;
	this->_name = name;
	this->_maxWarp = maxWarp;
	this->core = NULL;
	std::cout << "The ship USS " << name << " has been finished. It is " << length << " m in length and " << width << " m in width." << std::endl;
	std::cout << "It can go to Warp " << maxWarp << "!" << std::endl;
}

Federation::Starfleet::Ship::~Ship()
{
}

void	Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
	this->core = core;
	std::cout << "USS " << this->_name << ": The core is set." << std::endl;
	//USS [NAME]: The core is set.

}

void	Federation::Starfleet::Ship::checkCore()
{
	std::cout << "USS " << this->_name << ": The core is " << ((this->core->checkReactor()->isStable()) ? "stable" : "unstable")  << " at the time." << std::endl;
	//USS [NAME]: The core is [STABILITY] at the time.

}

Federation::Ship::Ship(int length, int width, std::string name)
{
	this->_length = length;
	this->_width = width;
	this->_name = name;
	this->_maxWarp = 1;
	this->core = NULL;
	std::cout << "The independant ship " << name << " just finished its construction. It is " << length << " m in length and " << width << " m in width." << std::endl;
	//The independant ship [NAME] just finished its construction. It is [LENGTH] m in length and [WIDTH] m in width.
}

Federation::Ship::~Ship()
{
}

void	Federation::Ship::setupCore(WarpSystem::Core *core)
{
	this->core = core;
	std::cout << this->_name << ": The core is set." << std::endl;
}

void	Federation::Ship::checkCore()
{
	std::cout << this->_name << ": The core is " << ((this->core->checkReactor()->isStable()) ? "stable" : "unstable")  << " at the time." << std::endl;
}
