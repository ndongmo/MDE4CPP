//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_EXPRESSIONS_STRINGLITERALEXPSTRINGLITERALEXPIMPL_HPP
#define OCL_EXPRESSIONS_STRINGLITERALEXPSTRINGLITERALEXPIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../StringLiteralExp.hpp"

#include "ocl/Expressions/impl/ExpressionsFactoryImpl.hpp"
#include "ocl/Expressions/impl/PrimitiveLiteralExpImpl.hpp"

//*********************************
namespace ocl::Expressions 
{
	class StringLiteralExpImpl : virtual public PrimitiveLiteralExpImpl, virtual public StringLiteralExp 
	{
		public: 
			StringLiteralExpImpl(const StringLiteralExpImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			StringLiteralExpImpl& operator=(StringLiteralExpImpl const&);

		protected:
			friend class ocl::Expressions::ExpressionsFactoryImpl;
			StringLiteralExpImpl();
			virtual std::shared_ptr<StringLiteralExp> getThisStringLiteralExpPtr() const;
			virtual void setThisStringLiteralExpPtr(std::weak_ptr<StringLiteralExp> thisStringLiteralExpPtr);

			//Additional constructors for the containments back reference
			StringLiteralExpImpl(std::weak_ptr<ocl::Expressions::CallExp > par_appliedElement);


			//Additional constructors for the containments back reference
			StringLiteralExpImpl(std::weak_ptr<ecore::EObject > par_eContainer);


			//Additional constructors for the containments back reference
			StringLiteralExpImpl(std::weak_ptr<ocl::Expressions::IfExp > par_IfExp, const int reference_id);


			//Additional constructors for the containments back reference
			StringLiteralExpImpl(std::weak_ptr<ocl::Expressions::CollectionRange > par_CollectionRange, const int reference_id);


			//Additional constructors for the containments back reference


			//Additional constructors for the containments back reference
			StringLiteralExpImpl(std::weak_ptr<ocl::Expressions::Variable > par_initializedElement);


			//Additional constructors for the containments back reference


			//Additional constructors for the containments back reference
			StringLiteralExpImpl(std::weak_ptr<ocl::Expressions::LoopExp > par_loopBodyOwner);


			//Additional constructors for the containments back reference
			StringLiteralExpImpl(std::weak_ptr<ocl::Expressions::OperationCallExp > par_parentCall);


			//Additional constructors for the containments back reference
			StringLiteralExpImpl(std::weak_ptr<ocl::Expressions::NavigationCallExp > par_parentNav);


			//Additional constructors for the containments back reference


			//Additional constructors for the containments back reference
			StringLiteralExpImpl(std::weak_ptr<ocl::Expressions::ExpressionInOcl > par_topExpression);




		public:
			//destructor
			virtual ~StringLiteralExpImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			 
			virtual std::string getStringSymbol() const ;
			
			 
			virtual void setStringSymbol (std::string _stringSymbol); 
			
			
			//*********************************
			// Reference
			//*********************************
							
			
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
			std::weak_ptr<StringLiteralExp> m_thisStringLiteralExpPtr;
	};
}
#endif /* end of include guard: OCL_EXPRESSIONS_STRINGLITERALEXPSTRINGLITERALEXPIMPL_HPP */
