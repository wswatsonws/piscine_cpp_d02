#ifndef _ADMIRAL_H_
# define _ADMIRAL_H_

#include <iostream>
#include <string>

namespace Federation
{
    namespace Starfleet
    {
      class Admiral;
    }
}

#include "Borg.hh"
#include "Federation.hh"
#include "Warpsystem.hh"

namespace Federation
{
  namespace Starfleet
  {
    class Admiral
    {
      std::string		_name;

    public:
      Admiral(std::string name);
      ~Admiral();

      bool		(Federation::Starfleet::Ship::*movePtr)(Destination);
      void		(Federation::Starfleet::Ship::*firePtr)(Borg::Ship*);

      void		fire(Federation::Starfleet::Ship*, Borg::Ship*);
      bool		move(Federation::Starfleet::Ship*, Destination);
    };
  }
}

#endif /* _ADMIRAL_H_ */
