//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_EXPRESSIONS_EXPRESSIONINOCLEXPRESSIONINOCLIMPL_HPP
#define OCL_EXPRESSIONS_EXPRESSIONINOCLEXPRESSIONINOCLIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ExpressionInOcl.hpp"

#include "ocl/Expressions/impl/ExpressionsFactoryImpl.hpp"
#include "ecore/impl/ETypedElementImpl.hpp"

//*********************************
namespace ocl::Expressions 
{
	class ExpressionInOclImpl : virtual public ecore::ETypedElementImpl, virtual public ExpressionInOcl 
	{
		public: 
			ExpressionInOclImpl(const ExpressionInOclImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			ExpressionInOclImpl& operator=(ExpressionInOclImpl const&);

		protected:
			friend class ocl::Expressions::ExpressionsFactoryImpl;
			ExpressionInOclImpl();
			virtual std::shared_ptr<ExpressionInOcl> getThisExpressionInOclPtr() const;
			virtual void setThisExpressionInOclPtr(std::weak_ptr<ExpressionInOcl> thisExpressionInOclPtr);



		public:
			//destructor
			virtual ~ExpressionInOclImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<ocl::Expressions::OclExpression > getBodyExpression() const ;
			
			
			virtual void setBodyExpression(std::shared_ptr<ocl::Expressions::OclExpression> _bodyExpression) ;
			
			
			virtual std::shared_ptr<ocl::Expressions::Variable > getContextVariable() const ;
			
			
			virtual void setContextVariable(std::shared_ptr<ocl::Expressions::Variable> _contextVariable) ;
			
			
			virtual std::shared_ptr<Bag<ocl::Expressions::Variable>> getParameterVariable() const ;
			
			
			
			virtual std::shared_ptr<ocl::Expressions::Variable > getResultVariable() const ;
			
			
			virtual void setResultVariable(std::shared_ptr<ocl::Expressions::Variable> _resultVariable) ;
			
							
			
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
			std::weak_ptr<ExpressionInOcl> m_thisExpressionInOclPtr;
	};
}
#endif /* end of include guard: OCL_EXPRESSIONS_EXPRESSIONINOCLEXPRESSIONINOCLIMPL_HPP */
