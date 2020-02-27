//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_REDEFINABLEELEMENTREDEFINABLEELEMENTIMPL_HPP
#define UML_REDEFINABLEELEMENTREDEFINABLEELEMENTIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../RedefinableElement.hpp"

#include "uml/impl/NamedElementImpl.hpp"

//*********************************
namespace uml 
{
	class RedefinableElementImpl :virtual public NamedElementImpl, virtual public RedefinableElement 
	{
		public: 
			RedefinableElementImpl(const RedefinableElementImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			RedefinableElementImpl& operator=(RedefinableElementImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			RedefinableElementImpl();
			virtual std::shared_ptr<RedefinableElement> getThisRedefinableElementPtr() const;
			virtual void setThisRedefinableElementPtr(std::weak_ptr<RedefinableElement> thisRedefinableElementPtr);

			//Additional constructors for the containments back reference
			RedefinableElementImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			RedefinableElementImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~RedefinableElementImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The query isConsistentWith() specifies, for any two RedefinableElements in a context in which redefinition is possible, whether redefinition would be logically consistent. By default, this is false; this operation must be overridden for subclasses of RedefinableElement to define the consistency conditions.
			result = (false)
			redefiningElement.isRedefinitionContextValid(self)
			<p>From package UML::Classification.</p> */ 
			virtual bool isConsistentWith(std::shared_ptr<uml::RedefinableElement>  redefiningElement) ;
			
			/*!
			 The query isRedefinitionContextValid() specifies whether the redefinition contexts of this RedefinableElement are properly related to the redefinition contexts of the specified RedefinableElement to allow this element to redefine the other. By default at least one of the redefinition contexts of this element must be a specialization of at least one of the redefinition contexts of the specified element.
			result = (redefinitionContext->exists(c | c.allParents()->includesAll(redefinedElement.redefinitionContext)))
			<p>From package UML::Classification.</p> */ 
			virtual bool isRedefinitionContextValid(std::shared_ptr<uml::RedefinableElement>  redefinedElement) ;
			
			/*!
			 A RedefinableElement can only redefine non-leaf RedefinableElements.
			redefinedElement->forAll(re | not re.isLeaf) */ 
			virtual bool non_leaf_redefinition(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 A redefining element must be consistent with each redefined element.
			redefinedElement->forAll(re | re.isConsistentWith(self)) */ 
			virtual bool redefinition_consistent(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 At least one of the redefinition contexts of the redefining element must be a specialization of at least one of the redefinition contexts for each redefined element.
			redefinedElement->forAll(re | self.isRedefinitionContextValid(re)) */ 
			virtual bool redefinition_context_valid(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement.
			<p>From package UML::Classification.</p> */ 
			virtual bool getIsLeaf() const ;
			
			/*!
			 Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement.
			<p>From package UML::Classification.</p> */ 
			virtual void setIsLeaf (bool _isLeaf); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const ;/*!
			 The contexts that this element may be redefined from.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::Classifier>> getRedefinitionContext() const ; 
			 
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
			std::weak_ptr<RedefinableElement> m_thisRedefinableElementPtr;
	};
}
#endif /* end of include guard: UML_REDEFINABLEELEMENTREDEFINABLEELEMENTIMPL_HPP */
