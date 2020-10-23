//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_LITERALREALLITERALREALIMPL_HPP
#define UML_LITERALREALLITERALREALIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../LiteralReal.hpp"

#include "uml/impl/LiteralSpecificationImpl.hpp"

//*********************************
namespace uml 
{
	class LiteralRealImpl : virtual public LiteralSpecificationImpl, virtual public LiteralReal 
	{
		public: 
			LiteralRealImpl(const LiteralRealImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			LiteralRealImpl& operator=(LiteralRealImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			LiteralRealImpl();
			virtual std::shared_ptr<LiteralReal> getThisLiteralRealPtr() const;
			virtual void setThisLiteralRealPtr(std::weak_ptr<LiteralReal> thisLiteralRealPtr);

			//Additional constructors for the containments back reference
			LiteralRealImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			LiteralRealImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			LiteralRealImpl(std::weak_ptr<uml::Package > par_owningPackage);


			//Additional constructors for the containments back reference
			LiteralRealImpl(std::weak_ptr<uml::Slot > par_owningSlot);


			//Additional constructors for the containments back reference
			LiteralRealImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);


			//Additional constructors for the containments back reference
			LiteralRealImpl(std::weak_ptr<uml::ValueSpecificationAction > par_valueSpecificationAction);




		public:
			//destructor
			virtual ~LiteralRealImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			The query isComputable() is redefined to be true.
			result = (true)
			<p>From package UML::Values.</p>
			*/
			 
			virtual bool isComputable() ;
			
			/*!
			The query realValue() gives the value.
			result = (value)
			<p>From package UML::Values.</p>
			*/
			 
			virtual double realValue() ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			The specified Real value.
			<p>From package UML::Values.</p>
			*/
			 
			virtual double getValue() const ;
			
			/*!
			The specified Real value.
			<p>From package UML::Values.</p>
			*/
			 
			virtual void setValue (double _value); 
			
			
			//*********************************
			// Reference
			//*********************************
							
			
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
			std::weak_ptr<LiteralReal> m_thisLiteralRealPtr;
	};
}
#endif /* end of include guard: UML_LITERALREALLITERALREALIMPL_HPP */
