//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ADDSTRUCTURALFEATUREVALUEACTIONADDSTRUCTURALFEATUREVALUEACTIONIMPL_HPP
#define UML_ADDSTRUCTURALFEATUREVALUEACTIONADDSTRUCTURALFEATUREVALUEACTIONIMPL_HPP

//*********************************
// generated Includes
//Model includes
#include "../AddStructuralFeatureValueAction.hpp"

#include "uml/impl/WriteStructuralFeatureActionImpl.hpp"

//*********************************
namespace uml 
{
	class AddStructuralFeatureValueActionImpl : virtual public WriteStructuralFeatureActionImpl, virtual public AddStructuralFeatureValueAction 
	{
		public: 
			AddStructuralFeatureValueActionImpl(const AddStructuralFeatureValueActionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			AddStructuralFeatureValueActionImpl& operator=(AddStructuralFeatureValueActionImpl const&) = delete;

		protected:
			friend class umlFactoryImpl;
			AddStructuralFeatureValueActionImpl();
			virtual std::shared_ptr<AddStructuralFeatureValueAction> getThisAddStructuralFeatureValueActionPtr() const;
			virtual void setThisAddStructuralFeatureValueActionPtr(std::weak_ptr<AddStructuralFeatureValueAction> thisAddStructuralFeatureValueActionPtr);

			//Additional constructors for the containments back reference
			AddStructuralFeatureValueActionImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			AddStructuralFeatureValueActionImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			AddStructuralFeatureValueActionImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			AddStructuralFeatureValueActionImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~AddStructuralFeatureValueActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			AddStructuralFeatureActions adding a value to ordered StructuralFeatures must have a single InputPin for the insertion point with type UnlimitedNatural and multiplicity of 1..1 if isReplaceAll=false, and must have no Input Pin for the insertion point when the StructuralFeature is unordered.
			if not structuralFeature.isOrdered then insertAt = null
			else 
			  not isReplaceAll implies
			  	insertAt<>null and 
			  	insertAt->forAll(type=UnlimitedNatural and is(1,1.oclAsType(UnlimitedNatural)))
			endif
			*/
			 
			virtual bool insertAt_pin(Any diagnostics,std::map <  Any ,  Any > context) ;
			
			/*!
			A value InputPin is required.
			value<>null
			*/
			 
			virtual bool required_value(Any diagnostics,std::map <  Any ,  Any > context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			Specifies whether existing values of the StructuralFeature should be removed before adding the new value.
			<p>From package UML::Actions.</p>
			*/
			 
			virtual bool getIsReplaceAll() const ;
			
			/*!
			Specifies whether existing values of the StructuralFeature should be removed before adding the new value.
			<p>From package UML::Actions.</p>
			*/
			 
			virtual void setIsReplaceAll (bool _isReplaceAll);
			
			//*********************************
			// Reference
			//*********************************
			/*!
			The InputPin that gives the position at which to insert the value in an ordered StructuralFeature. The type of the insertAt InputPin is UnlimitedNatural, but the value cannot be zero. It is omitted for unordered StructuralFeatures.
			<p>From package UML::Actions.</p>
			*/
			
			virtual std::shared_ptr<uml::InputPin > getInsertAt() const ;
			
			/*!
			The InputPin that gives the position at which to insert the value in an ordered StructuralFeature. The type of the insertAt InputPin is UnlimitedNatural, but the value cannot be zero. It is omitted for unordered StructuralFeatures.
			<p>From package UML::Actions.</p>
			*/
			
			virtual void setInsertAt(std::shared_ptr<uml::InputPin> _insertAt) ;
			
							
			
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
			
			virtual void resolveReferences(const int featureID, std::vector<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<AddStructuralFeatureValueAction> m_thisAddStructuralFeatureValueActionPtr;
	};
}
#endif /* end of include guard: UML_ADDSTRUCTURALFEATUREVALUEACTIONADDSTRUCTURALFEATUREVALUEACTIONIMPL_HPP */
