//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_EXPRESSIONS_STATEEXPSTATEEXPIMPL_HPP
#define OCL_EXPRESSIONS_STATEEXPSTATEEXPIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../StateExp.hpp"

#include "ocl/Expressions/impl/ExpressionsFactoryImpl.hpp"
#include "ocl/Expressions/impl/OclExpressionImpl.hpp"

//*********************************
namespace ocl::Expressions 
{
	class StateExpImpl : virtual public OclExpressionImpl, virtual public StateExp 
	{
		public: 
			StateExpImpl(const StateExpImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			StateExpImpl& operator=(StateExpImpl const&);

		protected:
			friend class ocl::Expressions::ExpressionsFactoryImpl;
			StateExpImpl();
			virtual std::shared_ptr<StateExp> getThisStateExpPtr() const;
			virtual void setThisStateExpPtr(std::weak_ptr<StateExp> thisStateExpPtr);

			//Additional constructors for the containments back reference
			StateExpImpl(std::weak_ptr<ocl::Expressions::CallExp > par_appliedElement);


			//Additional constructors for the containments back reference
			StateExpImpl(std::weak_ptr<ecore::EObject > par_eContainer);


			//Additional constructors for the containments back reference
			StateExpImpl(std::weak_ptr<ocl::Expressions::IfExp > par_IfExp, const int reference_id);


			//Additional constructors for the containments back reference
			StateExpImpl(std::weak_ptr<ocl::Expressions::CollectionRange > par_CollectionRange, const int reference_id);


			//Additional constructors for the containments back reference


			//Additional constructors for the containments back reference
			StateExpImpl(std::weak_ptr<ocl::Expressions::Variable > par_initializedElement);


			//Additional constructors for the containments back reference


			//Additional constructors for the containments back reference
			StateExpImpl(std::weak_ptr<ocl::Expressions::LoopExp > par_loopBodyOwner);


			//Additional constructors for the containments back reference
			StateExpImpl(std::weak_ptr<ocl::Expressions::OperationCallExp > par_parentCall);


			//Additional constructors for the containments back reference
			StateExpImpl(std::weak_ptr<ocl::Expressions::NavigationCallExp > par_parentNav);


			//Additional constructors for the containments back reference


			//Additional constructors for the containments back reference
			StateExpImpl(std::weak_ptr<ocl::Expressions::ExpressionInOcl > par_topExpression);




		public:
			//destructor
			virtual ~StateExpImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<uml::State > getReferredState() const ;
			
			
			virtual void setReferredState(std::shared_ptr<uml::State> _referredState) ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			
			virtual std::shared_ptr<Union<ecore::EObject>> getEContens() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<StateExp> m_thisStateExpPtr;
	};
}
#endif /* end of include guard: OCL_EXPRESSIONS_STATEEXPSTATEEXPIMPL_HPP */
