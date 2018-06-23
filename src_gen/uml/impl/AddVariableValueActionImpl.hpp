//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ADDVARIABLEVALUEACTIONADDVARIABLEVALUEACTIONIMPL_HPP
#define UML_ADDVARIABLEVALUEACTIONADDVARIABLEVALUEACTIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../AddVariableValueAction.hpp"

#include "uml/impl/WriteVariableActionImpl.hpp"

//*********************************
namespace uml 
{
	class AddVariableValueActionImpl :virtual public WriteVariableActionImpl, virtual public AddVariableValueAction 
	{
		public: 
			AddVariableValueActionImpl(const AddVariableValueActionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			AddVariableValueActionImpl& operator=(AddVariableValueActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			AddVariableValueActionImpl();
			virtual std::shared_ptr<AddVariableValueAction> getThisAddVariableValueActionPtr();
			virtual void setThisAddVariableValueActionPtr(std::weak_ptr<AddVariableValueAction> thisAddVariableValueActionPtr);

			//Additional constructors for the containments back reference
			AddVariableValueActionImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			AddVariableValueActionImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			AddVariableValueActionImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			AddVariableValueActionImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~AddVariableValueActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 AddVariableValueActions for ordered Variables must have a single InputPin for the insertion point with type UnlimtedNatural and multiplicity of 1..1 if isReplaceAll=false, otherwise the Action has no InputPin for the insertion point.
			if not variable.isOrdered then insertAt = null
			else 
			  not isReplaceAll implies
			  	insertAt<>null and 
			  	insertAt->forAll(type=UnlimitedNatural and is(1,1.oclAsType(UnlimitedNatural)))
			endif */ 
			virtual bool insertAt_pin(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			/*!
			 A value InputPin is required.
			value <> null */ 
			virtual bool required_value(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Specifies whether existing values of the Variable should be removed before adding the new value.
			<p>From package UML::Actions.</p> */ 
			virtual bool getIsReplaceAll() const ;
			
			/*!
			 Specifies whether existing values of the Variable should be removed before adding the new value.
			<p>From package UML::Actions.</p> */ 
			virtual void setIsReplaceAll (bool _isReplaceAll); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The InputPin that gives the position at which to insert a new value or move an existing value in ordered Variables. The type of the insertAt InputPin is UnlimitedNatural, but the value cannot be zero. It is omitted for unordered Variables.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin > getInsertAt() const ;
			
			/*!
			 The InputPin that gives the position at which to insert a new value or move an existing value in ordered Variables. The type of the insertAt InputPin is UnlimitedNatural, but the value cannot be zero. It is omitted for unordered Variables.
			<p>From package UML::Actions.</p> */
			virtual void setInsertAt(std::shared_ptr<uml::InputPin> _insertAt_insertAt) ;
							
			
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
			std::weak_ptr<AddVariableValueAction> m_thisAddVariableValueActionPtr;
	};
}
#endif /* end of include guard: UML_ADDVARIABLEVALUEACTIONADDVARIABLEVALUEACTIONIMPL_HPP */
