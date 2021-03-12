//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_EXPRESSIONS_REALLITERALEXPREALLITERALEXPIMPL_HPP
#define OCL_EXPRESSIONS_REALLITERALEXPREALLITERALEXPIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../RealLiteralExp.hpp"

#include "ocl/Expressions/impl/ExpressionsFactoryImpl.hpp"
#include "ocl/Expressions/impl/NumericLiteralExpImpl.hpp"

//*********************************
namespace ocl::Expressions 
{
	class RealLiteralExpImpl : virtual public NumericLiteralExpImpl, virtual public RealLiteralExp 
	{
		public: 
			RealLiteralExpImpl(const RealLiteralExpImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			RealLiteralExpImpl& operator=(RealLiteralExpImpl const&);

		protected:
			friend class ocl::Expressions::ExpressionsFactoryImpl;
			RealLiteralExpImpl();
			virtual std::shared_ptr<RealLiteralExp> getThisRealLiteralExpPtr() const;
			virtual void setThisRealLiteralExpPtr(std::weak_ptr<RealLiteralExp> thisRealLiteralExpPtr);

			//Additional constructors for the containments back reference
			RealLiteralExpImpl(std::weak_ptr<ocl::Expressions::CallExp > par_appliedElement);


			//Additional constructors for the containments back reference
			RealLiteralExpImpl(std::weak_ptr<ocl::Expressions::IfExp > par_IfExp, const int reference_id);


			//Additional constructors for the containments back reference
			RealLiteralExpImpl(std::weak_ptr<ocl::Expressions::CollectionRange > par_CollectionRange, const int reference_id);


			//Additional constructors for the containments back reference


			//Additional constructors for the containments back reference
			RealLiteralExpImpl(std::weak_ptr<ocl::Expressions::Variable > par_initializedElement);


			//Additional constructors for the containments back reference


			//Additional constructors for the containments back reference
			RealLiteralExpImpl(std::weak_ptr<ocl::Expressions::LoopExp > par_loopBodyOwner);


			//Additional constructors for the containments back reference
			RealLiteralExpImpl(std::weak_ptr<ocl::Expressions::OperationCallExp > par_parentCall);


			//Additional constructors for the containments back reference
			RealLiteralExpImpl(std::weak_ptr<ocl::Expressions::NavigationCallExp > par_parentNav);


			//Additional constructors for the containments back reference


			//Additional constructors for the containments back reference
			RealLiteralExpImpl(std::weak_ptr<ocl::Expressions::ExpressionInOcl > par_topExpression);




		public:
			//destructor
			virtual ~RealLiteralExpImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			 
			virtual int getRealSymbol() const ;
			
			 
			virtual void setRealSymbol (int _realSymbol); 
			
			
			//*********************************
			// Reference
			//*********************************
							
			
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
			std::weak_ptr<RealLiteralExp> m_thisRealLiteralExpPtr;
	};
}
#endif /* end of include guard: OCL_EXPRESSIONS_REALLITERALEXPREALLITERALEXPIMPL_HPP */
