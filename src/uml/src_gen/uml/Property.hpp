//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_PROPERTY_HPP
#define UML_PROPERTY_HPP

#include <map>
#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T> class Bag; 
template<class T, class ... U> class Subset;
template<class T, class ... U> class SubsetUnion;


class AnyObject;
typedef std::shared_ptr<AnyObject> Any;

//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace uml
{
	class umlFactory;
}

//Forward Declaration for used types
namespace uml 
{
	class Association;
}

namespace uml 
{
	class Class;
}

namespace uml 
{
	class Classifier;
}

namespace uml 
{
	class Comment;
}

namespace uml 
{
	class ConnectableElement;
}

namespace uml 
{
	class ConnectorEnd;
}

namespace uml 
{
	class DataType;
}

namespace uml 
{
	class Dependency;
}

namespace uml 
{
	class Deployment;
}

namespace uml 
{
	class DeploymentTarget;
}

namespace uml 
{
	class Element;
}

namespace uml 
{
	class Interface;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class PackageableElement;
}

namespace uml 
{
	class Property;
}

namespace uml 
{
	class RedefinableElement;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class StructuralFeature;
}

namespace uml 
{
	class TemplateParameter;
}

namespace uml 
{
	class Type;
}

namespace uml 
{
	class ValueSpecification;
}

// base class includes
#include "uml/ConnectableElement.hpp"

#include "uml/DeploymentTarget.hpp"

#include "uml/StructuralFeature.hpp"

// enum includes
#include "uml/AggregationKind.hpp"

#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	A Property is a StructuralFeature. A Property related by ownedAttribute to a Classifier (other than an association) represents an attribute and might also represent an association end. It relates an instance of the Classifier to a value or set of values of the type of the attribute. A Property related by memberEnd to an Association represents an end of the Association. The type of the Property is the type of the end of the Association. A Property has the capability of being a DeploymentTarget in a Deployment relationship. This enables modeling the deployment to hierarchical nodes that have Properties functioning as internal parts.  Property specializes ParameterableElement to specify that a Property can be exposed as a formal template parameter, and provided as an actual parameter in a binding of a template.
	<p>From package UML::Classification.</p>
	*/
	
	class Property:virtual public ConnectableElement,virtual public DeploymentTarget,virtual public StructuralFeature
	{
		public:
 			Property(const Property &) {}

		protected:
			Property(){}


			//Additional constructors for the containments back reference

			Property(std::weak_ptr<uml::Property > par_associationEnd);

			//Additional constructors for the containments back reference

			Property(std::weak_ptr<uml::Class > par_class);

			//Additional constructors for the containments back reference

			Property(std::weak_ptr<uml::DataType > par_datatype);

			//Additional constructors for the containments back reference

			Property(std::weak_ptr<uml::Interface > par_interface);

			//Additional constructors for the containments back reference

			Property(std::weak_ptr<uml::Namespace > par_namespace);

			//Additional constructors for the containments back reference

			Property(std::weak_ptr<uml::Element > par_owner);

			//Additional constructors for the containments back reference

			Property(std::weak_ptr<uml::Association > par_owningAssociation);

			//Additional constructors for the containments back reference

			Property(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Property() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			A binding of a PropertyTemplateParameter representing an attribute must be to an attribute.
			(self.isAttribute()
			and (templateParameterSubstitution->notEmpty())
			implies (templateParameterSubstitution->forAll(ts |
			    ts.formal.oclIsKindOf(Property)
			    and ts.formal.oclAsType(Property).isAttribute())))
			*/
			 
			virtual bool binding_to_attribute(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			A Property can be a DeploymentTarget if it is a kind of Node and functions as a part in the internal structure of an encompassing Node.
			deployment->notEmpty() implies owner.oclIsKindOf(Node) and Node.allInstances()->exists(n | n.part->exists(p | p = self))
			*/
			 
			virtual bool deployment_target(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			A derived union is derived.
			isDerivedUnion implies isDerived
			*/
			 
			virtual bool derived_union_is_derived(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			A derived union is read only.
			isDerivedUnion implies isReadOnly
			*/
			 
			virtual bool derived_union_is_read_only(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			
			
			/*!
			Retrieves the other end of the (binary) association in which this property is a member end.
			*/
			 
			virtual std::shared_ptr<uml::Property> getOtherEnd() = 0;
			
			/*!
			The query isAttribute() is true if the Property is defined as an attribute of some Classifier.
			result = (not classifier->isEmpty())
			<p>From package UML::Classification.</p>
			*/
			 
			virtual bool isAttribute() = 0;
			
			/*!
			The value of isComposite is true only if aggregation is composite.
			result = (aggregation = AggregationKind::composite)
			<p>From package UML::Classification.</p>
			*/
			 
			virtual bool isComposite() = 0;
			
			/*!
			The query isNavigable() indicates whether it is possible to navigate across the property.
			result = (not classifier->isEmpty() or association.navigableOwnedEnd->includes(self))
			<p>From package UML::Classification.</p>
			*/
			 
			virtual bool isNavigable() = 0;
			
			 
			virtual bool isSetDefault() = 0;
			
			/*!
			A multiplicity on the composing end of a composite aggregation must not have an upper bound greater than 1.
			isComposite and association <> null implies opposite.upperBound() <= 1
			*/
			 
			virtual bool multiplicity_of_composite(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			All qualified Properties must be Association ends
			qualifier->notEmpty() implies association->notEmpty()
			*/
			 
			virtual bool qualified_is_association_end(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			A redefined Property must be inherited from a more general Classifier.
			(redefinedProperty->notEmpty()) implies
			  (redefinitionContext->notEmpty() and
			      redefinedProperty->forAll(rp|
			        ((redefinitionContext->collect(fc|
			          fc.allParents()))->asSet())->collect(c| c.allFeatures())->asSet()->includes(rp)))
			*/
			 
			virtual bool redefined_property_inherited(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			Sets the default value for this property to the specified Boolean value.
			*/
			 
			virtual void setBooleanDefaultValue(bool value) = 0;
			
			/*!
			Sets the default value for this property to the specified integer value.
			*/
			 
			virtual void setIntegerDefaultValue(int value) = 0;
			
			/*!
			Sets the navigability of this property as indicated.
			*/
			 
			virtual void setIsNavigable(bool isNavigable) = 0;
			
			/*!
			Sets the default value for this property to the null value.
			*/
			 
			virtual void setNullDefaultValue() = 0;
			
			/*!
			Sets the default value for this property to the specified real value.
			*/
			 
			virtual void setRealDefaultValue(double value) = 0;
			
			/*!
			Sets the default value for this property to the specified string value.
			*/
			 
			virtual void setStringDefaultValue(std::string value) = 0;
			
			/*!
			Sets the default value for this property to the specified unlimited natural value.
			*/
			 
			virtual void setUnlimitedNaturalDefaultValue(int value) = 0;
			
			/*!
			A Property may not subset a Property with the same name.
			subsettedProperty->forAll(sp | sp.name <> name)
			*/
			 
			virtual bool subsetted_property_names(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			The query subsettingContext() gives the context for subsetting a Property. It consists, in the case of an attribute, of the corresponding Classifier, and in the case of an association end, all of the Classifiers at the other ends.
			result = (if association <> null
			then association.memberEnd->excluding(self)->collect(type)->asSet()
			else 
			  if classifier<>null
			  then classifier->asSet()
			  else Set{} 
			  endif
			endif)
			<p>From package UML::Classification.</p>
			*/
			 
			virtual std::shared_ptr<Bag<uml::Type> > subsettingContext() = 0;
			
			/*!
			Subsetting may only occur when the context of the subsetting property conforms to the context of the subsetted property.
			subsettedProperty->notEmpty() implies
			  (subsettingContext()->notEmpty() and subsettingContext()->forAll (sc |
			    subsettedProperty->forAll(sp |
			      sp.subsettingContext()->exists(c | sc.conformsTo(c)))))
			*/
			 
			virtual bool subsetting_context_conforms(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			A subsetting Property may strengthen the type of the subsetted Property, and its upper bound may be less.
			subsettedProperty->forAll(sp |
			  self.type.conformsTo(sp.type) and
			    ((self.upperBound()->notEmpty() and sp.upperBound()->notEmpty()) implies
			      self.upperBound() <= sp.upperBound() ))
			*/
			 
			virtual bool subsetting_rules(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			If a Property is a classifier-owned end of a binary Association, its owner must be the type of the opposite end.
			(opposite->notEmpty() and owningAssociation->isEmpty()) implies classifier = opposite.type
			*/
			 
			virtual bool type_of_opposite_end(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			 
			virtual void unsetDefault() = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			Specifies the kind of aggregation that applies to the Property.
			<p>From package UML::Classification.</p>
			*/
			 
			virtual uml::AggregationKind getAggregation() const = 0;
			
			/*!
			Specifies the kind of aggregation that applies to the Property.
			<p>From package UML::Classification.</p>
			*/
			 
			virtual void setAggregation (uml::AggregationKind _aggregation)= 0; 
			 
			virtual std::string getDefault() const = 0;
			
			 
			virtual void setDefault (std::string _default)= 0; 
			/*!
			If isComposite is true, the object containing the attribute is a container for the object or value contained in the attribute. This is a derived value, indicating whether the aggregation of the Property is composite or not.
			<p>From package UML::Classification.</p>
			*/
			 
			virtual bool getIsComposite() const = 0;
			
			/*!
			If isComposite is true, the object containing the attribute is a container for the object or value contained in the attribute. This is a derived value, indicating whether the aggregation of the Property is composite or not.
			<p>From package UML::Classification.</p>
			*/
			 
			virtual void setIsComposite (bool _isComposite)= 0; 
			/*!
			Specifies whether the Property is derived, i.e., whether its value or values can be computed from other information.
			<p>From package UML::Classification.</p>
			*/
			 
			virtual bool getIsDerived() const = 0;
			
			/*!
			Specifies whether the Property is derived, i.e., whether its value or values can be computed from other information.
			<p>From package UML::Classification.</p>
			*/
			 
			virtual void setIsDerived (bool _isDerived)= 0; 
			/*!
			Specifies whether the property is derived as the union of all of the Properties that are constrained to subset it.
			<p>From package UML::Classification.</p>
			*/
			 
			virtual bool getIsDerivedUnion() const = 0;
			
			/*!
			Specifies whether the property is derived as the union of all of the Properties that are constrained to subset it.
			<p>From package UML::Classification.</p>
			*/
			 
			virtual void setIsDerivedUnion (bool _isDerivedUnion)= 0; 
			/*!
			True indicates this property can be used to uniquely identify an instance of the containing Class.
			<p>From package UML::Classification.</p>
			*/
			 
			virtual bool getIsID() const = 0;
			
			/*!
			True indicates this property can be used to uniquely identify an instance of the containing Class.
			<p>From package UML::Classification.</p>
			*/
			 
			virtual void setIsID (bool _isID)= 0; 
			
			//*********************************
			// Reference
			//*********************************
			/*!
			The Association of which this Property is a member, if any.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<uml::Association > getAssociation() const = 0;
			
			/*!
			The Association of which this Property is a member, if any.
			<p>From package UML::Classification.</p>
			*/
			
			virtual void setAssociation(std::shared_ptr<uml::Association> _association) = 0;
			
			/*!
			Designates the optional association end that owns a qualifier attribute.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::weak_ptr<uml::Property > getAssociationEnd() const = 0;
			
			/*!
			Designates the optional association end that owns a qualifier attribute.
			<p>From package UML::Classification.</p>
			*/
			
			virtual void setAssociationEnd(std::shared_ptr<uml::Property> _associationEnd) = 0;
			
			/*!
			The Class that owns this Property, if any.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::weak_ptr<uml::Class > getClass() const = 0;
			
			/*!
			The Class that owns this Property, if any.
			<p>From package UML::Classification.</p>
			*/
			
			virtual void setClass(std::shared_ptr<uml::Class> _class) = 0;
			
			/*!
			The DataType that owns this Property, if any.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::weak_ptr<uml::DataType > getDatatype() const = 0;
			
			/*!
			The DataType that owns this Property, if any.
			<p>From package UML::Classification.</p>
			*/
			
			virtual void setDatatype(std::shared_ptr<uml::DataType> _datatype) = 0;
			
			/*!
			A ValueSpecification that is evaluated to give a default value for the Property when an instance of the owning Classifier is instantiated.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<uml::ValueSpecification > getDefaultValue() const = 0;
			
			/*!
			A ValueSpecification that is evaluated to give a default value for the Property when an instance of the owning Classifier is instantiated.
			<p>From package UML::Classification.</p>
			*/
			
			virtual void setDefaultValue(std::shared_ptr<uml::ValueSpecification> _defaultValue) = 0;
			
			/*!
			The Interface that owns this Property, if any.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::weak_ptr<uml::Interface > getInterface() const = 0;
			
			/*!
			The Interface that owns this Property, if any.
			<p>From package UML::Classification.</p>
			*/
			
			virtual void setInterface(std::shared_ptr<uml::Interface> _interface) = 0;
			
			/*!
			In the case where the Property is one end of a binary association this gives the other end.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<uml::Property > getOpposite() const = 0;
			
			/*!
			In the case where the Property is one end of a binary association this gives the other end.
			<p>From package UML::Classification.</p>
			*/
			
			virtual void setOpposite(std::shared_ptr<uml::Property> _opposite) = 0;
			
			/*!
			The owning association of this property, if any.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::weak_ptr<uml::Association > getOwningAssociation() const = 0;
			
			/*!
			The owning association of this property, if any.
			<p>From package UML::Classification.</p>
			*/
			
			virtual void setOwningAssociation(std::shared_ptr<uml::Association> _owningAssociation) = 0;
			
			/*!
			An optional list of ordered qualifier attributes for the end.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<Subset<uml::Property, uml::Element>> getQualifier() const = 0;
			
			
			/*!
			The properties that are redefined by this property, if any.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<SubsetUnion<uml::Property, uml::RedefinableElement>> getRedefinedProperty() const = 0;
			
			
			/*!
			The properties of which this Property is constrained to be a subset, if any.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::Property>> getSubsettedProperty() const = 0;
			
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			Specifies the kind of aggregation that applies to the Property.
			<p>From package UML::Classification.</p>
			*/
			 
			uml::AggregationKind m_aggregation = AggregationKind::NONE;
			 
			std::string m_default = "";
			/*!
			If isComposite is true, the object containing the attribute is a container for the object or value contained in the attribute. This is a derived value, indicating whether the aggregation of the Property is composite or not.
			<p>From package UML::Classification.</p>
			*/
			 
			bool m_isComposite = false;
			/*!
			Specifies whether the Property is derived, i.e., whether its value or values can be computed from other information.
			<p>From package UML::Classification.</p>
			*/
			 
			bool m_isDerived = false;
			/*!
			Specifies whether the property is derived as the union of all of the Properties that are constrained to subset it.
			<p>From package UML::Classification.</p>
			*/
			 
			bool m_isDerivedUnion = false;
			/*!
			True indicates this property can be used to uniquely identify an instance of the containing Class.
			<p>From package UML::Classification.</p>
			*/
			 
			bool m_isID = false;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			The Association of which this Property is a member, if any.
			<p>From package UML::Classification.</p>
			*/
			
			std::shared_ptr<uml::Association > m_association;/*!
			Designates the optional association end that owns a qualifier attribute.
			<p>From package UML::Classification.</p>
			*/
			
			std::weak_ptr<uml::Property > m_associationEnd;/*!
			The Class that owns this Property, if any.
			<p>From package UML::Classification.</p>
			*/
			
			std::weak_ptr<uml::Class > m_class;/*!
			The DataType that owns this Property, if any.
			<p>From package UML::Classification.</p>
			*/
			
			std::weak_ptr<uml::DataType > m_datatype;/*!
			A ValueSpecification that is evaluated to give a default value for the Property when an instance of the owning Classifier is instantiated.
			<p>From package UML::Classification.</p>
			*/
			
			std::shared_ptr<uml::ValueSpecification > m_defaultValue;/*!
			The Interface that owns this Property, if any.
			<p>From package UML::Classification.</p>
			*/
			
			std::weak_ptr<uml::Interface > m_interface;/*!
			In the case where the Property is one end of a binary association this gives the other end.
			<p>From package UML::Classification.</p>
			*/
			
			std::shared_ptr<uml::Property > m_opposite;/*!
			The owning association of this property, if any.
			<p>From package UML::Classification.</p>
			*/
			
			std::weak_ptr<uml::Association > m_owningAssociation;/*!
			An optional list of ordered qualifier attributes for the end.
			<p>From package UML::Classification.</p>
			*/
			
			mutable std::shared_ptr<Subset<uml::Property, uml::Element>> m_qualifier;/*!
			The properties that are redefined by this property, if any.
			<p>From package UML::Classification.</p>
			*/
			
			mutable std::shared_ptr<SubsetUnion<uml::Property, uml::RedefinableElement>> m_redefinedProperty;/*!
			The properties of which this Property is constrained to be a subset, if any.
			<p>From package UML::Classification.</p>
			*/
			
			mutable std::shared_ptr<Bag<uml::Property>> m_subsettedProperty;

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			The Classifiers that have this Feature as a feature.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Classifier>> getFeaturingClassifier() const = 0;/*!
			Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Namespace > getNamespace() const = 0;/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			The Element that owns this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const = 0;/*!
			The contexts that this element may be redefined from.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Classifier>> getRedefinitionContext() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_PROPERTY_HPP */
