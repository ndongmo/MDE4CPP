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
	class InputPinImpl :virtual public PinImpl, virtual public InputPin 
	{
		public: 
			InputPinImpl(const InputPinImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			InputPinImpl& operator=(InputPinImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			InputPinImpl();
			virtual std::shared_ptr<InputPin> getThisInputPinPtr();
			virtual void setThisInputPinPtr(std::weak_ptr<InputPin> thisInputPinPtr);

			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::CallOperationAction > par_callOperationAction);


			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::InvocationAction > par_invocationAction);


			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::StructuralFeatureAction > par_structuralFeatureAction);




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
				action.oclAsType(StructuredActivityNode).allOwnedNodes()->includesAll(outgoing.target) */ 
			virtual bool outgoing_edges_structured_only(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::weak_ptr<uml::CallOperationAction > getCallOperationAction() const ;
			
			/*!
			 */
			virtual void setCallOperationAction(std::shared_ptr<uml::CallOperationAction> _callOperationAction_callOperationAction) ;
			/*!
			 */
			virtual std::weak_ptr<uml::InvocationAction > getInvocationAction() const ;
			
			/*!
			 */
			virtual void setInvocationAction(std::shared_ptr<uml::InvocationAction> _invocationAction_invocationAction) ;
			/*!
			 */
			virtual std::weak_ptr<uml::StructuralFeatureAction > getStructuralFeatureAction() const ;
			
			/*!
			 */
			virtual void setStructuralFeatureAction(std::shared_ptr<uml::StructuralFeatureAction> _structuralFeatureAction_structuralFeatureAction) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
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
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<uml::UmlFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
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
