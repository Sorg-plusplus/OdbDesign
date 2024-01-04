// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: attrlistfile.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_attrlistfile_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_attrlistfile_2eproto

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
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_attrlistfile_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_attrlistfile_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_attrlistfile_2eproto;
namespace Odb {
namespace Lib {
namespace Protobuf {
class AttrListFile;
struct AttrListFileDefaultTypeInternal;
extern AttrListFileDefaultTypeInternal _AttrListFile_default_instance_;
class AttrListFile_AttributesByNameEntry_DoNotUse;
struct AttrListFile_AttributesByNameEntry_DoNotUseDefaultTypeInternal;
extern AttrListFile_AttributesByNameEntry_DoNotUseDefaultTypeInternal _AttrListFile_AttributesByNameEntry_DoNotUse_default_instance_;
}  // namespace Protobuf
}  // namespace Lib
}  // namespace Odb
PROTOBUF_NAMESPACE_OPEN
template<> ::Odb::Lib::Protobuf::AttrListFile* Arena::CreateMaybeMessage<::Odb::Lib::Protobuf::AttrListFile>(Arena*);
template<> ::Odb::Lib::Protobuf::AttrListFile_AttributesByNameEntry_DoNotUse* Arena::CreateMaybeMessage<::Odb::Lib::Protobuf::AttrListFile_AttributesByNameEntry_DoNotUse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Odb {
namespace Lib {
namespace Protobuf {

// ===================================================================

class AttrListFile_AttributesByNameEntry_DoNotUse : public ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<AttrListFile_AttributesByNameEntry_DoNotUse, 
    std::string, std::string,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING> {
public:
  typedef ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<AttrListFile_AttributesByNameEntry_DoNotUse, 
    std::string, std::string,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING> SuperType;
  AttrListFile_AttributesByNameEntry_DoNotUse();
  explicit PROTOBUF_CONSTEXPR AttrListFile_AttributesByNameEntry_DoNotUse(
      ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);
  explicit AttrListFile_AttributesByNameEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void MergeFrom(const AttrListFile_AttributesByNameEntry_DoNotUse& other);
  static const AttrListFile_AttributesByNameEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const AttrListFile_AttributesByNameEntry_DoNotUse*>(&_AttrListFile_AttributesByNameEntry_DoNotUse_default_instance_); }
  static bool ValidateKey(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), static_cast<int>(s->size()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "Odb.Lib.Protobuf.AttrListFile.AttributesByNameEntry.key");
 }
  static bool ValidateValue(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), static_cast<int>(s->size()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "Odb.Lib.Protobuf.AttrListFile.AttributesByNameEntry.value");
 }
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  friend struct ::TableStruct_attrlistfile_2eproto;
};

// -------------------------------------------------------------------

class AttrListFile final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Odb.Lib.Protobuf.AttrListFile) */ {
 public:
  inline AttrListFile() : AttrListFile(nullptr) {}
  ~AttrListFile() override;
  explicit PROTOBUF_CONSTEXPR AttrListFile(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AttrListFile(const AttrListFile& from);
  AttrListFile(AttrListFile&& from) noexcept
    : AttrListFile() {
    *this = ::std::move(from);
  }

  inline AttrListFile& operator=(const AttrListFile& from) {
    CopyFrom(from);
    return *this;
  }
  inline AttrListFile& operator=(AttrListFile&& from) noexcept {
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
  static const AttrListFile& default_instance() {
    return *internal_default_instance();
  }
  static inline const AttrListFile* internal_default_instance() {
    return reinterpret_cast<const AttrListFile*>(
               &_AttrListFile_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(AttrListFile& a, AttrListFile& b) {
    a.Swap(&b);
  }
  inline void Swap(AttrListFile* other) {
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
  void UnsafeArenaSwap(AttrListFile* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AttrListFile* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<AttrListFile>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const AttrListFile& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const AttrListFile& from) {
    AttrListFile::MergeImpl(*this, from);
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
  void InternalSwap(AttrListFile* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Odb.Lib.Protobuf.AttrListFile";
  }
  protected:
  explicit AttrListFile(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  enum : int {
    kAttributesByNameFieldNumber = 4,
    kDirectoryFieldNumber = 1,
    kPathFieldNumber = 2,
    kUnitsFieldNumber = 3,
  };
  // map<string, string> attributesByName = 4;
  int attributesbyname_size() const;
  private:
  int _internal_attributesbyname_size() const;
  public:
  void clear_attributesbyname();
  private:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
      _internal_attributesbyname() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
      _internal_mutable_attributesbyname();
  public:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
      attributesbyname() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
      mutable_attributesbyname();

  // optional string directory = 1;
  bool has_directory() const;
  private:
  bool _internal_has_directory() const;
  public:
  void clear_directory();
  const std::string& directory() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_directory(ArgT0&& arg0, ArgT... args);
  std::string* mutable_directory();
  PROTOBUF_NODISCARD std::string* release_directory();
  void set_allocated_directory(std::string* directory);
  private:
  const std::string& _internal_directory() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_directory(const std::string& value);
  std::string* _internal_mutable_directory();
  public:

  // optional string path = 2;
  bool has_path() const;
  private:
  bool _internal_has_path() const;
  public:
  void clear_path();
  const std::string& path() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_path(ArgT0&& arg0, ArgT... args);
  std::string* mutable_path();
  PROTOBUF_NODISCARD std::string* release_path();
  void set_allocated_path(std::string* path);
  private:
  const std::string& _internal_path() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_path(const std::string& value);
  std::string* _internal_mutable_path();
  public:

  // optional string units = 3;
  bool has_units() const;
  private:
  bool _internal_has_units() const;
  public:
  void clear_units();
  const std::string& units() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_units(ArgT0&& arg0, ArgT... args);
  std::string* mutable_units();
  PROTOBUF_NODISCARD std::string* release_units();
  void set_allocated_units(std::string* units);
  private:
  const std::string& _internal_units() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_units(const std::string& value);
  std::string* _internal_mutable_units();
  public:

  // @@protoc_insertion_point(class_scope:Odb.Lib.Protobuf.AttrListFile)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::MapField<
        AttrListFile_AttributesByNameEntry_DoNotUse,
        std::string, std::string,
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING> attributesbyname_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr directory_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr path_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr units_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_attrlistfile_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// AttrListFile

// optional string directory = 1;
inline bool AttrListFile::_internal_has_directory() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool AttrListFile::has_directory() const {
  return _internal_has_directory();
}
inline void AttrListFile::clear_directory() {
  _impl_.directory_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& AttrListFile::directory() const {
  // @@protoc_insertion_point(field_get:Odb.Lib.Protobuf.AttrListFile.directory)
  return _internal_directory();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void AttrListFile::set_directory(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.directory_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Odb.Lib.Protobuf.AttrListFile.directory)
}
inline std::string* AttrListFile::mutable_directory() {
  std::string* _s = _internal_mutable_directory();
  // @@protoc_insertion_point(field_mutable:Odb.Lib.Protobuf.AttrListFile.directory)
  return _s;
}
inline const std::string& AttrListFile::_internal_directory() const {
  return _impl_.directory_.Get();
}
inline void AttrListFile::_internal_set_directory(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.directory_.Set(value, GetArenaForAllocation());
}
inline std::string* AttrListFile::_internal_mutable_directory() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.directory_.Mutable(GetArenaForAllocation());
}
inline std::string* AttrListFile::release_directory() {
  // @@protoc_insertion_point(field_release:Odb.Lib.Protobuf.AttrListFile.directory)
  if (!_internal_has_directory()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.directory_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.directory_.IsDefault()) {
    _impl_.directory_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void AttrListFile::set_allocated_directory(std::string* directory) {
  if (directory != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.directory_.SetAllocated(directory, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.directory_.IsDefault()) {
    _impl_.directory_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Odb.Lib.Protobuf.AttrListFile.directory)
}

// optional string path = 2;
inline bool AttrListFile::_internal_has_path() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool AttrListFile::has_path() const {
  return _internal_has_path();
}
inline void AttrListFile::clear_path() {
  _impl_.path_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& AttrListFile::path() const {
  // @@protoc_insertion_point(field_get:Odb.Lib.Protobuf.AttrListFile.path)
  return _internal_path();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void AttrListFile::set_path(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000002u;
 _impl_.path_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Odb.Lib.Protobuf.AttrListFile.path)
}
inline std::string* AttrListFile::mutable_path() {
  std::string* _s = _internal_mutable_path();
  // @@protoc_insertion_point(field_mutable:Odb.Lib.Protobuf.AttrListFile.path)
  return _s;
}
inline const std::string& AttrListFile::_internal_path() const {
  return _impl_.path_.Get();
}
inline void AttrListFile::_internal_set_path(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.path_.Set(value, GetArenaForAllocation());
}
inline std::string* AttrListFile::_internal_mutable_path() {
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.path_.Mutable(GetArenaForAllocation());
}
inline std::string* AttrListFile::release_path() {
  // @@protoc_insertion_point(field_release:Odb.Lib.Protobuf.AttrListFile.path)
  if (!_internal_has_path()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* p = _impl_.path_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.path_.IsDefault()) {
    _impl_.path_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void AttrListFile::set_allocated_path(std::string* path) {
  if (path != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.path_.SetAllocated(path, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.path_.IsDefault()) {
    _impl_.path_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Odb.Lib.Protobuf.AttrListFile.path)
}

// optional string units = 3;
inline bool AttrListFile::_internal_has_units() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool AttrListFile::has_units() const {
  return _internal_has_units();
}
inline void AttrListFile::clear_units() {
  _impl_.units_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline const std::string& AttrListFile::units() const {
  // @@protoc_insertion_point(field_get:Odb.Lib.Protobuf.AttrListFile.units)
  return _internal_units();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void AttrListFile::set_units(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000004u;
 _impl_.units_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Odb.Lib.Protobuf.AttrListFile.units)
}
inline std::string* AttrListFile::mutable_units() {
  std::string* _s = _internal_mutable_units();
  // @@protoc_insertion_point(field_mutable:Odb.Lib.Protobuf.AttrListFile.units)
  return _s;
}
inline const std::string& AttrListFile::_internal_units() const {
  return _impl_.units_.Get();
}
inline void AttrListFile::_internal_set_units(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.units_.Set(value, GetArenaForAllocation());
}
inline std::string* AttrListFile::_internal_mutable_units() {
  _impl_._has_bits_[0] |= 0x00000004u;
  return _impl_.units_.Mutable(GetArenaForAllocation());
}
inline std::string* AttrListFile::release_units() {
  // @@protoc_insertion_point(field_release:Odb.Lib.Protobuf.AttrListFile.units)
  if (!_internal_has_units()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000004u;
  auto* p = _impl_.units_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.units_.IsDefault()) {
    _impl_.units_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void AttrListFile::set_allocated_units(std::string* units) {
  if (units != nullptr) {
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }
  _impl_.units_.SetAllocated(units, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.units_.IsDefault()) {
    _impl_.units_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Odb.Lib.Protobuf.AttrListFile.units)
}

// map<string, string> attributesByName = 4;
inline int AttrListFile::_internal_attributesbyname_size() const {
  return _impl_.attributesbyname_.size();
}
inline int AttrListFile::attributesbyname_size() const {
  return _internal_attributesbyname_size();
}
inline void AttrListFile::clear_attributesbyname() {
  _impl_.attributesbyname_.Clear();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
AttrListFile::_internal_attributesbyname() const {
  return _impl_.attributesbyname_.GetMap();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
AttrListFile::attributesbyname() const {
  // @@protoc_insertion_point(field_map:Odb.Lib.Protobuf.AttrListFile.attributesByName)
  return _internal_attributesbyname();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
AttrListFile::_internal_mutable_attributesbyname() {
  return _impl_.attributesbyname_.MutableMap();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
AttrListFile::mutable_attributesbyname() {
  // @@protoc_insertion_point(field_mutable_map:Odb.Lib.Protobuf.AttrListFile.attributesByName)
  return _internal_mutable_attributesbyname();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protobuf
}  // namespace Lib
}  // namespace Odb

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_attrlistfile_2eproto
