//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_ACTIVITIES_EXPANSIONACTIVATIONGROUP_HPP
#define FUML_SEMANTICS_ACTIVITIES_EXPANSIONACTIVATIONGROUP_HPP

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

namespace fUML
{
	class FUMLFactory;
}

//Forward Declaration for used types
namespace fUML::Semantics::Activities 
{
	class ActivityEdgeInstance;
}

namespace fUML::Semantics::Activities 
{
	class ActivityExecution;
}

namespace uml 
{
	class ActivityNode;
}

namespace fUML::Semantics::Activities 
{
	class ActivityNodeActivation;
}

namespace fUML::Semantics::Activities 
{
	class ActivityNodeActivationGroup;
}

namespace fUML::Semantics::Activities 
{
	class ExpansionRegionActivation;
}

namespace fUML::Semantics::Actions 
{
	class OutputPinActivation;
}

namespace fUML::Semantics::Actions 
{
	class StructuredActivityNodeActivation;
}

// base class includes
#include "fUML/Semantics/Activities/ActivityNodeActivationGroup.hpp"

// enum includes


//*********************************
namespace fUML::Semantics::Activities 
{
	
	class ExpansionActivationGroup:virtual public ActivityNodeActivationGroup
	{
		public:
 			ExpansionActivationGroup(const ExpansionActivationGroup &) {}
			ExpansionActivationGroup& operator=(ExpansionActivationGroup const&) = delete;

		protected:
			ExpansionActivationGroup(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ExpansionActivationGroup() {}

			//*********************************
			// Operations
			//*********************************
			 
			virtual std::weak_ptr<fUML::Semantics::Activities::ActivityExecution> getActivityExecution() const = 0;
			
			 
			virtual std::shared_ptr<fUML::Semantics::Activities::ActivityNodeActivation> getNodeActivation(std::shared_ptr<uml::ActivityNode>  node) = 0;
			
			 
			virtual void resume(std::shared_ptr<fUML::Semantics::Activities::ActivityNodeActivation>  activation) = 0;
			
			 
			virtual void suspend(std::shared_ptr<fUML::Semantics::Activities::ActivityNodeActivation>  activation) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			 
			virtual int getIndex() const = 0;
			
			 
			virtual void setIndex (int _index)= 0; 
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<Bag<fUML::Semantics::Actions::OutputPinActivation>> getGroupInputs() const = 0;
			
			
			
			virtual std::shared_ptr<Bag<fUML::Semantics::Actions::OutputPinActivation>> getGroupOutputs() const = 0;
			
			
			
			virtual std::shared_ptr<fUML::Semantics::Activities::ExpansionRegionActivation > getRegionActivation() const = 0;
			
			
			virtual void setRegionActivation(std::shared_ptr<fUML::Semantics::Activities::ExpansionRegionActivation> _regionActivation) = 0;
			
			
			virtual std::shared_ptr<Bag<fUML::Semantics::Actions::OutputPinActivation>> getRegionInputs() const = 0;
			
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			 
			int m_index = 0;
			
			
			//*********************************
			// Reference Members
			//*********************************
			
			mutable std::shared_ptr<Bag<fUML::Semantics::Actions::OutputPinActivation>> m_groupInputs;
			mutable std::shared_ptr<Bag<fUML::Semantics::Actions::OutputPinActivation>> m_groupOutputs;
			std::shared_ptr<fUML::Semantics::Activities::ExpansionRegionActivation > m_regionActivation;
			mutable std::shared_ptr<Bag<fUML::Semantics::Actions::OutputPinActivation>> m_regionInputs;

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
#endif /* end of include guard: FUML_SEMANTICS_ACTIVITIES_EXPANSIONACTIVATIONGROUP_HPP */
