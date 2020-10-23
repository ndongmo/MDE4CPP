//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_ETYPEPARAMETER_HPP
#define ECORE_ETYPEPARAMETER_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T> class Bag; 



//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace ecore
{
	class EcoreFactory;
}

//Forward Declaration for used types
namespace ecore 
{
	class EAnnotation;
}

namespace ecore 
{
	class EGenericType;
}

namespace ecore 
{
	class ENamedElement;
}

namespace ecore 
{
	class EObject;
}

// base class includes
#include "ecore/ENamedElement.hpp"

// enum includes


//*********************************
namespace ecore 
{
	
	class ETypeParameter:virtual public ENamedElement
	{
		public:
 			ETypeParameter(const ETypeParameter &) {}
			ETypeParameter& operator=(ETypeParameter const&) = delete;

		protected:
			ETypeParameter(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ETypeParameter() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<Bag<ecore::EGenericType>> getEBounds() const = 0;
			
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			
			mutable std::shared_ptr<Bag<ecore::EGenericType>> m_eBounds;

		public:
			//*********************************
			// Union Getter
			//*********************************
			
			virtual std::shared_ptr<Union<ecore::EObject>> getEContens() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: ECORE_ETYPEPARAMETER_HPP */
