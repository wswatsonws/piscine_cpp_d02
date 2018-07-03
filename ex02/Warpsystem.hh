#ifndef WARPSYSTEM_H_
# define WARPSYSTEM_H_

#include <string>

namespace WarpSystem
{
	class QuantumReactor
	{
		bool		_stability;

		public:
		QuantumReactor();
		~QuantumReactor();

		bool		isStable();
		void		setStability(bool);
	};

	class Core
	{
		QuantumReactor	*_coreReactor;

		public:
		Core(QuantumReactor *);
		~Core();

		QuantumReactor	*checkReactor();
	};
}

#endif 
