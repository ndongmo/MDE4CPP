//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef STANDARDPROFILE_FILE_FILEIMPL_HPP
#define STANDARDPROFILE_FILE_FILEIMPL_HPP

#include <functional>

//Model includes
#include "../File.hpp"
#include "uml/impl/StereotypeImpl.hpp"
#include "uml/Property.hpp"

class AnyObject;
typedef std::shared_ptr<AnyObject> Any;

namespace uml
{
	class Property;
}

//*********************************
namespace StandardProfile
{
	class FileImpl : virtual public uml::StereotypeImpl, virtual public File
	{
		public: 
			FileImpl(const FileImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;  
			FileImpl& operator=(FileImpl const&);

		protected:
			friend class StandardProfileFactoryImpl;
			//constructor
			FileImpl();
			virtual std::shared_ptr<File> getThisFilePtr();
			virtual void setThisFilePtr(std::weak_ptr<File> thisFilePtr);


		public:

			//destructor
			virtual ~FileImpl();

			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			virtual std::weak_ptr<uml::Artifact> getBase_Artifact() const ;
			virtual void setBase_Artifact(std::weak_ptr<uml::Artifact> _base_Artifact);
			
			
			

		protected:
			virtual std::shared_ptr<uml::Class> getMetaClass();
			virtual void instantiate();
			virtual void destroy();

		public:
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			virtual Any get(std::shared_ptr<uml::Property> _property) const ;
			virtual void set(std::shared_ptr<uml::Property> _property, Any value) ;
			virtual void unset(std::shared_ptr<uml::Property> _property) ;
			
		
		private:
			std::weak_ptr<File> m_thisFilePtr;
			std::map<std::string,std::function<Any()>> m_getterMap;
			std::map<std::string,std::function<void(Any)>> m_setterMap;
			std::map<std::string,std::function<void()>> m_unsetterMap;
	};
}
#endif /* end of include guard: STANDARDPROFILE_FILE_FILEIMPL_HPP */
