
#include "ocl/OclPlugin.hpp"
#include "ocl/impl/OclPluginImpl.hpp"

using namespace ocl;

//static initialisation
std::shared_ptr<MDE4CPPPlugin> OclPlugin::instance;

std::shared_ptr<MDE4CPPPlugin> OclPlugin::eInstance()
{
	if(instance==nullptr)
	{
		//create a new Singelton Instance
		instance.reset(new OclPluginImpl());
	}
	return instance;
}

std::shared_ptr<MDE4CPPPlugin> start()
{
	return OclPlugin::eInstance();
}
