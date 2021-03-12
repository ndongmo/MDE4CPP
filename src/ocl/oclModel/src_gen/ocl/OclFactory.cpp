#include "ocl/OclFactory.hpp"
#include "ocl/impl/OclFactoryImpl.hpp"

using namespace ocl;
				 
//static initialisation
std::shared_ptr<OclFactory> OclFactory::instance;

std::shared_ptr<OclFactory> OclFactory::eInstance()
{
	if(!instance)
	{
		//create a new Factoryimplementation
		instance.reset(OclFactoryImpl::create());
	}	
	return instance;
}
