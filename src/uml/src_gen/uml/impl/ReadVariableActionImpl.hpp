//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_READVARIABLEACTIONREADVARIABLEACTIONIMPL_HPP
#define UML_READVARIABLEACTIONREADVARIABLEACTIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ReadVariableAction.hpp"

#include "uml/impl/VariableActionImpl.hpp"

//*********************************
namespace uml 
{
	class ReadVariableActionImpl :virtual public VariableActionImpl, virtual public ReadVariableAction 
	{
		public: 
			ReadVariableActionImpl(const ReadVariableActionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ReadVariableActionImpl& operator=(ReadVariableActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ReadVariableActionImpl();
			virtual std::shared_ptr<ReadVariableAction> getThisReadVariableActionPtr() const;
			virtual void setThisReadVariableActionPtr(std::weak_ptr<ReadVariableAction> thisReadVariableActionPtr);

			//Additional constructors for the containments back reference
			ReadVariableActionImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			ReadVariableActionImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			ReadVariableActionImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ReadVariableActionImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~ReadVariableActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The multiplicity of the variable must be compatible with the multiplicity of the output pin.
			variable.compatibleWith(result) */ 
			virtual bool compatible_multiplicity(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 The type and ordering of the result OutputPin are the same as the type and ordering of the variable.
			result.type =variable.type and 
			result.isOrdered = variable.isOrdered */ 
			virtual bool type_and_ordering(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The OutputPin on which the result values are placed.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::OutputPin > getResult() const ;
			
			/*!
			 The OutputPin on which the result values are placed.
			<p>From package UML::Actions.</p> */
			virtual void setResult(std::shared_ptr<uml::OutputPin> _result_result) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const ;/*!
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
			std::weak_ptr<ReadVariableAction> m_thisReadVariableActionPtr;
	};
}
#endif /* end of include guard: UML_READVARIABLEACTIONREADVARIABLEACTIONIMPL_HPP */
