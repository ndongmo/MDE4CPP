//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_EXPRESSIONEXPRESSIONIMPL_HPP
#define UML_EXPRESSIONEXPRESSIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Expression.hpp"

#include "uml/impl/ValueSpecificationImpl.hpp"

//*********************************
namespace uml 
{
	class ExpressionImpl : virtual public ValueSpecificationImpl, virtual public Expression 
	{
		public: 
			ExpressionImpl(const ExpressionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			ExpressionImpl& operator=(ExpressionImpl const&);

		protected:
			friend class umlFactoryImpl;
			ExpressionImpl();
			virtual std::shared_ptr<Expression> getThisExpressionPtr() const;
			virtual void setThisExpressionPtr(std::weak_ptr<Expression> thisExpressionPtr);

			//Additional constructors for the containments back reference
			ExpressionImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ExpressionImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			ExpressionImpl(std::weak_ptr<uml::Package > par_owningPackage);


			//Additional constructors for the containments back reference
			ExpressionImpl(std::weak_ptr<uml::Slot > par_owningSlot);


			//Additional constructors for the containments back reference
			ExpressionImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);


			//Additional constructors for the containments back reference
			ExpressionImpl(std::weak_ptr<uml::ValueSpecificationAction > par_valueSpecificationAction);




		public:
			//destructor
			virtual ~ExpressionImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			The symbol associated with this node in the expression tree.
			<p>From package UML::Values.</p>
			*/
			 
			virtual std::string getSymbol() const ;
			
			/*!
			The symbol associated with this node in the expression tree.
			<p>From package UML::Values.</p>
			*/
			 
			virtual void setSymbol (std::string _symbol); 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			Specifies a sequence of operand ValueSpecifications.
			<p>From package UML::Values.</p>
			*/
			
			virtual std::shared_ptr<Subset<uml::ValueSpecification, uml::Element>> getOperand() const ;
			
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			The Element that owns this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
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
			std::weak_ptr<Expression> m_thisExpressionPtr;
	};
}
#endif /* end of include guard: UML_EXPRESSIONEXPRESSIONIMPL_HPP */
