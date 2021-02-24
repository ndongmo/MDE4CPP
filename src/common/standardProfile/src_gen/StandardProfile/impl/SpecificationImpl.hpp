//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef STANDARDPROFILE_SPECIFICATION_SPECIFICATIONIMPL_HPP
#define STANDARDPROFILE_SPECIFICATION_SPECIFICATIONIMPL_HPP

#include <functional>

//Model includes
#include "../Specification.hpp"
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
	class SpecificationImpl : virtual public uml::StereotypeImpl, virtual public Specification
	{
		public: 
			SpecificationImpl(const SpecificationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;  
			SpecificationImpl& operator=(SpecificationImpl const&);

		protected:
			friend class StandardProfileFactoryImpl;
			//constructor
			SpecificationImpl();
			virtual std::shared_ptr<Specification> getThisSpecificationPtr();
			virtual void setThisSpecificationPtr(std::weak_ptr<Specification> thisSpecificationPtr);


		public:

			//destructor
			virtual ~SpecificationImpl();

			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			virtual std::weak_ptr<uml::Classifier> getBase_Classifier() const ;
			virtual void setBase_Classifier(std::weak_ptr<uml::Classifier> _base_Classifier);
			
			
			

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
			std::weak_ptr<Specification> m_thisSpecificationPtr;
			std::map<std::string,std::function<Any()>> m_getterMap;
			std::map<std::string,std::function<void(Any)>> m_setterMap;
			std::map<std::string,std::function<void()>> m_unsetterMap;
	};
}
#endif /* end of include guard: STANDARDPROFILE_SPECIFICATION_SPECIFICATIONIMPL_HPP */
