//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_TYPETYPEIMPL_HPP
#define UML_TYPETYPEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Type.hpp"

#include "uml/impl/PackageableElementImpl.hpp"

//*********************************
namespace uml 
{
	class TypeImpl : virtual public PackageableElementImpl, virtual public Type 
	{
		public: 
			TypeImpl(const TypeImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			TypeImpl& operator=(TypeImpl const&);

		protected:
			friend class umlFactoryImpl;
			TypeImpl();
			virtual std::shared_ptr<Type> getThisTypePtr() const;
			virtual void setThisTypePtr(std::weak_ptr<Type> thisTypePtr);

			//Additional constructors for the containments back reference
			TypeImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			TypeImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			TypeImpl(std::weak_ptr<uml::Package > par_Package, const int reference_id);


			//Additional constructors for the containments back reference
			TypeImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);


			//Additional constructors for the containments back reference




		public:
			//destructor
			virtual ~TypeImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			The query conformsTo() gives true for a Type that conforms to another. By default, two Types do not conform to each other. This query is intended to be redefined for specific conformance situations.
			result = (false)
			<p>From package UML::CommonStructure.</p>
			*/
			 
			virtual bool conformsTo(std::shared_ptr<uml::Type>  other) ;
			
			/*!
			Creates a(n) (binary) association between this type and the specified other type, with the specified navigabilities, aggregations, names, lower bounds, and upper bounds, and owned by this type's nearest package.
			*/
			 
			virtual std::shared_ptr<uml::Association> createAssociation(bool end1IsNavigable,uml::AggregationKind end1Aggregation,std::string end1Name,int end1Lower,int end1Upper,std::shared_ptr<uml::Type>  end1Type,bool end2IsNavigable,uml::AggregationKind end2Aggregation,std::string end2Name,int end2Lower,int end2Upper) ;
			
			/*!
			Retrieves the associations in which this type is involved.
			*/
			 
			virtual std::shared_ptr<Bag<uml::Association> > getAssociations() ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			Specifies the owning Package of this Type, if any.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Package > getPackage() const ;
			
			/*!
			Specifies the owning Package of this Type, if any.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual void setPackage(std::shared_ptr<uml::Package> _package) ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
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
			std::weak_ptr<Type> m_thisTypePtr;
	};
}
#endif /* end of include guard: UML_TYPETYPEIMPL_HPP */
