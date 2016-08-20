#ifndef __CLSEMAPHORE_H__
#define __CLSEMAPHORE_H__

#include <stdint.h>
#include <algorithm>

#include "CLOS.h"
#include "CLUtils.h"

#include <hFramework.h>

namespace crosslib {
class Semaphore {
	hSemaphore semphr;
	
public:
	Semaphore()
	{
	}

	~Semaphore()
	{
	}

	/*Semaphore(Semaphore&& other)
	{
		semphr = other.semphr;
		other.semphr = 0;
	}
	Semaphore& operator=(Semaphore&& other)
	{
		semphr = other.semphr;
		other.semphr = 0;
		return *this;
	}*/

	bool give()
	{
		return semphr.give();
	}

	bool take(uint32_t timeout = 0xffffffff)
	{
		return semphr.take(timeout);
	}

	bool trytake()
	{
		return take(0);
	}

private:
	Semaphore(const Semaphore&) = delete;
};
}

#endif
