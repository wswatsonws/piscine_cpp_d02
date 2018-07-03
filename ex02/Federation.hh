#ifndef _FEDERATION_H_
# define _FEDERATION_H_

#include <string>
#include "Warpsystem.hh"
#include "Destination.hh"

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
      Destination	_location;
      Destination	_home;

    public:
      Ship(int length, int width, std::string name, short maxWarp);
      ~Ship();

      void		setupCore(WarpSystem::Core *core);
      void		checkCore();
      void		promote(Captain *);

      bool		move(int warp, Destination d);
      bool		move(int warp);
      bool		move(Destination d);
      bool		move();
    };

  }

    class Ship
    {
      int		_length;
      int		_width;
      std::string	_name;
      short		_maxWarp;
      WarpSystem::Core	*core;
      Destination	_location;
      Destination	_home;

    public:
      Ship(int length, int width, std::string name);
      ~Ship();

      void		setupCore(WarpSystem::Core *core);
      void		checkCore();

      bool		move(int warp, Destination d);
      bool		move(int warp);
      bool		move(Destination d);
      bool		move();
    };
}

#endif /* _FEDERATION_H_ */
