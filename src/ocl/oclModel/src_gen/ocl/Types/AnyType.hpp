//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_TYPES_ANYTYPE_HPP
#define OCL_TYPES_ANYTYPE_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations



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

namespace ocl
{
	class oclFactory;
}

//Forward Declaration for used types
namespace ecore 
{
	class EAnnotation;
}

namespace ecore 
{
	class EClassifier;
}

namespace ecore 
{
	class EObject;
}

namespace ecore 
{
	class EPackage;
}

namespace ecore 
{
	class ETypeParameter;
}

// base class includes
#include "ecore/EClassifier.hpp"

// enum includes


//*********************************
namespace ocl::Types 
{
	
	class AnyType:virtual public ecore::EClassifier
	{
		public:
 			AnyType(const AnyType &) {}

		protected:
			AnyType(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~AnyType() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<ecore::EClassifier > getObject() const = 0;
			
			
			virtual void setObject(std::shared_ptr<ecore::EClassifier> _object) = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			
			std::shared_ptr<ecore::EClassifier > m_object;

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
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: OCL_TYPES_ANYTYPE_HPP */
