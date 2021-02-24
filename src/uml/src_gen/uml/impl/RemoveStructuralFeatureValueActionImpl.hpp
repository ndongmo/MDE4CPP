//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_REMOVESTRUCTURALFEATUREVALUEACTIONREMOVESTRUCTURALFEATUREVALUEACTIONIMPL_HPP
#define UML_REMOVESTRUCTURALFEATUREVALUEACTIONREMOVESTRUCTURALFEATUREVALUEACTIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../RemoveStructuralFeatureValueAction.hpp"

#include "uml/impl/WriteStructuralFeatureActionImpl.hpp"

//*********************************
namespace uml 
{
	class RemoveStructuralFeatureValueActionImpl : virtual public WriteStructuralFeatureActionImpl, virtual public RemoveStructuralFeatureValueAction 
	{
		public: 
			RemoveStructuralFeatureValueActionImpl(const RemoveStructuralFeatureValueActionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:
			RemoveStructuralFeatureValueActionImpl& operator=(RemoveStructuralFeatureValueActionImpl const&) = delete;

		protected:
			friend class umlFactoryImpl;
			RemoveStructuralFeatureValueActionImpl();
			virtual std::shared_ptr<RemoveStructuralFeatureValueAction> getThisRemoveStructuralFeatureValueActionPtr() const;
			virtual void setThisRemoveStructuralFeatureValueActionPtr(std::weak_ptr<RemoveStructuralFeatureValueAction> thisRemoveStructuralFeatureValueActionPtr);

			//Additional constructors for the containments back reference
			RemoveStructuralFeatureValueActionImpl(std::weak_ptr<uml::Activity> par_activity);
			//Additional constructors for the containments back reference
			RemoveStructuralFeatureValueActionImpl(std::weak_ptr<uml::StructuredActivityNode> par_inStructuredNode);
			//Additional constructors for the containments back reference
			RemoveStructuralFeatureValueActionImpl(std::weak_ptr<uml::Namespace> par_namespace);
			//Additional constructors for the containments back reference
			RemoveStructuralFeatureValueActionImpl(std::weak_ptr<uml::Element> par_owner);

		public:
			//destructor
			virtual ~RemoveStructuralFeatureValueActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			RemoveStructuralFeatureValueActions removing a value from ordered, non-unique StructuralFeatures must have a single removeAt InputPin and no value InputPin, if isRemoveDuplicates is false. The removeAt InputPin must be of type Unlimited Natural with multiplicity 1..1. Otherwise, the Action has a value InputPin and no removeAt InputPin.
			if structuralFeature.isOrdered and not structuralFeature.isUnique and  not isRemoveDuplicates then
			  value = null and
			  removeAt <> null and
			  removeAt.type = UnlimitedNatural and
			  removeAt.is(1,1)
			else
			  removeAt = null and value <> null
			endif
			*/
			 
			virtual bool removeAt_and_value(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) ;
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			Specifies whether to remove duplicates of the value in nonunique StructuralFeatures.
			<p>From package UML::Actions.</p>
			*/
			 
			virtual bool getIsRemoveDuplicates() const ;
			/*!
			Specifies whether to remove duplicates of the value in nonunique StructuralFeatures.
			<p>From package UML::Actions.</p>
			*/
			 
			virtual void setIsRemoveDuplicates (bool _isRemoveDuplicates);
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			An InputPin that provides the position of an existing value to remove in ordered, nonunique structural features. The type of the removeAt InputPin is UnlimitedNatural, but the value cannot be zero or unlimited.
			<p>From package UML::Actions.</p>
			*/
			
			virtual std::shared_ptr<uml::InputPin> getRemoveAt() const ;
			/*!
			An InputPin that provides the position of an existing value to remove in ordered, nonunique structural features. The type of the removeAt InputPin is UnlimitedNatural, but the value cannot be zero or unlimited.
			<p>From package UML::Actions.</p>
			*/
			
			virtual void setRemoveAt(std::shared_ptr<uml::InputPin>) ;
			
			
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
			The ordered set of OutputPins representing outputs from the Action.
			<p>From package UML::Actions.</p>
			*/
			
			virtual std::shared_ptr<SubsetUnion<uml::OutputPin, uml::Element>> getOutput() const ;/*!
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
			std::weak_ptr<RemoveStructuralFeatureValueAction> m_thisRemoveStructuralFeatureValueActionPtr;
	};
}
#endif /* end of include guard: UML_REMOVESTRUCTURALFEATUREVALUEACTIONREMOVESTRUCTURALFEATUREVALUEACTIONIMPL_HPP */
