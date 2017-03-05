//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_ACTIVITYPARAMETERNODEACTIVATIONACTIVITYPARAMETERNODEACTIVATIONIMPL_HPP
#define FUML_ACTIVITYPARAMETERNODEACTIVATIONACTIVITYPARAMETERNODEACTIVATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../ActivityParameterNodeActivation.hpp"

#include "impl/ObjectNodeActivationImpl.hpp"

#include "ActivityNode.hpp"
#include "ActivityParameterNode.hpp"
#include "FUMLFactory.hpp"


//*********************************
namespace fUML 
{
	class ActivityParameterNodeActivationImpl :virtual public ObjectNodeActivationImpl, virtual public ActivityParameterNodeActivation 
	{
		public: 
			ActivityParameterNodeActivationImpl(const ActivityParameterNodeActivationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ActivityParameterNodeActivationImpl& operator=(ActivityParameterNodeActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ActivityParameterNodeActivationImpl();

		public:
			//destructor
			virtual ~ActivityParameterNodeActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void fire(std::shared_ptr<std::vector<std::shared_ptr<fUML::Token>>>  incomingTokens)  ;
			
			/*!
			 */ 
			virtual void clearTokens()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_ACTIVITYPARAMETERNODEACTIVATIONACTIVITYPARAMETERNODEACTIVATIONIMPL_HPP */

