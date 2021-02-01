//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSCS_SEMANTICS_ACTIONS_CS_CLEARSTRUCTURALFEATUREACTIONACTIVATION_HPP
#define PSCS_SEMANTICS_ACTIONS_CS_CLEARSTRUCTURALFEATUREACTIONACTIVATION_HPP


#include <memory>
#include <string>
// forward declarations


//*********************************
// generated Includes
#include <map> // used for Persistence
#include <vector> // used for Persistence
namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace PSCS
{
	class PSCSFactory;
}

//Forward Declaration for used types 
namespace fUML::Semantics::Actions 
{
	class InputPinActivation;
	class OutputPinActivation;
	class PinActivation;
}
namespace fUML::Semantics::Activities 
{
	class ActivityEdgeInstance;
	class ActivityNodeActivationGroup;
	class Token;
}
namespace fUML::Semantics::SimpleClassifiers 
{
	class StructuredValue;
}
namespace PSCS::Semantics::StructuredClassifiers 
{
	class CS_Link;
	class CS_Reference;
}
namespace fUML::Semantics::Values 
{
	class Value;
}
namespace uml 
{
	class Action;
	class ActivityNode;
	class StructuralFeature;
}

// base class includes
#include "fUML/Semantics/Actions/ClearStructuralFeatureActionActivation.hpp"

// enum includes



//*********************************
namespace PSCS::Semantics::Actions 
{
	
	class CS_ClearStructuralFeatureActionActivation: virtual public fUML::Semantics::Actions::ClearStructuralFeatureActionActivation
	{
		public:
 			CS_ClearStructuralFeatureActionActivation(const CS_ClearStructuralFeatureActionActivation &) {}
			CS_ClearStructuralFeatureActionActivation& operator=(CS_ClearStructuralFeatureActionActivation const&) = delete;

		protected:
			CS_ClearStructuralFeatureActionActivation(){}

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~CS_ClearStructuralFeatureActionActivation() {}

			//*********************************
			// Operations
			//*********************************
			 
			virtual void doAction() = 0;
			
			 
			virtual std::shared_ptr<Bag<PSCS::Semantics::StructuredClassifiers::CS_Link> > getLinksToDestroy(std::shared_ptr<fUML::Semantics::SimpleClassifiers::StructuredValue> value,std::shared_ptr<uml::StructuralFeature> feature) = 0;
			
			 
			virtual std::shared_ptr<Bag<fUML::Semantics::Values::Value> > getPotentialLinkEnds(std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference> context,std::shared_ptr<uml::StructuralFeature> feature) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			
			virtual std::shared_ptr<Union<fUML::Semantics::Actions::PinActivation>> getPinActivation() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::vector<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: PSCS_SEMANTICS_ACTIONS_CS_CLEARSTRUCTURALFEATUREACTIONACTIVATION_HPP */
