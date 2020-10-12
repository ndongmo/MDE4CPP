//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_EXPANSIONNODEEXPANSIONNODEIMPL_HPP
#define UML_EXPANSIONNODEEXPANSIONNODEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ExpansionNode.hpp"

#include "uml/impl/ObjectNodeImpl.hpp"

//*********************************
namespace uml 
{
	class ExpansionNodeImpl :virtual public ObjectNodeImpl, virtual public ExpansionNode 
	{
		public: 
			ExpansionNodeImpl(const ExpansionNodeImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ExpansionNodeImpl& operator=(ExpansionNodeImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ExpansionNodeImpl();
			virtual std::shared_ptr<ExpansionNode> getThisExpansionNodePtr() const;
			virtual void setThisExpansionNodePtr(std::weak_ptr<ExpansionNode> thisExpansionNodePtr);

			//Additional constructors for the containments back reference
			ExpansionNodeImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			ExpansionNodeImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			ExpansionNodeImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ExpansionNodeImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~ExpansionNodeImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			One of regionAsInput or regionAsOutput must be non-empty, but not both.
			regionAsInput->notEmpty() xor regionAsOutput->notEmpty()
			*/
			 
			virtual bool region_as_input_or_output(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			The ExpansionRegion for which the ExpansionNode is an input.
			<p>From package UML::Actions.</p>
			*/
			
			virtual std::shared_ptr<uml::ExpansionRegion > getRegionAsInput() const ;
			
			/*!
			The ExpansionRegion for which the ExpansionNode is an input.
			<p>From package UML::Actions.</p>
			*/
			
			virtual void setRegionAsInput(std::shared_ptr<uml::ExpansionRegion> _regionAsInput) ;
			
			/*!
			The ExpansionRegion for which the ExpansionNode is an output.
			<p>From package UML::Actions.</p>
			*/
			
			virtual std::shared_ptr<uml::ExpansionRegion > getRegionAsOutput() const ;
			
			/*!
			The ExpansionRegion for which the ExpansionNode is an output.
			<p>From package UML::Actions.</p>
			*/
			
			virtual void setRegionAsOutput(std::shared_ptr<uml::ExpansionRegion> _regionAsOutput) ;
			
							
			
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
			std::weak_ptr<ExpansionNode> m_thisExpansionNodePtr;
	};
}
#endif /* end of include guard: UML_EXPANSIONNODEEXPANSIONNODEIMPL_HPP */
