//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_TYPES_MESSAGETYPE_HPP
#define OCL_TYPES_MESSAGETYPE_HPP

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
	class EOperation;
}

namespace ecore 
{
	class EPackage;
}

namespace ecore 
{
	class ETypeParameter;
}

namespace uml 
{
	class Signal;
}

// base class includes
#include "ecore/EClassifier.hpp"

// enum includes


//*********************************
namespace ocl::Types 
{
	
	class MessageType:virtual public ecore::EClassifier
	{
		public:
 			MessageType(const MessageType &) {}

		protected:
			MessageType(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~MessageType() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<ecore::EOperation > getReferredOperation() const = 0;
			
			
			virtual void setReferredOperation(std::shared_ptr<ecore::EOperation> _referredOperation) = 0;
			
			
			virtual std::shared_ptr<uml::Signal > getReferredSignal() const = 0;
			
			
			virtual void setReferredSignal(std::shared_ptr<uml::Signal> _referredSignal) = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			
			std::shared_ptr<ecore::EOperation > m_referredOperation;
			std::shared_ptr<uml::Signal > m_referredSignal;

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: OCL_TYPES_MESSAGETYPE_HPP */