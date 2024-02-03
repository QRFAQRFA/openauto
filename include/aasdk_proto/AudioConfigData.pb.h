// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AudioConfigData.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_AudioConfigData_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_AudioConfigData_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019006 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_AudioConfigData_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_AudioConfigData_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_AudioConfigData_2eproto;
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {
class AudioConfig;
struct AudioConfigDefaultTypeInternal;
extern AudioConfigDefaultTypeInternal _AudioConfig_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> ::f1x::aasdk::proto::data::AudioConfig* Arena::CreateMaybeMessage<::f1x::aasdk::proto::data::AudioConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class AudioConfig final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.data.AudioConfig) */ {
 public:
  inline AudioConfig() : AudioConfig(nullptr) {}
  ~AudioConfig() override;
  explicit constexpr AudioConfig(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AudioConfig(const AudioConfig& from);
  AudioConfig(AudioConfig&& from) noexcept
    : AudioConfig() {
    *this = ::std::move(from);
  }

  inline AudioConfig& operator=(const AudioConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline AudioConfig& operator=(AudioConfig&& from) noexcept {
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

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const AudioConfig& default_instance() {
    return *internal_default_instance();
  }
  static inline const AudioConfig* internal_default_instance() {
    return reinterpret_cast<const AudioConfig*>(
               &_AudioConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AudioConfig& a, AudioConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(AudioConfig* other) {
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
  void UnsafeArenaSwap(AudioConfig* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AudioConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<AudioConfig>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const AudioConfig& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const AudioConfig& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AudioConfig* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "f1x.aasdk.proto.data.AudioConfig";
  }
  protected:
  explicit AudioConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSampleRateFieldNumber = 1,
    kBitDepthFieldNumber = 2,
    kChannelCountFieldNumber = 3,
  };
  // required uint32 sample_rate = 1;
  bool has_sample_rate() const;
  private:
  bool _internal_has_sample_rate() const;
  public:
  void clear_sample_rate();
  uint32_t sample_rate() const;
  void set_sample_rate(uint32_t value);
  private:
  uint32_t _internal_sample_rate() const;
  void _internal_set_sample_rate(uint32_t value);
  public:

  // required uint32 bit_depth = 2;
  bool has_bit_depth() const;
  private:
  bool _internal_has_bit_depth() const;
  public:
  void clear_bit_depth();
  uint32_t bit_depth() const;
  void set_bit_depth(uint32_t value);
  private:
  uint32_t _internal_bit_depth() const;
  void _internal_set_bit_depth(uint32_t value);
  public:

  // required uint32 channel_count = 3;
  bool has_channel_count() const;
  private:
  bool _internal_has_channel_count() const;
  public:
  void clear_channel_count();
  uint32_t channel_count() const;
  void set_channel_count(uint32_t value);
  private:
  uint32_t _internal_channel_count() const;
  void _internal_set_channel_count(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.data.AudioConfig)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  uint32_t sample_rate_;
  uint32_t bit_depth_;
  uint32_t channel_count_;
  friend struct ::TableStruct_AudioConfigData_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AudioConfig

// required uint32 sample_rate = 1;
inline bool AudioConfig::_internal_has_sample_rate() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool AudioConfig::has_sample_rate() const {
  return _internal_has_sample_rate();
}
inline void AudioConfig::clear_sample_rate() {
  sample_rate_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline uint32_t AudioConfig::_internal_sample_rate() const {
  return sample_rate_;
}
inline uint32_t AudioConfig::sample_rate() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.AudioConfig.sample_rate)
  return _internal_sample_rate();
}
inline void AudioConfig::_internal_set_sample_rate(uint32_t value) {
  _has_bits_[0] |= 0x00000001u;
  sample_rate_ = value;
}
inline void AudioConfig::set_sample_rate(uint32_t value) {
  _internal_set_sample_rate(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.AudioConfig.sample_rate)
}

// required uint32 bit_depth = 2;
inline bool AudioConfig::_internal_has_bit_depth() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool AudioConfig::has_bit_depth() const {
  return _internal_has_bit_depth();
}
inline void AudioConfig::clear_bit_depth() {
  bit_depth_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline uint32_t AudioConfig::_internal_bit_depth() const {
  return bit_depth_;
}
inline uint32_t AudioConfig::bit_depth() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.AudioConfig.bit_depth)
  return _internal_bit_depth();
}
inline void AudioConfig::_internal_set_bit_depth(uint32_t value) {
  _has_bits_[0] |= 0x00000002u;
  bit_depth_ = value;
}
inline void AudioConfig::set_bit_depth(uint32_t value) {
  _internal_set_bit_depth(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.AudioConfig.bit_depth)
}

// required uint32 channel_count = 3;
inline bool AudioConfig::_internal_has_channel_count() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool AudioConfig::has_channel_count() const {
  return _internal_has_channel_count();
}
inline void AudioConfig::clear_channel_count() {
  channel_count_ = 0u;
  _has_bits_[0] &= ~0x00000004u;
}
inline uint32_t AudioConfig::_internal_channel_count() const {
  return channel_count_;
}
inline uint32_t AudioConfig::channel_count() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.AudioConfig.channel_count)
  return _internal_channel_count();
}
inline void AudioConfig::_internal_set_channel_count(uint32_t value) {
  _has_bits_[0] |= 0x00000004u;
  channel_count_ = value;
}
inline void AudioConfig::set_channel_count(uint32_t value) {
  _internal_set_channel_count(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.AudioConfig.channel_count)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_AudioConfigData_2eproto
