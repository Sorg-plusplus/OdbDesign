// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: design.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_design_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_design_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "filearchive.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_design_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_design_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_design_2eproto;
namespace Odb {
namespace Lib {
namespace Protobuf {
class Design;
struct DesignDefaultTypeInternal;
extern DesignDefaultTypeInternal _Design_default_instance_;
}  // namespace Protobuf
}  // namespace Lib
}  // namespace Odb
PROTOBUF_NAMESPACE_OPEN
template<> ::Odb::Lib::Protobuf::Design* Arena::CreateMaybeMessage<::Odb::Lib::Protobuf::Design>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Odb {
namespace Lib {
namespace Protobuf {

// ===================================================================

class Design final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Odb.Lib.Protobuf.Design) */ {
 public:
  inline Design() : Design(nullptr) {}
  ~Design() override;
  explicit PROTOBUF_CONSTEXPR Design(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Design(const Design& from);
  Design(Design&& from) noexcept
    : Design() {
    *this = ::std::move(from);
  }

  inline Design& operator=(const Design& from) {
    CopyFrom(from);
    return *this;
  }
  inline Design& operator=(Design&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Design& default_instance() {
    return *internal_default_instance();
  }
  static inline const Design* internal_default_instance() {
    return reinterpret_cast<const Design*>(
               &_Design_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Design& a, Design& b) {
    a.Swap(&b);
  }
  inline void Swap(Design* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Design* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Design* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Design>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Design& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Design& from) {
    Design::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Design* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Odb.Lib.Protobuf.Design";
  }
  protected:
  explicit Design(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFileArchiveFieldNumber = 1,
  };
  // optional .Odb.Lib.Protobuf.FileArchive fileArchive = 1;
  bool has_filearchive() const;
  private:
  bool _internal_has_filearchive() const;
  public:
  void clear_filearchive();
  const ::Odb::Lib::Protobuf::FileArchive& filearchive() const;
  PROTOBUF_NODISCARD ::Odb::Lib::Protobuf::FileArchive* release_filearchive();
  ::Odb::Lib::Protobuf::FileArchive* mutable_filearchive();
  void set_allocated_filearchive(::Odb::Lib::Protobuf::FileArchive* filearchive);
  private:
  const ::Odb::Lib::Protobuf::FileArchive& _internal_filearchive() const;
  ::Odb::Lib::Protobuf::FileArchive* _internal_mutable_filearchive();
  public:
  void unsafe_arena_set_allocated_filearchive(
      ::Odb::Lib::Protobuf::FileArchive* filearchive);
  ::Odb::Lib::Protobuf::FileArchive* unsafe_arena_release_filearchive();

  // @@protoc_insertion_point(class_scope:Odb.Lib.Protobuf.Design)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::Odb::Lib::Protobuf::FileArchive* filearchive_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_design_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Design

// optional .Odb.Lib.Protobuf.FileArchive fileArchive = 1;
inline bool Design::_internal_has_filearchive() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.filearchive_ != nullptr);
  return value;
}
inline bool Design::has_filearchive() const {
  return _internal_has_filearchive();
}
inline const ::Odb::Lib::Protobuf::FileArchive& Design::_internal_filearchive() const {
  const ::Odb::Lib::Protobuf::FileArchive* p = _impl_.filearchive_;
  return p != nullptr ? *p : reinterpret_cast<const ::Odb::Lib::Protobuf::FileArchive&>(
      ::Odb::Lib::Protobuf::_FileArchive_default_instance_);
}
inline const ::Odb::Lib::Protobuf::FileArchive& Design::filearchive() const {
  // @@protoc_insertion_point(field_get:Odb.Lib.Protobuf.Design.fileArchive)
  return _internal_filearchive();
}
inline void Design::unsafe_arena_set_allocated_filearchive(
    ::Odb::Lib::Protobuf::FileArchive* filearchive) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.filearchive_);
  }
  _impl_.filearchive_ = filearchive;
  if (filearchive) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Odb.Lib.Protobuf.Design.fileArchive)
}
inline ::Odb::Lib::Protobuf::FileArchive* Design::release_filearchive() {
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::Odb::Lib::Protobuf::FileArchive* temp = _impl_.filearchive_;
  _impl_.filearchive_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::Odb::Lib::Protobuf::FileArchive* Design::unsafe_arena_release_filearchive() {
  // @@protoc_insertion_point(field_release:Odb.Lib.Protobuf.Design.fileArchive)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::Odb::Lib::Protobuf::FileArchive* temp = _impl_.filearchive_;
  _impl_.filearchive_ = nullptr;
  return temp;
}
inline ::Odb::Lib::Protobuf::FileArchive* Design::_internal_mutable_filearchive() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.filearchive_ == nullptr) {
    auto* p = CreateMaybeMessage<::Odb::Lib::Protobuf::FileArchive>(GetArenaForAllocation());
    _impl_.filearchive_ = p;
  }
  return _impl_.filearchive_;
}
inline ::Odb::Lib::Protobuf::FileArchive* Design::mutable_filearchive() {
  ::Odb::Lib::Protobuf::FileArchive* _msg = _internal_mutable_filearchive();
  // @@protoc_insertion_point(field_mutable:Odb.Lib.Protobuf.Design.fileArchive)
  return _msg;
}
inline void Design::set_allocated_filearchive(::Odb::Lib::Protobuf::FileArchive* filearchive) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.filearchive_);
  }
  if (filearchive) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(filearchive));
    if (message_arena != submessage_arena) {
      filearchive = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, filearchive, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.filearchive_ = filearchive;
  // @@protoc_insertion_point(field_set_allocated:Odb.Lib.Protobuf.Design.fileArchive)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Protobuf
}  // namespace Lib
}  // namespace Odb

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_design_2eproto
