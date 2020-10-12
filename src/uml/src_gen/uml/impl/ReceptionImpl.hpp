//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_RECEPTIONRECEPTIONIMPL_HPP
#define UML_RECEPTIONRECEPTIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Reception.hpp"

#include "uml/impl/BehavioralFeatureImpl.hpp"

//*********************************
namespace uml 
{
	class ReceptionImpl :virtual public BehavioralFeatureImpl, virtual public Reception 
	{
		public: 
			ReceptionImpl(const ReceptionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ReceptionImpl& operator=(ReceptionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ReceptionImpl();
			virtual std::shared_ptr<Reception> getThisReceptionPtr() const;
			virtual void setThisReceptionPtr(std::weak_ptr<Reception> thisReceptionPtr);

			//Additional constructors for the containments back reference
			ReceptionImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ReceptionImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~ReceptionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			A Reception has the same name as its signal
			name = signal.name
			*/
			 
			virtual bool same_name_as_signal(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			A Reception's parameters match the ownedAttributes of its signal by name, type, and multiplicity
			signal.ownedAttribute->size() = ownedParameter->size() and
			Sequence{1..signal.ownedAttribute->size()}->forAll( i | 
			    ownedParameter->at(i).direction = ParameterDirectionKind::_'in' and 
			    ownedParameter->at(i).name = signal.ownedAttribute->at(i).name and
			    ownedParameter->at(i).type = signal.ownedAttribute->at(i).type and
			    ownedParameter->at(i).lowerBound() = signal.ownedAttribute->at(i).lowerBound() and
			    ownedParameter->at(i).upperBound() = signal.ownedAttribute->at(i).upperBound()
			)
			*/
			 
			virtual bool same_structure_as_signal(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			The Signal that this Reception handles.
			<p>From package UML::SimpleClassifiers.</p>
			*/
			
			virtual std::shared_ptr<uml::Signal > getSignal() const ;
			
			/*!
			The Signal that this Reception handles.
			<p>From package UML::SimpleClassifiers.</p>
			*/
			
			virtual void setSignal(std::shared_ptr<uml::Signal> _signal) ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::NamedElement>> getMember() const ;/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement>> getOwnedMember() const ;/*!
			The Element that owns this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Element > getOwner() const ; 
			 
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
			std::weak_ptr<Reception> m_thisReceptionPtr;
	};
}
#endif /* end of include guard: UML_RECEPTIONRECEPTIONIMPL_HPP */
