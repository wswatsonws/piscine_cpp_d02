#ifndef FEDERATION_H_
# define FEDERATION_H_

#include <string>
#include "Warpsystem.hh"

namespace Federation
{
	namespace Starfleet
	{
	class Ensign
	{
      std::string	_name;

    public:
      Ensign(std::string name);
        ~Ensign();
    };

    class Captain
    {
      std::string	_name;
      int		_age;
    public:
      Captain(std::string name);
      ~Captain();

      std::string	getName();
      int		getAge();
      void		setAge(int age);
    };

    class Ship
    {
      int		_length;
      int		_width;
      std::string	_name;
      short		_maxWarp;
      WarpSystem::Core	*core;
      Captain		*captain;

    public:
      Ship(int length, int width, std::string name, short maxWarp);
        ~Ship();

      void		setupCore(WarpSystem::Core *core);
      void		checkCore();
      void		promote(Captain *);
    };

  }

    class Ship
    {
      int		_length;
      int		_width;
      std::string	_name;
      short		_maxWarp;
      WarpSystem::Core	*core;

    public:
      Ship(int length, int width, std::string name);
      ~Ship();

      void		setupCore(WarpSystem::Core *core);
      void		checkCore();
    };
}

#endif
