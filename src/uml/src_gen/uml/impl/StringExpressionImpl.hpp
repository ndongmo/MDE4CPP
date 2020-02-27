//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_STRINGEXPRESSIONSTRINGEXPRESSIONIMPL_HPP
#define UML_STRINGEXPRESSIONSTRINGEXPRESSIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../StringExpression.hpp"

#include "uml/impl/ExpressionImpl.hpp"
#include "uml/impl/TemplateableElementImpl.hpp"

//*********************************
namespace uml 
{
	class StringExpressionImpl :virtual public ExpressionImpl, virtual public TemplateableElementImpl, virtual public StringExpression 
	{
		public: 
			StringExpressionImpl(const StringExpressionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			StringExpressionImpl& operator=(StringExpressionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			StringExpressionImpl();
			virtual std::shared_ptr<StringExpression> getThisStringExpressionPtr() const;
			virtual void setThisStringExpressionPtr(std::weak_ptr<StringExpression> thisStringExpressionPtr);

			//Additional constructors for the containments back reference
			StringExpressionImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			StringExpressionImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			StringExpressionImpl(std::weak_ptr<uml::StringExpression > par_owningExpression);


			//Additional constructors for the containments back reference
			StringExpressionImpl(std::weak_ptr<uml::Package > par_owningPackage);


			//Additional constructors for the containments back reference
			StringExpressionImpl(std::weak_ptr<uml::Slot > par_owningSlot);


			//Additional constructors for the containments back reference
			StringExpressionImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);


			//Additional constructors for the containments back reference
			StringExpressionImpl(std::weak_ptr<uml::ValueSpecificationAction > par_valueSpecificationAction);




		public:
			//destructor
			virtual ~StringExpressionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 All the operands of a StringExpression must be LiteralStrings
			operand->forAll (oclIsKindOf (LiteralString)) */ 
			virtual bool operands(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 If a StringExpression has sub-expressions, it cannot have operands and vice versa (this avoids the problem of having to define a collating sequence between operands and subexpressions).
			if subExpression->notEmpty() then operand->isEmpty() else operand->notEmpty() endif */ 
			virtual bool subexpressions(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The StringExpression of which this StringExpression is a subExpression.
			<p>From package UML::Values.</p> */
			virtual std::weak_ptr<uml::StringExpression > getOwningExpression() const ;
			
			/*!
			 The StringExpression of which this StringExpression is a subExpression.
			<p>From package UML::Values.</p> */
			virtual void setOwningExpression(std::shared_ptr<uml::StringExpression> _owningExpression_owningExpression) ;
			/*!
			 The StringExpressions that constitute this StringExpression.
			<p>From package UML::Values.</p> */
			virtual std::shared_ptr<Subset<uml::StringExpression, uml::Element>> getSubExpression() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ; 
			 
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
			std::weak_ptr<StringExpression> m_thisStringExpressionPtr;
	};
}
#endif /* end of include guard: UML_STRINGEXPRESSIONSTRINGEXPRESSIONIMPL_HPP */
