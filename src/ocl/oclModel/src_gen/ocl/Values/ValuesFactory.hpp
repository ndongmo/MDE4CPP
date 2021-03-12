//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_VALUESFACTORY_HPP
#define OCL_VALUESFACTORY_HPP

#include <map>
#include <memory>

#include "ecore/EFactory.hpp"
#include "ocl/Values/ValuesPackage.hpp"

namespace ocl::Values 
{
	class BagTypeValue;
	class CollectionValue;
	class Element;
	class LocalSnapshot;
	class NameValueBinding;
	class ObjectValue;
	class OclMessageValue;
	class OclVoidValue;
	class OrderedSetTypeValue;
	class SequenceTypeValue;
	class SetTypeValue;
	class StaticValue;
	class TupleValue;
	class UndefinedValue;
}


namespace ocl::Values 
{
	class ValuesFactory : virtual public ecore::EFactory 
	{
		private:    
			ValuesFactory(ValuesFactory const&) = delete;
			ValuesFactory& operator=(ValuesFactory const&) = delete;
		protected:
			ValuesFactory(){}
		
			//Singleton Instance and Getter
			private:
				static std::shared_ptr<ValuesFactory> instance;
			public:
				static std::shared_ptr<ValuesFactory> eInstance();
		
			//Creator functions
			virtual std::shared_ptr<ecore::EObject> create(std::string _className,  std::shared_ptr<ecore::EObject> container=nullptr, const int referenceID = -1) const = 0;
			virtual std::shared_ptr<ecore::EObject> create(const int classID,  std::shared_ptr<ecore::EObject> container = nullptr, const int referenceID = -1) const = 0;
			virtual std::shared_ptr<ecore::EObject> create(std::shared_ptr<ecore::EClass> _class, std::shared_ptr<EObject> _container=nullptr, const int referenceID = -1) const = 0;

			virtual std::shared_ptr<ocl::Values::BagTypeValue> createBagTypeValue(const int metaElementID = ValuesPackage::BAGTYPEVALUE_CLASS) const = 0;
			
			virtual std::shared_ptr<ocl::Values::CollectionValue> createCollectionValue(const int metaElementID = ValuesPackage::COLLECTIONVALUE_CLASS) const = 0;
			
			virtual std::shared_ptr<ocl::Values::Element> createElement(const int metaElementID = ValuesPackage::ELEMENT_CLASS) const = 0;
			
			virtual std::shared_ptr<ocl::Values::LocalSnapshot> createLocalSnapshot(const int metaElementID = ValuesPackage::LOCALSNAPSHOT_CLASS) const = 0;
			
			virtual std::shared_ptr<ocl::Values::NameValueBinding> createNameValueBinding(const int metaElementID = ValuesPackage::NAMEVALUEBINDING_CLASS) const = 0;
			
			virtual std::shared_ptr<ocl::Values::ObjectValue> createObjectValue(const int metaElementID = ValuesPackage::OBJECTVALUE_CLASS) const = 0;
			
			virtual std::shared_ptr<ocl::Values::OclMessageValue> createOclMessageValue(const int metaElementID = ValuesPackage::OCLMESSAGEVALUE_CLASS) const = 0;
			
			virtual std::shared_ptr<ocl::Values::OclVoidValue> createOclVoidValue(const int metaElementID = ValuesPackage::OCLVOIDVALUE_CLASS) const = 0;
			
			virtual std::shared_ptr<ocl::Values::OrderedSetTypeValue> createOrderedSetTypeValue(const int metaElementID = ValuesPackage::ORDEREDSETTYPEVALUE_CLASS) const = 0;
			
			virtual std::shared_ptr<ocl::Values::SequenceTypeValue> createSequenceTypeValue(const int metaElementID = ValuesPackage::SEQUENCETYPEVALUE_CLASS) const = 0;
			
			virtual std::shared_ptr<ocl::Values::SetTypeValue> createSetTypeValue(const int metaElementID = ValuesPackage::SETTYPEVALUE_CLASS) const = 0;
			
			virtual std::shared_ptr<ocl::Values::StaticValue> createStaticValue(const int metaElementID = ValuesPackage::STATICVALUE_CLASS) const = 0;
			
			virtual std::shared_ptr<ocl::Values::TupleValue> createTupleValue(const int metaElementID = ValuesPackage::TUPLEVALUE_CLASS) const = 0;
			
			virtual std::shared_ptr<ocl::Values::UndefinedValue> createUndefinedValue(const int metaElementID = ValuesPackage::UNDEFINEDVALUE_CLASS) const = 0;
			
			
	};
}
#endif /* end of include guard: OCL_VALUESFACTORY_HPP */
