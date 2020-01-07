//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef STANDARDPROFILE_SEND_HPP
#define STANDARDPROFILE_SEND_HPP

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

namespace StandardProfile
{
	class StandardProfileFactory;
}

//Forward Declaration for used types
namespace uml 
{
	class Usage;
}

// base class includes

// enum includes

#include "ecore/EObject.hpp"

//*********************************
namespace StandardProfile 
{
	/*!
	 */
	class Send : virtual public ecore::EObject 

	{
		public:
 			Send(const Send &) {}
			Send& operator=(Send const&) = delete;

		protected:
			Send(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Send() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<uml::Usage > getBase_Usage() const = 0;
			
			/*!
			 */
			virtual void setBase_Usage(std::shared_ptr<uml::Usage> _base_Usage_base_Usage) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<uml::Usage > m_base_Usage;
			

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
#endif /* end of include guard: STANDARDPROFILE_SEND_HPP */
