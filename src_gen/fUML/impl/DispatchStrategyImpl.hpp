//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_DISPATCHSTRATEGYDISPATCHSTRATEGYIMPL_HPP
#define FUML_DISPATCHSTRATEGYDISPATCHSTRATEGYIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../DispatchStrategy.hpp"

#include "impl/SemanticStrategyImpl.hpp"



//*********************************
namespace fUML 
{
	class DispatchStrategyImpl :virtual public SemanticStrategyImpl, virtual public DispatchStrategy 
	{
		public: 
			DispatchStrategyImpl(const DispatchStrategyImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			DispatchStrategyImpl& operator=(DispatchStrategyImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			DispatchStrategyImpl();

		public:
			//destructor
			virtual ~DispatchStrategyImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Execution>  dispatch(std::shared_ptr<fUML::Object>  object,std::shared_ptr<uml::Operation>  operation)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::Behavior>  retrieveMethod(std::shared_ptr<fUML::Object>  object,std::shared_ptr<uml::Operation>  operation)  ;
			
			/*!
			 */ 
			virtual std::string retrieveName()  ;
			
			
			
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
#endif /* end of include guard: FUML_DISPATCHSTRATEGYDISPATCHSTRATEGYIMPL_HPP */

