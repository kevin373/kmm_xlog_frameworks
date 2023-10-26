#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class Kmm_xlogKmmLog, Kmm_xlogSLogLevel, Kmm_xlogKotlinEnumCompanion, Kmm_xlogKotlinEnum<E>, Kmm_xlogKotlinArray<T>;

@protocol Kmm_xlogKotlinComparable, Kmm_xlogKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface Kmm_xlogBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface Kmm_xlogBase (Kmm_xlogBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface Kmm_xlogMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface Kmm_xlogMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorKmm_xlogKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface Kmm_xlogNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface Kmm_xlogByte : Kmm_xlogNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface Kmm_xlogUByte : Kmm_xlogNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface Kmm_xlogShort : Kmm_xlogNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface Kmm_xlogUShort : Kmm_xlogNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface Kmm_xlogInt : Kmm_xlogNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface Kmm_xlogUInt : Kmm_xlogNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface Kmm_xlogLong : Kmm_xlogNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface Kmm_xlogULong : Kmm_xlogNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface Kmm_xlogFloat : Kmm_xlogNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface Kmm_xlogDouble : Kmm_xlogNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface Kmm_xlogBoolean : Kmm_xlogNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmmLog")))
@interface Kmm_xlogKmmLog : Kmm_xlogBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kmmLog __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Kmm_xlogKmmLog *shared __attribute__((swift_name("shared")));
- (void)appenderFlushSyncIsSync:(BOOL)isSync __attribute__((swift_name("appenderFlushSync(isSync:)")));
- (void)dTag:(NSString * _Nullable)tag content:(NSString *)content __attribute__((swift_name("d(tag:content:)")));
- (void)eTag:(NSString * _Nullable)tag content:(NSString *)content __attribute__((swift_name("e(tag:content:)")));
- (void)iTag:(NSString * _Nullable)tag content:(NSString *)content __attribute__((swift_name("i(tag:content:)")));
- (void)logLevel:(NSString * _Nullable)level content:(NSString *)content __attribute__((swift_name("log(level:content:)")));
- (Kmm_xlogSLogLevel *)mapLevelLevel:(NSString * _Nullable)level __attribute__((swift_name("mapLevel(level:)")));
- (void)setDefaultTagTag:(NSString *)tag __attribute__((swift_name("setDefaultTag(tag:)")));
- (void)setTagLevelTag:(NSString *)tag level:(Kmm_xlogSLogLevel *)level __attribute__((swift_name("setTagLevel(tag:level:)")));
- (void)vTag:(NSString * _Nullable)tag content:(NSString *)content __attribute__((swift_name("v(tag:content:)")));
- (void)wTag:(NSString * _Nullable)tag content:(NSString *)content __attribute__((swift_name("w(tag:content:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol Kmm_xlogKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface Kmm_xlogKotlinEnum<E> : Kmm_xlogBase <Kmm_xlogKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Kmm_xlogKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SLogLevel")))
@interface Kmm_xlogSLogLevel : Kmm_xlogKotlinEnum<Kmm_xlogSLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Kmm_xlogSLogLevel *levelVerbose __attribute__((swift_name("levelVerbose")));
@property (class, readonly) Kmm_xlogSLogLevel *levelDebug __attribute__((swift_name("levelDebug")));
@property (class, readonly) Kmm_xlogSLogLevel *levelInfo __attribute__((swift_name("levelInfo")));
@property (class, readonly) Kmm_xlogSLogLevel *levelWarning __attribute__((swift_name("levelWarning")));
@property (class, readonly) Kmm_xlogSLogLevel *levelError __attribute__((swift_name("levelError")));
@property (class, readonly) Kmm_xlogSLogLevel *levelFatal __attribute__((swift_name("levelFatal")));
@property (class, readonly) Kmm_xlogSLogLevel *levelNone __attribute__((swift_name("levelNone")));
+ (Kmm_xlogKotlinArray<Kmm_xlogSLogLevel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<Kmm_xlogSLogLevel *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmmLogKt")))
@interface Kmm_xlogKmmLogKt : Kmm_xlogBase
+ (void)initializeMarsXLogLevel:(int32_t)level namePrefix:(NSString *)namePrefix logDir:(NSString *)logDir mode:(int32_t)mode marsKey:(NSString *)marsKey logToConsole:(BOOL)logToConsole __attribute__((swift_name("initializeMarsXLog(level:namePrefix:logDir:mode:marsKey:logToConsole:)")));
+ (Kmm_xlogSLogLevel *)toLevelToSLogLevel:(int32_t)receiver __attribute__((swift_name("toLevelToSLogLevel(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface Kmm_xlogKotlinEnumCompanion : Kmm_xlogBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Kmm_xlogKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface Kmm_xlogKotlinArray<T> : Kmm_xlogBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(Kmm_xlogInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<Kmm_xlogKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol Kmm_xlogKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
