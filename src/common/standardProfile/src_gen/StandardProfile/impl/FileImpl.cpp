#include "StandardProfile/impl/FileImpl.hpp"

#ifdef NDEBUG
  #define DEBUG_MESSAGE(a) /**/
#else
  #define DEBUG_MESSAGE(a) a
#endif

#include <iostream>


#include "abstractDataTypes/Any.hpp"
#include "abstractDataTypes/SubsetUnion.hpp"
#include "StandardProfile/StandardProfileFactory.hpp"
#include "StandardProfile/impl/StandardProfilePackageImpl.hpp"
#include "uml/Stereotype.hpp"

//Types included from attributes, operation parameters, imports and composite owner classes
#include "uml/Artifact.hpp"

//Packges and Factories included from types of attributes, operation parameters, imports and composite owner classes
#include "uml/umlFactory.hpp"
#include "uml/impl/umlPackageImpl.hpp"

//Packages of included Enumerations

//Includes of PluginFramework (if required)

//Includes of OpaqueBevaiors (if required)

//Includes from InstanceValues (if required)

//Includes from Ports typed by interfaces (if required)

//Includes from roles of ConnectorEnds (if required)

using namespace StandardProfile;

//*********************************
// Constructor / Destructor
//*********************************
FileImpl::FileImpl()
{
	#ifdef ADD_COUNT
		ADD_COUNT("FileImpl()");
	#endif

	DEBUG_MESSAGE(std::cout<<"File is created..."<<std::endl;)

	//***********************************
	// init Get Set
	//getter init
	m_getterMap.insert(std::pair<std::string,std::function<Any()>>("StandardProfile::File::base_Artifact",[this](){ return eAny(this->getBase_Artifact());}));
	
	m_setterMap.insert(std::pair<std::string,std::function<void(Any)>>("StandardProfile::File::base_Artifact",[this](Any object){this->setBase_Artifact(object->get<std::shared_ptr<uml::Artifact>>());}));
	
	m_unsetterMap.insert(std::pair<std::string,std::function<void()>>("StandardProfile::File::base_Artifact",[this](){m_base_Artifact = std::shared_ptr<uml::Artifact>(nullptr);}));
	 
}


FileImpl::~FileImpl()
{
	#ifdef SUB_COUNT
		SUB_COUNT("FileImpl()");
	#endif

	DEBUG_MESSAGE(std::cout<<"File is destroyed..."<<std::endl;)
}

FileImpl::FileImpl(const FileImpl & obj):FileImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy File "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	instantiate();
}

std::shared_ptr<ecore::EObject>  FileImpl::copy() const
{
	std::shared_ptr<FileImpl> element(new FileImpl(*this));
	element->setThisFilePtr(element);
	return element;
}


std::shared_ptr<uml::Class> FileImpl::getMetaClass()
{
	return StandardProfilePackageImpl::eInstance()->get_StandardProfile_File();
}

void FileImpl::instantiate()
{   
	
}

void FileImpl::destroy()
{	

	//Erase properties
	//deleting property base_Artifact
	m_base_Artifact.reset();
	
	//Erase back reference to owner
}

//*********************************
// Attribute Setter Getter
//*********************************
void FileImpl::setBase_Artifact(std::weak_ptr<uml::Artifact> _base_Artifact)
{
	m_base_Artifact = _base_Artifact;
}
std::weak_ptr<uml::Artifact> FileImpl::getBase_Artifact() const 
{
	return m_base_Artifact;
}

//*********************************
// Operations
//*********************************

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any FileImpl::get(std::shared_ptr<uml::Property> _property) const
{
	//TODO: still two times run through map (contains and [])
	std::string qName = _property->getQualifiedName();
	std::map<std::string, std::function<Any()>>::const_iterator iter = m_getterMap.find(qName);
    if(iter != m_getterMap.cend())
    {
        //invoke the getter function
        return iter->second();
    }
	return eAny(nullptr);
}

void FileImpl::set(std::shared_ptr<uml::Property> _property, Any value)
{
	//TODO: still two times run through map (contains and [])
	std::string qName = _property->getQualifiedName();
	std::map<std::string, std::function<void(Any)>>::iterator iter = m_setterMap.find(qName);
    if(iter != m_setterMap.end())
    {
        //invoke the getter function
        iter->second(value);
    }
}

void FileImpl::unset(std::shared_ptr<uml::Property> _property)
{
	//TODO: still two times run through map (contains and [])
	std::string qName = _property->getQualifiedName();
	std::map<std::string,std::function<void()>>::iterator iter = m_unsetterMap.find(qName);
    if(iter != m_unsetterMap.end())
    {
        //invoke the getter function
        iter->second();
    }
}


std::shared_ptr<File> FileImpl::getThisFilePtr()
{
	return m_thisFilePtr.lock();
}
void FileImpl::setThisFilePtr(std::weak_ptr<File> thisFilePtr)
{
	m_thisFilePtr = thisFilePtr;
	setThisStereotypePtr(thisFilePtr);
}
