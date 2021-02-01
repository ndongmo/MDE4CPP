//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_ACTIVITIES_ACTIVITYEXECUTION_HPP
#define FUML_SEMANTICS_ACTIVITIES_ACTIVITYEXECUTION_HPP


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

namespace fUML
{
	class fUMLFactory;
}

//Forward Declaration for used types 
namespace fUML::Semantics::Activities 
{
	class ActivityNodeActivationGroup;
}
namespace fUML::Semantics::CommonBehavior 
{
	class ObjectActivation;
	class ParameterValue;
}
namespace fUML::Semantics::Loci 
{
	class Locus;
}
namespace fUML::Semantics::SimpleClassifiers 
{
	class FeatureValue;
}
namespace uml 
{
	class Activity;
	class Behavior;
	class Classifier;
}

// base class includes
#include "fUML/Semantics/CommonBehavior/Execution.hpp"

// enum includes



//*********************************
namespace fUML::Semantics::Activities 
{
	
	class ActivityExecution: virtual public fUML::Semantics::CommonBehavior::Execution
	{
		public:
 			ActivityExecution(const ActivityExecution &) {}
			ActivityExecution& operator=(ActivityExecution const&) = delete;

		protected:
			ActivityExecution(){}

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ActivityExecution() {}

			//*********************************
			// Operations
			//*********************************
			 
			virtual std::shared_ptr<fUML::Semantics::Values::Value> _copy() = 0;
			
			 
			virtual void execute() = 0;
			
			 
			virtual std::shared_ptr<fUML::Semantics::Values::Value> new_() = 0;
			
			 
			virtual void terminate() = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<fUML::Semantics::Activities::ActivityNodeActivationGroup > getActivationGroup() const = 0;
			
			
			virtual void setActivationGroup(std::shared_ptr<fUML::Semantics::Activities::ActivityNodeActivationGroup> _activationGroup) = 0;
			
			
			virtual std::shared_ptr<uml::Activity > getActivity() const = 0;
			
			
			virtual void setActivity(std::shared_ptr<uml::Activity> _activity) = 0;
			
			/*Additional Setter for 'Execution::behavior' redefined by reference 'activity'*/
			
			virtual void setBehavior(std::shared_ptr<uml::Behavior> _behavior) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			
			std::shared_ptr<fUML::Semantics::Activities::ActivityNodeActivationGroup > m_activationGroup;
			mutable std::shared_ptr<uml::Activity > m_activity;

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::vector<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: FUML_SEMANTICS_ACTIVITIES_ACTIVITYEXECUTION_HPP */
