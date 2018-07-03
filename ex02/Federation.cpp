#include <iostream>
#include <string>
#include "Federation.hh"
#include "Warpsystem.hh"
#include "Destination.hh"

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp)
{
	this->_length = length;
	this->_width = width;
	this->_name = name;
	this->_maxWarp = maxWarp;
	this->_location = EARTH;
	this->_home = EARTH;
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
}

void	Federation::Starfleet::Ship::checkCore()
{
	std::cout << "USS " << this->_name << ": The core is " << ((this->core->checkReactor()->isStable()) ? "stable" : "unstable")  << " at the time." << std::endl;
}

Federation::Ship::Ship(int length, int width, std::string name)
{
	this->_length = length;
	this->_width = width;
	this->_name = name;
	this->_maxWarp = 1;
	this->_location = VULCAN;
	this->_home = VULCAN;
	this->core = NULL;
	std::cout << "The independant ship " << name << " just finished its construction. It is " << length << " m in length and " << width << " m in width." << std::endl;
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

Federation::Starfleet::Captain::Captain(std::string name)
{
	this->_name = name;
}

Federation::Starfleet::Captain::~Captain()
{
}

std::string	Federation::Starfleet::Captain::getName()
{
	return this->_name;
}

int	Federation::Starfleet::Captain::getAge()
{
	return this->_age;
}

void	Federation::Starfleet::Captain::setAge(int age)
{
	this->_age = age;
}

void	Federation::Starfleet::Ship::promote(Captain *captain)
{
	this->captain = captain;
	std::cout << captain->getName() <<": I'm glad to be the captain of the USS " << this->_name << "." << std::endl;
}

Federation::Starfleet::Ensign::Ensign(std::string name)
{
	this->_name = name;
	std::cout << "Ensign " << name << ", awaiting orders." << std::endl;
}

Federation::Starfleet::Ensign::~Ensign()
{
}

bool Federation::Starfleet::Ship::move(int warp, Destination d)
{
	if ((warp <= this->_maxWarp) && (d != this->_location) && (this->core->checkReactor()->isStable()))
	{
		this->_location = d;
		return true;
	}
	return false;
}

bool Federation::Starfleet::Ship::move(int warp)
{
	if ((warp <= this->_maxWarp) && (this->_home != this->_location) && (this->core->checkReactor()->isStable()))
	{
		this->_location = this->_home;
		return true;
	}
	return false;
}

bool Federation::Starfleet::Ship::move(Destination d)
{
	if ((d != this->_location) && (this->core->checkReactor()->isStable()))
	{
		this->_location = d;
		return true;
	}
	return false;
}

bool Federation::Starfleet::Ship::move()
{
	if ((this->_home != this->_location) && (this->core->checkReactor()->isStable()))
	{
		this->_location = this->_home;
		return true;
	}
	return false;
}

bool Federation::Ship::move(int warp, Destination d)
{
	if ((warp <= this->_maxWarp) && (d != this->_location) && (this->core->checkReactor()->isStable()))
	{
		this->_location = d;
		return true;
	}
	return false;
}

bool Federation::Ship::move(int warp)
{
	if ((warp <= this->_maxWarp) && (this->_home != this->_location) && (this->core->checkReactor()->isStable()))
	{
		this->_location = this->_home;
		return true;
	}
	return false;
}

bool Federation::Ship::move(Destination d)
{
	if ((this->_location != d) && (this->core->checkReactor()->isStable()))
	{
		this->_location = d;
		return true;
	}
	return false;
}

bool Federation::Ship::move()
{
	if ((this->_home != this->_location) && (this->core->checkReactor()->isStable()))
	{
		this->_location = this->_home;
		return true;
	}
	return false;
}
