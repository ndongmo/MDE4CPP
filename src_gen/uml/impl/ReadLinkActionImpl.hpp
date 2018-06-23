//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_READLINKACTIONREADLINKACTIONIMPL_HPP
#define UML_READLINKACTIONREADLINKACTIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ReadLinkAction.hpp"

#include "uml/impl/LinkActionImpl.hpp"

//*********************************
namespace uml 
{
	class ReadLinkActionImpl :virtual public LinkActionImpl, virtual public ReadLinkAction 
	{
		public: 
			ReadLinkActionImpl(const ReadLinkActionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ReadLinkActionImpl& operator=(ReadLinkActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ReadLinkActionImpl();
			virtual std::shared_ptr<ReadLinkAction> getThisReadLinkActionPtr();
			virtual void setThisReadLinkActionPtr(std::weak_ptr<ReadLinkAction> thisReadLinkActionPtr);

			//Additional constructors for the containments back reference
			ReadLinkActionImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			ReadLinkActionImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			ReadLinkActionImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ReadLinkActionImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~ReadLinkActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The multiplicity of the open Association end must be compatible with the multiplicity of the result OutputPin.
			self.openEnd()->first().compatibleWith(result) */ 
			virtual bool compatible_multiplicity(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			/*!
			 The open end must be navigable.
			self.openEnd()->first().isNavigable() */ 
			virtual bool navigable_open_end(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			/*!
			 Exactly one linkEndData specification (corresponding to the "open" end) must not have an value InputPin.
			self.openEnd()->size() = 1 */ 
			virtual bool one_open_end(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			/*!
			 Returns the ends corresponding to endData with no value InputPin. (A well-formed ReadLinkAction is constrained to have only one of these.)
			result = (endData->select(value=null).end->asOrderedSet())
			<p>From package UML::Actions.</p> */ 
			virtual std::shared_ptr<Bag<uml::Property> > openEnd()  ;
			
			/*!
			 The type and ordering of the result OutputPin are same as the type and ordering of the open Association end.
			self.openEnd()->forAll(type=result.type and isOrdered=result.isOrdered) */ 
			virtual bool type_and_ordering(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			/*!
			 Visibility of the open end must allow access from the object performing the action.
			let openEnd : Property = self.openEnd()->first() in
			  openEnd.visibility = VisibilityKind::public or 
			  endData->exists(oed | 
			    oed.end<>openEnd and 
			    (_'context' = oed.end.type or 
			      (openEnd.visibility = VisibilityKind::protected and 
			        _'context'.conformsTo(oed.end.type.oclAsType(Classifier))))) */ 
			virtual bool visibility(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The OutputPin on which the objects retrieved from the "open" end of those links whose values on other ends are given by the endData.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::OutputPin > getResult() const ;
			
			/*!
			 The OutputPin on which the objects retrieved from the "open" end of those links whose values on other ends are given by the endData.
			<p>From package UML::Actions.</p> */
			virtual void setResult(std::shared_ptr<uml::OutputPin> _result_result) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const ;/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element>> getInput() const ;/*!
			 The ordered set of OutputPins representing outputs from the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::OutputPin, uml::Element>> getOutput() const ;/*!
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
			std::weak_ptr<ReadLinkAction> m_thisReadLinkActionPtr;
	};
}
#endif /* end of include guard: UML_READLINKACTIONREADLINKACTIONIMPL_HPP */
