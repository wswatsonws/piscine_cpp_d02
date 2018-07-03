#ifndef BORG_H_
#define BORG_H_

#include "Warpsystem.hh"

namespace Borg
{
  class Ship
  {
    int			_side;
    short		_maxWarp;
    WarpSystem::Core	*core;

  public:
      Ship();
      ~Ship();

    void		setupCore(WarpSystem::Core *);
    void		checkCore();
  };
}

#endif
