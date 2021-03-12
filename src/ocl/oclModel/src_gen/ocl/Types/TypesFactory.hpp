//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_TYPESFACTORY_HPP
#define OCL_TYPESFACTORY_HPP

#include <map>
#include <memory>

#include "ecore/EFactory.hpp"
#include "ocl/Types/TypesPackage.hpp"

namespace ocl::Types 
{
	class AnyType;
	class BagType;
	class CollectionType;
	class InvalidType;
	class MessageType;
	class NameTypeBinding;
	class OrderedSetType;
	class SequenceType;
	class SetType;
	class TemplateParameterType;
	class TupleType;
	class VoidType;
}

namespace ecore 
{
	class EPackage;
}


namespace ocl::Types 
{
	class TypesFactory : virtual public ecore::EFactory 
	{
		private:    
			TypesFactory(TypesFactory const&) = delete;
			TypesFactory& operator=(TypesFactory const&) = delete;
		protected:
			TypesFactory(){}
		
			//Singleton Instance and Getter
			private:
				static std::shared_ptr<TypesFactory> instance;
			public:
				static std::shared_ptr<TypesFactory> eInstance();
		
			//Creator functions
			virtual std::shared_ptr<ecore::EObject> create(std::string _className,  std::shared_ptr<ecore::EObject> container=nullptr, const int referenceID = -1) const = 0;
			virtual std::shared_ptr<ecore::EObject> create(const int classID,  std::shared_ptr<ecore::EObject> container = nullptr, const int referenceID = -1) const = 0;
			virtual std::shared_ptr<ecore::EObject> create(std::shared_ptr<ecore::EClass> _class, std::shared_ptr<EObject> _container=nullptr, const int referenceID = -1) const = 0;

			virtual std::shared_ptr<ocl::Types::AnyType> createAnyType(const int metaElementID = TypesPackage::ANYTYPE_CLASS) const = 0;
			//Add containing object
			virtual std::shared_ptr<ocl::Types::AnyType> createAnyType_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage, const int metaElementID = TypesPackage::ANYTYPE_CLASS) const = 0;
			
			virtual std::shared_ptr<ocl::Types::BagType> createBagType(const int metaElementID = TypesPackage::BAGTYPE_CLASS) const = 0;
			//Add containing object
			virtual std::shared_ptr<ocl::Types::BagType> createBagType_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage, const int metaElementID = TypesPackage::BAGTYPE_CLASS) const = 0;
			
			virtual std::shared_ptr<ocl::Types::CollectionType> createCollectionType(const int metaElementID = TypesPackage::COLLECTIONTYPE_CLASS) const = 0;
			//Add containing object
			virtual std::shared_ptr<ocl::Types::CollectionType> createCollectionType_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage, const int metaElementID = TypesPackage::COLLECTIONTYPE_CLASS) const = 0;
			
			virtual std::shared_ptr<ocl::Types::InvalidType> createInvalidType(const int metaElementID = TypesPackage::INVALIDTYPE_CLASS) const = 0;
			//Add containing object
			virtual std::shared_ptr<ocl::Types::InvalidType> createInvalidType_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage, const int metaElementID = TypesPackage::INVALIDTYPE_CLASS) const = 0;
			
			virtual std::shared_ptr<ocl::Types::MessageType> createMessageType(const int metaElementID = TypesPackage::MESSAGETYPE_CLASS) const = 0;
			//Add containing object
			virtual std::shared_ptr<ocl::Types::MessageType> createMessageType_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage, const int metaElementID = TypesPackage::MESSAGETYPE_CLASS) const = 0;
			
			virtual std::shared_ptr<ocl::Types::NameTypeBinding> createNameTypeBinding(const int metaElementID = TypesPackage::NAMETYPEBINDING_CLASS) const = 0;
			
			virtual std::shared_ptr<ocl::Types::OrderedSetType> createOrderedSetType(const int metaElementID = TypesPackage::ORDEREDSETTYPE_CLASS) const = 0;
			//Add containing object
			virtual std::shared_ptr<ocl::Types::OrderedSetType> createOrderedSetType_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage, const int metaElementID = TypesPackage::ORDEREDSETTYPE_CLASS) const = 0;
			
			virtual std::shared_ptr<ocl::Types::SequenceType> createSequenceType(const int metaElementID = TypesPackage::SEQUENCETYPE_CLASS) const = 0;
			//Add containing object
			virtual std::shared_ptr<ocl::Types::SequenceType> createSequenceType_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage, const int metaElementID = TypesPackage::SEQUENCETYPE_CLASS) const = 0;
			
			virtual std::shared_ptr<ocl::Types::SetType> createSetType(const int metaElementID = TypesPackage::SETTYPE_CLASS) const = 0;
			//Add containing object
			virtual std::shared_ptr<ocl::Types::SetType> createSetType_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage, const int metaElementID = TypesPackage::SETTYPE_CLASS) const = 0;
			
			virtual std::shared_ptr<ocl::Types::TemplateParameterType> createTemplateParameterType(const int metaElementID = TypesPackage::TEMPLATEPARAMETERTYPE_CLASS) const = 0;
			//Add containing object
			virtual std::shared_ptr<ocl::Types::TemplateParameterType> createTemplateParameterType_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage, const int metaElementID = TypesPackage::TEMPLATEPARAMETERTYPE_CLASS) const = 0;
			
			virtual std::shared_ptr<ocl::Types::TupleType> createTupleType(const int metaElementID = TypesPackage::TUPLETYPE_CLASS) const = 0;
			//Add containing object
			virtual std::shared_ptr<ocl::Types::TupleType> createTupleType_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage, const int metaElementID = TypesPackage::TUPLETYPE_CLASS) const = 0;
			
			virtual std::shared_ptr<ocl::Types::VoidType> createVoidType(const int metaElementID = TypesPackage::VOIDTYPE_CLASS) const = 0;
			//Add containing object
			virtual std::shared_ptr<ocl::Types::VoidType> createVoidType_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage, const int metaElementID = TypesPackage::VOIDTYPE_CLASS) const = 0;
			
			
	};
}
#endif /* end of include guard: OCL_TYPESFACTORY_HPP */