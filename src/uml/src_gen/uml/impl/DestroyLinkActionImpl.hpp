//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_DESTROYLINKACTIONDESTROYLINKACTIONIMPL_HPP
#define UML_DESTROYLINKACTIONDESTROYLINKACTIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../DestroyLinkAction.hpp"

#include "uml/impl/WriteLinkActionImpl.hpp"

//*********************************
namespace uml 
{
	class DestroyLinkActionImpl :virtual public WriteLinkActionImpl, virtual public DestroyLinkAction 
	{
		public: 
			DestroyLinkActionImpl(const DestroyLinkActionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			DestroyLinkActionImpl& operator=(DestroyLinkActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			DestroyLinkActionImpl();
			virtual std::shared_ptr<DestroyLinkAction> getThisDestroyLinkActionPtr() const;
			virtual void setThisDestroyLinkActionPtr(std::weak_ptr<DestroyLinkAction> thisDestroyLinkActionPtr);

			//Additional constructors for the containments back reference
			DestroyLinkActionImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			DestroyLinkActionImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			DestroyLinkActionImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			DestroyLinkActionImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~DestroyLinkActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const ;/*!
			The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p>
			*/
			
			virtual std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element>> getInput() const ;/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			The Element that owns this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const ; 
			 
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
			std::weak_ptr<DestroyLinkAction> m_thisDestroyLinkActionPtr;
	};
}
#endif /* end of include guard: UML_DESTROYLINKACTIONDESTROYLINKACTIONIMPL_HPP */
