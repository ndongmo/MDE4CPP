//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_INPUTPININPUTPINIMPL_HPP
#define UML_INPUTPININPUTPINIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../InputPin.hpp"

#include "uml/impl/PinImpl.hpp"

//*********************************
namespace uml 
{
	class InputPinImpl : virtual public PinImpl, virtual public InputPin 
	{
		public: 
			InputPinImpl(const InputPinImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:
			InputPinImpl& operator=(InputPinImpl const&) = delete;

		protected:
			friend class umlFactoryImpl;
			InputPinImpl();
			virtual std::shared_ptr<InputPin> getThisInputPinPtr() const;
			virtual void setThisInputPinPtr(std::weak_ptr<InputPin> thisInputPinPtr);

			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::Action> par_action);
			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::Activity> par_activity);
			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::AddStructuralFeatureValueAction> par_addStructuralFeatureValueAction);
			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::CallOperationAction> par_callOperationAction);
			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::DestroyObjectAction> par_destroyObjectAction);
			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::StructuredActivityNode> par_inStructuredNode);
			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::InvocationAction> par_invocationAction);
			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::Namespace> par_namespace);
			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::Element> par_owner);
			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::RemoveStructuralFeatureValueAction> par_removeStructuralFeatureValueAction);
			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::StructuralFeatureAction> par_structuralFeatureAction);
			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::WriteStructuralFeatureAction> par_writeStructuralFeatureAction);

		public:
			//destructor
			virtual ~InputPinImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			An InputPin may have outgoing ActivityEdges only when it is owned by a StructuredActivityNode, and these edges must target a node contained (directly or indirectly) in the owning StructuredActivityNode.
			outgoing->notEmpty() implies
				action<>null and
				action.oclIsKindOf(StructuredActivityNode) and
				action.oclAsType(StructuredActivityNode).allOwnedNodes()->includesAll(outgoing.target)
			*/
			 
			virtual bool outgoing_edges_structured_only(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) ;
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::weak_ptr<uml::Action> getAction() const ;
			
			
			virtual std::weak_ptr<uml::AddStructuralFeatureValueAction> getAddStructuralFeatureValueAction() const ;
			
			virtual void setAddStructuralFeatureValueAction(std::weak_ptr<uml::AddStructuralFeatureValueAction>) ;
			
			virtual std::weak_ptr<uml::CallOperationAction> getCallOperationAction() const ;
			
			virtual void setCallOperationAction(std::weak_ptr<uml::CallOperationAction>) ;
			
			virtual std::weak_ptr<uml::DestroyObjectAction> getDestroyObjectAction() const ;
			
			virtual void setDestroyObjectAction(std::weak_ptr<uml::DestroyObjectAction>) ;
			
			virtual std::weak_ptr<uml::InvocationAction> getInvocationAction() const ;
			
			virtual void setInvocationAction(std::weak_ptr<uml::InvocationAction>) ;
			
			virtual std::weak_ptr<uml::RemoveStructuralFeatureValueAction> getRemoveStructuralFeatureValueAction() const ;
			
			virtual void setRemoveStructuralFeatureValueAction(std::weak_ptr<uml::RemoveStructuralFeatureValueAction>) ;
			
			virtual std::weak_ptr<uml::StructuralFeatureAction> getStructuralFeatureAction() const ;
			
			virtual void setStructuralFeatureAction(std::weak_ptr<uml::StructuralFeatureAction>) ;
			
			virtual std::weak_ptr<uml::WriteStructuralFeatureAction> getWriteStructuralFeatureAction() const ;
			
			virtual void setWriteStructuralFeatureAction(std::weak_ptr<uml::WriteStructuralFeatureAction>) ;
			
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const ;/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			The Element that owns this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Element> getOwner() const ;/*!
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
			
			virtual void resolveReferences(const int featureID, std::vector<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<InputPin> m_thisInputPinPtr;
	};
}
#endif /* end of include guard: UML_INPUTPININPUTPINIMPL_HPP */
