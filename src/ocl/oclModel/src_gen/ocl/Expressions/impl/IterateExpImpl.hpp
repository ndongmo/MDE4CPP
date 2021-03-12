//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_EXPRESSIONS_ITERATEEXPITERATEEXPIMPL_HPP
#define OCL_EXPRESSIONS_ITERATEEXPITERATEEXPIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../IterateExp.hpp"

#include "ocl/Expressions/impl/ExpressionsFactoryImpl.hpp"
#include "ocl/Expressions/impl/LoopExpImpl.hpp"

//*********************************
namespace ocl::Expressions 
{
	class IterateExpImpl : virtual public LoopExpImpl, virtual public IterateExp 
	{
		public: 
			IterateExpImpl(const IterateExpImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			IterateExpImpl& operator=(IterateExpImpl const&);

		protected:
			friend class ocl::Expressions::ExpressionsFactoryImpl;
			IterateExpImpl();
			virtual std::shared_ptr<IterateExp> getThisIterateExpPtr() const;
			virtual void setThisIterateExpPtr(std::weak_ptr<IterateExp> thisIterateExpPtr);

			//Additional constructors for the containments back reference
			IterateExpImpl(std::weak_ptr<ocl::Expressions::CallExp > par_appliedElement);


			//Additional constructors for the containments back reference
			IterateExpImpl(std::weak_ptr<ocl::Expressions::IfExp > par_IfExp, const int reference_id);


			//Additional constructors for the containments back reference
			IterateExpImpl(std::weak_ptr<ocl::Expressions::CollectionRange > par_CollectionRange, const int reference_id);


			//Additional constructors for the containments back reference


			//Additional constructors for the containments back reference
			IterateExpImpl(std::weak_ptr<ocl::Expressions::Variable > par_initializedElement);


			//Additional constructors for the containments back reference


			//Additional constructors for the containments back reference
			IterateExpImpl(std::weak_ptr<ocl::Expressions::LoopExp > par_loopBodyOwner);


			//Additional constructors for the containments back reference
			IterateExpImpl(std::weak_ptr<ocl::Expressions::OperationCallExp > par_parentCall);


			//Additional constructors for the containments back reference
			IterateExpImpl(std::weak_ptr<ocl::Expressions::NavigationCallExp > par_parentNav);


			//Additional constructors for the containments back reference


			//Additional constructors for the containments back reference
			IterateExpImpl(std::weak_ptr<ocl::Expressions::ExpressionInOcl > par_topExpression);




		public:
			//destructor
			virtual ~IterateExpImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<ocl::Expressions::Variable > getResult() const ;
			
			
			virtual void setResult(std::shared_ptr<ocl::Expressions::Variable> _result) ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
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
			std::weak_ptr<IterateExp> m_thisIterateExpPtr;
	};
}
#endif /* end of include guard: OCL_EXPRESSIONS_ITERATEEXPITERATEEXPIMPL_HPP */
