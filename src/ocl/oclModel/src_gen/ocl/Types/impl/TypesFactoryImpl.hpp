//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_TYPESFACTORYIMPL_HPP
#define OCL_TYPESFACTORYIMPL_HPP

#include "ecore/impl/EFactoryImpl.hpp"

#include "ocl/Types/TypesFactory.hpp"

namespace Types 
{	class AnyType;
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

namespace ocl::Types 
{
	class TypesFactoryImpl : virtual public ecore::EFactoryImpl , virtual public TypesFactory 
	{
		private:    
			TypesFactoryImpl(TypesFactoryImpl const&) = delete;
			TypesFactoryImpl& operator=(TypesFactoryImpl const&) = delete;

		protected:
			friend class TypesFactory;
			// Constructor
			TypesFactoryImpl();

		public:
			virtual ~TypesFactoryImpl();
			virtual std::shared_ptr<ecore::EObject> create(std::string _className,  std::shared_ptr<ecore::EObject> container=nullptr, const int referenceID = -1) const;
			virtual std::shared_ptr<ecore::EObject> create(const int classID,  std::shared_ptr<ecore::EObject> container = nullptr, const int referenceID = -1) const;
			virtual std::shared_ptr<ecore::EObject> create(std::shared_ptr<ecore::EClass> _class, std::shared_ptr<EObject> _container=nullptr, const int referenceID = -1) const;

			//Creator functions
			 virtual std::shared_ptr<ocl::Types::AnyType> createAnyType(const int metaElementID=-1) const ;
			 //Add containing object
			 virtual std::shared_ptr<ocl::Types::AnyType> createAnyType_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer, const int metaElementID=-1) const ;
			 //Add containing object
			 virtual std::shared_ptr<ocl::Types::AnyType> createAnyType_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage, const int metaElementID=-1) const ;
			 
			 virtual std::shared_ptr<ocl::Types::BagType> createBagType(const int metaElementID=-1) const ;
			 //Add containing object
			 virtual std::shared_ptr<ocl::Types::BagType> createBagType_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer, const int metaElementID=-1) const ;
			 //Add containing object
			 virtual std::shared_ptr<ocl::Types::BagType> createBagType_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage, const int metaElementID=-1) const ;
			 
			 virtual std::shared_ptr<ocl::Types::CollectionType> createCollectionType(const int metaElementID=-1) const ;
			 //Add containing object
			 virtual std::shared_ptr<ocl::Types::CollectionType> createCollectionType_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer, const int metaElementID=-1) const ;
			 //Add containing object
			 virtual std::shared_ptr<ocl::Types::CollectionType> createCollectionType_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage, const int metaElementID=-1) const ;
			 
			 virtual std::shared_ptr<ocl::Types::InvalidType> createInvalidType(const int metaElementID=-1) const ;
			 //Add containing object
			 virtual std::shared_ptr<ocl::Types::InvalidType> createInvalidType_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer, const int metaElementID=-1) const ;
			 //Add containing object
			 virtual std::shared_ptr<ocl::Types::InvalidType> createInvalidType_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage, const int metaElementID=-1) const ;
			 
			 virtual std::shared_ptr<ocl::Types::MessageType> createMessageType(const int metaElementID=-1) const ;
			 //Add containing object
			 virtual std::shared_ptr<ocl::Types::MessageType> createMessageType_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer, const int metaElementID=-1) const ;
			 //Add containing object
			 virtual std::shared_ptr<ocl::Types::MessageType> createMessageType_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage, const int metaElementID=-1) const ;
			 
			 virtual std::shared_ptr<ocl::Types::NameTypeBinding> createNameTypeBinding(const int metaElementID=-1) const ;
			 
			 virtual std::shared_ptr<ocl::Types::OrderedSetType> createOrderedSetType(const int metaElementID=-1) const ;
			 //Add containing object
			 virtual std::shared_ptr<ocl::Types::OrderedSetType> createOrderedSetType_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer, const int metaElementID=-1) const ;
			 //Add containing object
			 virtual std::shared_ptr<ocl::Types::OrderedSetType> createOrderedSetType_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage, const int metaElementID=-1) const ;
			 
			 virtual std::shared_ptr<ocl::Types::SequenceType> createSequenceType(const int metaElementID=-1) const ;
			 //Add containing object
			 virtual std::shared_ptr<ocl::Types::SequenceType> createSequenceType_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer, const int metaElementID=-1) const ;
			 //Add containing object
			 virtual std::shared_ptr<ocl::Types::SequenceType> createSequenceType_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage, const int metaElementID=-1) const ;
			 
			 virtual std::shared_ptr<ocl::Types::SetType> createSetType(const int metaElementID=-1) const ;
			 //Add containing object
			 virtual std::shared_ptr<ocl::Types::SetType> createSetType_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer, const int metaElementID=-1) const ;
			 //Add containing object
			 virtual std::shared_ptr<ocl::Types::SetType> createSetType_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage, const int metaElementID=-1) const ;
			 
			 virtual std::shared_ptr<ocl::Types::TemplateParameterType> createTemplateParameterType(const int metaElementID=-1) const ;
			 //Add containing object
			 virtual std::shared_ptr<ocl::Types::TemplateParameterType> createTemplateParameterType_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer, const int metaElementID=-1) const ;
			 //Add containing object
			 virtual std::shared_ptr<ocl::Types::TemplateParameterType> createTemplateParameterType_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage, const int metaElementID=-1) const ;
			 
			 virtual std::shared_ptr<ocl::Types::TupleType> createTupleType(const int metaElementID=-1) const ;
			 //Add containing object
			 virtual std::shared_ptr<ocl::Types::TupleType> createTupleType_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer, const int metaElementID=-1) const ;
			 //Add containing object
			 virtual std::shared_ptr<ocl::Types::TupleType> createTupleType_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage, const int metaElementID=-1) const ;
			 
			 virtual std::shared_ptr<ocl::Types::VoidType> createVoidType(const int metaElementID=-1) const ;
			 //Add containing object
			 virtual std::shared_ptr<ocl::Types::VoidType> createVoidType_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer, const int metaElementID=-1) const ;
			 //Add containing object
			 virtual std::shared_ptr<ocl::Types::VoidType> createVoidType_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage, const int metaElementID=-1) const ;
			 
			 

		private:
			static TypesFactory* create();
            std::map<std::string,int> m_idMap;
	};
}
#endif /* end of include guard: OCL_TYPESFACTORYIMPL_HPP */
