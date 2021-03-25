// Protocol Buffers - Google's data interchange format
// Copyright 2008 Google Inc.  All rights reserved.
// https://developers.google.com/protocol-buffers/
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#import <Foundation/Foundation.h>

#import "LCGPBRuntimeTypes.h"

// Note on naming: for the classes holding numeric values, a more natural
// naming of the method might be things like "-valueForKey:",
// "-setValue:forKey:"; etc. But those selectors are also defined by Key Value
// Coding (KVC) as categories on NSObject. So "overloading" the selectors with
// other meanings can cause warnings (based on compiler settings), but more
// importantly, some of those selector get called as KVC breaks up keypaths.
// So if those selectors are used, using KVC will compile cleanly, but could
// crash as it invokes those selectors with the wrong types of arguments.

NS_ASSUME_NONNULL_BEGIN

//%PDDM-EXPAND DECLARE_DICTIONARIES()
// This block of code is generated, do not edit it directly.
// clang-format off

#pragma mark - UInt32 -> UInt32

/**
 * Class used for map fields of <uint32_t, uint32_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBUInt32UInt32Dictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithUInt32s:(const uint32_t [__nullable])values
                        forKeys:(const uint32_t [__nullable])keys
                          count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBUInt32UInt32Dictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getUInt32:(nullable uint32_t *)value forKey:(uint32_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndUInt32sUsingBlock:
    (void (NS_NOESCAPE ^)(uint32_t key, uint32_t value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBUInt32UInt32Dictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setUInt32:(uint32_t)value forKey:(uint32_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeUInt32ForKey:(uint32_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - UInt32 -> Int32

/**
 * Class used for map fields of <uint32_t, int32_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBUInt32Int32Dictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithInt32s:(const int32_t [__nullable])values
                       forKeys:(const uint32_t [__nullable])keys
                         count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBUInt32Int32Dictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getInt32:(nullable int32_t *)value forKey:(uint32_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndInt32sUsingBlock:
    (void (NS_NOESCAPE ^)(uint32_t key, int32_t value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBUInt32Int32Dictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setInt32:(int32_t)value forKey:(uint32_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeInt32ForKey:(uint32_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - UInt32 -> UInt64

/**
 * Class used for map fields of <uint32_t, uint64_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBUInt32UInt64Dictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithUInt64s:(const uint64_t [__nullable])values
                        forKeys:(const uint32_t [__nullable])keys
                          count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBUInt32UInt64Dictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getUInt64:(nullable uint64_t *)value forKey:(uint32_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndUInt64sUsingBlock:
    (void (NS_NOESCAPE ^)(uint32_t key, uint64_t value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBUInt32UInt64Dictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setUInt64:(uint64_t)value forKey:(uint32_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeUInt64ForKey:(uint32_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - UInt32 -> Int64

/**
 * Class used for map fields of <uint32_t, int64_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBUInt32Int64Dictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithInt64s:(const int64_t [__nullable])values
                       forKeys:(const uint32_t [__nullable])keys
                         count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBUInt32Int64Dictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getInt64:(nullable int64_t *)value forKey:(uint32_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndInt64sUsingBlock:
    (void (NS_NOESCAPE ^)(uint32_t key, int64_t value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBUInt32Int64Dictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setInt64:(int64_t)value forKey:(uint32_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeInt64ForKey:(uint32_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - UInt32 -> Bool

/**
 * Class used for map fields of <uint32_t, BOOL>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBUInt32BoolDictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithBools:(const BOOL [__nullable])values
                      forKeys:(const uint32_t [__nullable])keys
                        count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBUInt32BoolDictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getBool:(nullable BOOL *)value forKey:(uint32_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndBoolsUsingBlock:
    (void (NS_NOESCAPE ^)(uint32_t key, BOOL value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBUInt32BoolDictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setBool:(BOOL)value forKey:(uint32_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeBoolForKey:(uint32_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - UInt32 -> Float

/**
 * Class used for map fields of <uint32_t, float>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBUInt32FloatDictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithFloats:(const float [__nullable])values
                       forKeys:(const uint32_t [__nullable])keys
                         count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBUInt32FloatDictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getFloat:(nullable float *)value forKey:(uint32_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndFloatsUsingBlock:
    (void (NS_NOESCAPE ^)(uint32_t key, float value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBUInt32FloatDictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setFloat:(float)value forKey:(uint32_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeFloatForKey:(uint32_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - UInt32 -> Double

/**
 * Class used for map fields of <uint32_t, double>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBUInt32DoubleDictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithDoubles:(const double [__nullable])values
                        forKeys:(const uint32_t [__nullable])keys
                          count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBUInt32DoubleDictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getDouble:(nullable double *)value forKey:(uint32_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndDoublesUsingBlock:
    (void (NS_NOESCAPE ^)(uint32_t key, double value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBUInt32DoubleDictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setDouble:(double)value forKey:(uint32_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeDoubleForKey:(uint32_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - UInt32 -> Enum

/**
 * Class used for map fields of <uint32_t, int32_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBUInt32EnumDictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;
/** The validation function to check if the enums are valid. */
@property(nonatomic, readonly) LCGPBEnumValidationFunc validationFunc;

/**
 * Initializes a dictionary with the given validation function.
 *
 * @param func The enum validation function for the dictionary.
 *
 * @return A newly initialized dictionary.
 **/
- (instancetype)initWithValidationFunction:(nullable LCGPBEnumValidationFunc)func;

/**
 * Initializes a dictionary with the entries given.
 *
 * @param func   The enum validation function for the dictionary.
 * @param values The raw enum values values to be placed in the dictionary.
 * @param keys   The keys under which to store the values.
 * @param count  The number of entries to store in the dictionary.
 *
 * @return A newly initialized dictionary with the keys and values in it.
 **/
- (instancetype)initWithValidationFunction:(nullable LCGPBEnumValidationFunc)func
                                 rawValues:(const int32_t [__nullable])values
                                   forKeys:(const uint32_t [__nullable])keys
                                     count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes a dictionary with the entries from the given.
 * dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to the dictionary.
 *
 * @return A newly initialized dictionary with the entries from the given
 *         dictionary in it.
 **/
- (instancetype)initWithDictionary:(LCGPBUInt32EnumDictionary *)dictionary;

/**
 * Initializes a dictionary with the given capacity.
 *
 * @param func     The enum validation function for the dictionary.
 * @param numItems Capacity needed for the dictionary.
 *
 * @return A newly initialized dictionary with the given capacity.
 **/
- (instancetype)initWithValidationFunction:(nullable LCGPBEnumValidationFunc)func
                                  capacity:(NSUInteger)numItems;

// These will return kLCGPBUnrecognizedEnumeratorValue if the value for the key
// is not a valid enumerator as defined by validationFunc. If the actual value is
// desired, use "raw" version of the method.

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getEnum:(nullable int32_t *)value forKey:(uint32_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndEnumsUsingBlock:
    (void (NS_NOESCAPE ^)(uint32_t key, int32_t value, BOOL *stop))block;

/**
 * Gets the raw enum value for the given key.
 *
 * @note This method bypass the validationFunc to enable the access of values that
 *       were not known at the time the binary was compiled.
 *
 * @param rawValue Pointer into which the value will be set, if found.
 * @param key      Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getRawValue:(nullable int32_t *)rawValue forKey:(uint32_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @note This method bypass the validationFunc to enable the access of values that
 *       were not known at the time the binary was compiled.
 *
 * @param block The block to enumerate with.
 *   **key**:      The key for the current entry.
 *   **rawValue**: The value for the current entry
 *   **stop**:     A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndRawValuesUsingBlock:
    (void (NS_NOESCAPE ^)(uint32_t key, int32_t rawValue, BOOL *stop))block;

/**
 * Adds the keys and raw enum values from another dictionary.
 *
 * @note This method bypass the validationFunc to enable the setting of values that
 *       were not known at the time the binary was compiled.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addRawEntriesFromDictionary:(LCGPBUInt32EnumDictionary *)otherDictionary;

// If value is not a valid enumerator as defined by validationFunc, these
// methods will assert in debug, and will log in release and assign the value
// to the default value. Use the rawValue methods below to assign non enumerator
// values.

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setEnum:(int32_t)value forKey:(uint32_t)key;

/**
 * Sets the raw enum value for the given key.
 *
 * @note This method bypass the validationFunc to enable the setting of values that
 *       were not known at the time the binary was compiled.
 *
 * @param rawValue The raw enum value to set.
 * @param key      The key under which to store the raw enum value.
 **/
- (void)setRawValue:(int32_t)rawValue forKey:(uint32_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeEnumForKey:(uint32_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - UInt32 -> Object

/**
 * Class used for map fields of <uint32_t, ObjectType>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBUInt32ObjectDictionary<__covariant ObjectType> : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param objects      The values to be placed in this dictionary.
 * @param keys         The keys under which to store the values.
 * @param count        The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithObjects:(const ObjectType __nonnull LCGPB_UNSAFE_UNRETAINED [__nullable])objects
                        forKeys:(const uint32_t [__nullable])keys
                          count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBUInt32ObjectDictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Fetches the object stored under the given key.
 *
 * @param key Key under which the value is stored, if present.
 *
 * @return The object if found, nil otherwise.
 **/
- (ObjectType)objectForKey:(uint32_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:         The key for the current entry.
 *   **object**:      The value for the current entry
 *   **stop**:        A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndObjectsUsingBlock:
    (void (NS_NOESCAPE ^)(uint32_t key, ObjectType object, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBUInt32ObjectDictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param object     The value to set.
 * @param key        The key under which to store the value.
 **/
- (void)setObject:(ObjectType)object forKey:(uint32_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeObjectForKey:(uint32_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Int32 -> UInt32

/**
 * Class used for map fields of <int32_t, uint32_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBInt32UInt32Dictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithUInt32s:(const uint32_t [__nullable])values
                        forKeys:(const int32_t [__nullable])keys
                          count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBInt32UInt32Dictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getUInt32:(nullable uint32_t *)value forKey:(int32_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndUInt32sUsingBlock:
    (void (NS_NOESCAPE ^)(int32_t key, uint32_t value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBInt32UInt32Dictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setUInt32:(uint32_t)value forKey:(int32_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeUInt32ForKey:(int32_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Int32 -> Int32

/**
 * Class used for map fields of <int32_t, int32_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBInt32Int32Dictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithInt32s:(const int32_t [__nullable])values
                       forKeys:(const int32_t [__nullable])keys
                         count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBInt32Int32Dictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getInt32:(nullable int32_t *)value forKey:(int32_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndInt32sUsingBlock:
    (void (NS_NOESCAPE ^)(int32_t key, int32_t value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBInt32Int32Dictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setInt32:(int32_t)value forKey:(int32_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeInt32ForKey:(int32_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Int32 -> UInt64

/**
 * Class used for map fields of <int32_t, uint64_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBInt32UInt64Dictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithUInt64s:(const uint64_t [__nullable])values
                        forKeys:(const int32_t [__nullable])keys
                          count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBInt32UInt64Dictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getUInt64:(nullable uint64_t *)value forKey:(int32_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndUInt64sUsingBlock:
    (void (NS_NOESCAPE ^)(int32_t key, uint64_t value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBInt32UInt64Dictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setUInt64:(uint64_t)value forKey:(int32_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeUInt64ForKey:(int32_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Int32 -> Int64

/**
 * Class used for map fields of <int32_t, int64_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBInt32Int64Dictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithInt64s:(const int64_t [__nullable])values
                       forKeys:(const int32_t [__nullable])keys
                         count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBInt32Int64Dictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getInt64:(nullable int64_t *)value forKey:(int32_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndInt64sUsingBlock:
    (void (NS_NOESCAPE ^)(int32_t key, int64_t value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBInt32Int64Dictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setInt64:(int64_t)value forKey:(int32_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeInt64ForKey:(int32_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Int32 -> Bool

/**
 * Class used for map fields of <int32_t, BOOL>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBInt32BoolDictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithBools:(const BOOL [__nullable])values
                      forKeys:(const int32_t [__nullable])keys
                        count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBInt32BoolDictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getBool:(nullable BOOL *)value forKey:(int32_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndBoolsUsingBlock:
    (void (NS_NOESCAPE ^)(int32_t key, BOOL value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBInt32BoolDictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setBool:(BOOL)value forKey:(int32_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeBoolForKey:(int32_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Int32 -> Float

/**
 * Class used for map fields of <int32_t, float>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBInt32FloatDictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithFloats:(const float [__nullable])values
                       forKeys:(const int32_t [__nullable])keys
                         count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBInt32FloatDictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getFloat:(nullable float *)value forKey:(int32_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndFloatsUsingBlock:
    (void (NS_NOESCAPE ^)(int32_t key, float value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBInt32FloatDictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setFloat:(float)value forKey:(int32_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeFloatForKey:(int32_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Int32 -> Double

/**
 * Class used for map fields of <int32_t, double>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBInt32DoubleDictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithDoubles:(const double [__nullable])values
                        forKeys:(const int32_t [__nullable])keys
                          count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBInt32DoubleDictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getDouble:(nullable double *)value forKey:(int32_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndDoublesUsingBlock:
    (void (NS_NOESCAPE ^)(int32_t key, double value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBInt32DoubleDictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setDouble:(double)value forKey:(int32_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeDoubleForKey:(int32_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Int32 -> Enum

/**
 * Class used for map fields of <int32_t, int32_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBInt32EnumDictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;
/** The validation function to check if the enums are valid. */
@property(nonatomic, readonly) LCGPBEnumValidationFunc validationFunc;

/**
 * Initializes a dictionary with the given validation function.
 *
 * @param func The enum validation function for the dictionary.
 *
 * @return A newly initialized dictionary.
 **/
- (instancetype)initWithValidationFunction:(nullable LCGPBEnumValidationFunc)func;

/**
 * Initializes a dictionary with the entries given.
 *
 * @param func   The enum validation function for the dictionary.
 * @param values The raw enum values values to be placed in the dictionary.
 * @param keys   The keys under which to store the values.
 * @param count  The number of entries to store in the dictionary.
 *
 * @return A newly initialized dictionary with the keys and values in it.
 **/
- (instancetype)initWithValidationFunction:(nullable LCGPBEnumValidationFunc)func
                                 rawValues:(const int32_t [__nullable])values
                                   forKeys:(const int32_t [__nullable])keys
                                     count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes a dictionary with the entries from the given.
 * dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to the dictionary.
 *
 * @return A newly initialized dictionary with the entries from the given
 *         dictionary in it.
 **/
- (instancetype)initWithDictionary:(LCGPBInt32EnumDictionary *)dictionary;

/**
 * Initializes a dictionary with the given capacity.
 *
 * @param func     The enum validation function for the dictionary.
 * @param numItems Capacity needed for the dictionary.
 *
 * @return A newly initialized dictionary with the given capacity.
 **/
- (instancetype)initWithValidationFunction:(nullable LCGPBEnumValidationFunc)func
                                  capacity:(NSUInteger)numItems;

// These will return kLCGPBUnrecognizedEnumeratorValue if the value for the key
// is not a valid enumerator as defined by validationFunc. If the actual value is
// desired, use "raw" version of the method.

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getEnum:(nullable int32_t *)value forKey:(int32_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndEnumsUsingBlock:
    (void (NS_NOESCAPE ^)(int32_t key, int32_t value, BOOL *stop))block;

/**
 * Gets the raw enum value for the given key.
 *
 * @note This method bypass the validationFunc to enable the access of values that
 *       were not known at the time the binary was compiled.
 *
 * @param rawValue Pointer into which the value will be set, if found.
 * @param key      Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getRawValue:(nullable int32_t *)rawValue forKey:(int32_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @note This method bypass the validationFunc to enable the access of values that
 *       were not known at the time the binary was compiled.
 *
 * @param block The block to enumerate with.
 *   **key**:      The key for the current entry.
 *   **rawValue**: The value for the current entry
 *   **stop**:     A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndRawValuesUsingBlock:
    (void (NS_NOESCAPE ^)(int32_t key, int32_t rawValue, BOOL *stop))block;

/**
 * Adds the keys and raw enum values from another dictionary.
 *
 * @note This method bypass the validationFunc to enable the setting of values that
 *       were not known at the time the binary was compiled.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addRawEntriesFromDictionary:(LCGPBInt32EnumDictionary *)otherDictionary;

// If value is not a valid enumerator as defined by validationFunc, these
// methods will assert in debug, and will log in release and assign the value
// to the default value. Use the rawValue methods below to assign non enumerator
// values.

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setEnum:(int32_t)value forKey:(int32_t)key;

/**
 * Sets the raw enum value for the given key.
 *
 * @note This method bypass the validationFunc to enable the setting of values that
 *       were not known at the time the binary was compiled.
 *
 * @param rawValue The raw enum value to set.
 * @param key      The key under which to store the raw enum value.
 **/
- (void)setRawValue:(int32_t)rawValue forKey:(int32_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeEnumForKey:(int32_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Int32 -> Object

/**
 * Class used for map fields of <int32_t, ObjectType>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBInt32ObjectDictionary<__covariant ObjectType> : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param objects      The values to be placed in this dictionary.
 * @param keys         The keys under which to store the values.
 * @param count        The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithObjects:(const ObjectType __nonnull LCGPB_UNSAFE_UNRETAINED [__nullable])objects
                        forKeys:(const int32_t [__nullable])keys
                          count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBInt32ObjectDictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Fetches the object stored under the given key.
 *
 * @param key Key under which the value is stored, if present.
 *
 * @return The object if found, nil otherwise.
 **/
- (ObjectType)objectForKey:(int32_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:         The key for the current entry.
 *   **object**:      The value for the current entry
 *   **stop**:        A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndObjectsUsingBlock:
    (void (NS_NOESCAPE ^)(int32_t key, ObjectType object, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBInt32ObjectDictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param object     The value to set.
 * @param key        The key under which to store the value.
 **/
- (void)setObject:(ObjectType)object forKey:(int32_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeObjectForKey:(int32_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - UInt64 -> UInt32

/**
 * Class used for map fields of <uint64_t, uint32_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBUInt64UInt32Dictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithUInt32s:(const uint32_t [__nullable])values
                        forKeys:(const uint64_t [__nullable])keys
                          count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBUInt64UInt32Dictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getUInt32:(nullable uint32_t *)value forKey:(uint64_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndUInt32sUsingBlock:
    (void (NS_NOESCAPE ^)(uint64_t key, uint32_t value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBUInt64UInt32Dictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setUInt32:(uint32_t)value forKey:(uint64_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeUInt32ForKey:(uint64_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - UInt64 -> Int32

/**
 * Class used for map fields of <uint64_t, int32_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBUInt64Int32Dictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithInt32s:(const int32_t [__nullable])values
                       forKeys:(const uint64_t [__nullable])keys
                         count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBUInt64Int32Dictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getInt32:(nullable int32_t *)value forKey:(uint64_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndInt32sUsingBlock:
    (void (NS_NOESCAPE ^)(uint64_t key, int32_t value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBUInt64Int32Dictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setInt32:(int32_t)value forKey:(uint64_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeInt32ForKey:(uint64_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - UInt64 -> UInt64

/**
 * Class used for map fields of <uint64_t, uint64_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBUInt64UInt64Dictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithUInt64s:(const uint64_t [__nullable])values
                        forKeys:(const uint64_t [__nullable])keys
                          count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBUInt64UInt64Dictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getUInt64:(nullable uint64_t *)value forKey:(uint64_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndUInt64sUsingBlock:
    (void (NS_NOESCAPE ^)(uint64_t key, uint64_t value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBUInt64UInt64Dictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setUInt64:(uint64_t)value forKey:(uint64_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeUInt64ForKey:(uint64_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - UInt64 -> Int64

/**
 * Class used for map fields of <uint64_t, int64_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBUInt64Int64Dictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithInt64s:(const int64_t [__nullable])values
                       forKeys:(const uint64_t [__nullable])keys
                         count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBUInt64Int64Dictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getInt64:(nullable int64_t *)value forKey:(uint64_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndInt64sUsingBlock:
    (void (NS_NOESCAPE ^)(uint64_t key, int64_t value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBUInt64Int64Dictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setInt64:(int64_t)value forKey:(uint64_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeInt64ForKey:(uint64_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - UInt64 -> Bool

/**
 * Class used for map fields of <uint64_t, BOOL>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBUInt64BoolDictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithBools:(const BOOL [__nullable])values
                      forKeys:(const uint64_t [__nullable])keys
                        count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBUInt64BoolDictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getBool:(nullable BOOL *)value forKey:(uint64_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndBoolsUsingBlock:
    (void (NS_NOESCAPE ^)(uint64_t key, BOOL value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBUInt64BoolDictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setBool:(BOOL)value forKey:(uint64_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeBoolForKey:(uint64_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - UInt64 -> Float

/**
 * Class used for map fields of <uint64_t, float>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBUInt64FloatDictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithFloats:(const float [__nullable])values
                       forKeys:(const uint64_t [__nullable])keys
                         count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBUInt64FloatDictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getFloat:(nullable float *)value forKey:(uint64_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndFloatsUsingBlock:
    (void (NS_NOESCAPE ^)(uint64_t key, float value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBUInt64FloatDictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setFloat:(float)value forKey:(uint64_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeFloatForKey:(uint64_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - UInt64 -> Double

/**
 * Class used for map fields of <uint64_t, double>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBUInt64DoubleDictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithDoubles:(const double [__nullable])values
                        forKeys:(const uint64_t [__nullable])keys
                          count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBUInt64DoubleDictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getDouble:(nullable double *)value forKey:(uint64_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndDoublesUsingBlock:
    (void (NS_NOESCAPE ^)(uint64_t key, double value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBUInt64DoubleDictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setDouble:(double)value forKey:(uint64_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeDoubleForKey:(uint64_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - UInt64 -> Enum

/**
 * Class used for map fields of <uint64_t, int32_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBUInt64EnumDictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;
/** The validation function to check if the enums are valid. */
@property(nonatomic, readonly) LCGPBEnumValidationFunc validationFunc;

/**
 * Initializes a dictionary with the given validation function.
 *
 * @param func The enum validation function for the dictionary.
 *
 * @return A newly initialized dictionary.
 **/
- (instancetype)initWithValidationFunction:(nullable LCGPBEnumValidationFunc)func;

/**
 * Initializes a dictionary with the entries given.
 *
 * @param func   The enum validation function for the dictionary.
 * @param values The raw enum values values to be placed in the dictionary.
 * @param keys   The keys under which to store the values.
 * @param count  The number of entries to store in the dictionary.
 *
 * @return A newly initialized dictionary with the keys and values in it.
 **/
- (instancetype)initWithValidationFunction:(nullable LCGPBEnumValidationFunc)func
                                 rawValues:(const int32_t [__nullable])values
                                   forKeys:(const uint64_t [__nullable])keys
                                     count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes a dictionary with the entries from the given.
 * dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to the dictionary.
 *
 * @return A newly initialized dictionary with the entries from the given
 *         dictionary in it.
 **/
- (instancetype)initWithDictionary:(LCGPBUInt64EnumDictionary *)dictionary;

/**
 * Initializes a dictionary with the given capacity.
 *
 * @param func     The enum validation function for the dictionary.
 * @param numItems Capacity needed for the dictionary.
 *
 * @return A newly initialized dictionary with the given capacity.
 **/
- (instancetype)initWithValidationFunction:(nullable LCGPBEnumValidationFunc)func
                                  capacity:(NSUInteger)numItems;

// These will return kLCGPBUnrecognizedEnumeratorValue if the value for the key
// is not a valid enumerator as defined by validationFunc. If the actual value is
// desired, use "raw" version of the method.

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getEnum:(nullable int32_t *)value forKey:(uint64_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndEnumsUsingBlock:
    (void (NS_NOESCAPE ^)(uint64_t key, int32_t value, BOOL *stop))block;

/**
 * Gets the raw enum value for the given key.
 *
 * @note This method bypass the validationFunc to enable the access of values that
 *       were not known at the time the binary was compiled.
 *
 * @param rawValue Pointer into which the value will be set, if found.
 * @param key      Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getRawValue:(nullable int32_t *)rawValue forKey:(uint64_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @note This method bypass the validationFunc to enable the access of values that
 *       were not known at the time the binary was compiled.
 *
 * @param block The block to enumerate with.
 *   **key**:      The key for the current entry.
 *   **rawValue**: The value for the current entry
 *   **stop**:     A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndRawValuesUsingBlock:
    (void (NS_NOESCAPE ^)(uint64_t key, int32_t rawValue, BOOL *stop))block;

/**
 * Adds the keys and raw enum values from another dictionary.
 *
 * @note This method bypass the validationFunc to enable the setting of values that
 *       were not known at the time the binary was compiled.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addRawEntriesFromDictionary:(LCGPBUInt64EnumDictionary *)otherDictionary;

// If value is not a valid enumerator as defined by validationFunc, these
// methods will assert in debug, and will log in release and assign the value
// to the default value. Use the rawValue methods below to assign non enumerator
// values.

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setEnum:(int32_t)value forKey:(uint64_t)key;

/**
 * Sets the raw enum value for the given key.
 *
 * @note This method bypass the validationFunc to enable the setting of values that
 *       were not known at the time the binary was compiled.
 *
 * @param rawValue The raw enum value to set.
 * @param key      The key under which to store the raw enum value.
 **/
- (void)setRawValue:(int32_t)rawValue forKey:(uint64_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeEnumForKey:(uint64_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - UInt64 -> Object

/**
 * Class used for map fields of <uint64_t, ObjectType>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBUInt64ObjectDictionary<__covariant ObjectType> : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param objects      The values to be placed in this dictionary.
 * @param keys         The keys under which to store the values.
 * @param count        The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithObjects:(const ObjectType __nonnull LCGPB_UNSAFE_UNRETAINED [__nullable])objects
                        forKeys:(const uint64_t [__nullable])keys
                          count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBUInt64ObjectDictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Fetches the object stored under the given key.
 *
 * @param key Key under which the value is stored, if present.
 *
 * @return The object if found, nil otherwise.
 **/
- (ObjectType)objectForKey:(uint64_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:         The key for the current entry.
 *   **object**:      The value for the current entry
 *   **stop**:        A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndObjectsUsingBlock:
    (void (NS_NOESCAPE ^)(uint64_t key, ObjectType object, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBUInt64ObjectDictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param object     The value to set.
 * @param key        The key under which to store the value.
 **/
- (void)setObject:(ObjectType)object forKey:(uint64_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeObjectForKey:(uint64_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Int64 -> UInt32

/**
 * Class used for map fields of <int64_t, uint32_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBInt64UInt32Dictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithUInt32s:(const uint32_t [__nullable])values
                        forKeys:(const int64_t [__nullable])keys
                          count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBInt64UInt32Dictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getUInt32:(nullable uint32_t *)value forKey:(int64_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndUInt32sUsingBlock:
    (void (NS_NOESCAPE ^)(int64_t key, uint32_t value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBInt64UInt32Dictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setUInt32:(uint32_t)value forKey:(int64_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeUInt32ForKey:(int64_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Int64 -> Int32

/**
 * Class used for map fields of <int64_t, int32_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBInt64Int32Dictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithInt32s:(const int32_t [__nullable])values
                       forKeys:(const int64_t [__nullable])keys
                         count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBInt64Int32Dictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getInt32:(nullable int32_t *)value forKey:(int64_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndInt32sUsingBlock:
    (void (NS_NOESCAPE ^)(int64_t key, int32_t value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBInt64Int32Dictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setInt32:(int32_t)value forKey:(int64_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeInt32ForKey:(int64_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Int64 -> UInt64

/**
 * Class used for map fields of <int64_t, uint64_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBInt64UInt64Dictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithUInt64s:(const uint64_t [__nullable])values
                        forKeys:(const int64_t [__nullable])keys
                          count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBInt64UInt64Dictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getUInt64:(nullable uint64_t *)value forKey:(int64_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndUInt64sUsingBlock:
    (void (NS_NOESCAPE ^)(int64_t key, uint64_t value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBInt64UInt64Dictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setUInt64:(uint64_t)value forKey:(int64_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeUInt64ForKey:(int64_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Int64 -> Int64

/**
 * Class used for map fields of <int64_t, int64_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBInt64Int64Dictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithInt64s:(const int64_t [__nullable])values
                       forKeys:(const int64_t [__nullable])keys
                         count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBInt64Int64Dictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getInt64:(nullable int64_t *)value forKey:(int64_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndInt64sUsingBlock:
    (void (NS_NOESCAPE ^)(int64_t key, int64_t value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBInt64Int64Dictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setInt64:(int64_t)value forKey:(int64_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeInt64ForKey:(int64_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Int64 -> Bool

/**
 * Class used for map fields of <int64_t, BOOL>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBInt64BoolDictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithBools:(const BOOL [__nullable])values
                      forKeys:(const int64_t [__nullable])keys
                        count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBInt64BoolDictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getBool:(nullable BOOL *)value forKey:(int64_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndBoolsUsingBlock:
    (void (NS_NOESCAPE ^)(int64_t key, BOOL value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBInt64BoolDictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setBool:(BOOL)value forKey:(int64_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeBoolForKey:(int64_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Int64 -> Float

/**
 * Class used for map fields of <int64_t, float>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBInt64FloatDictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithFloats:(const float [__nullable])values
                       forKeys:(const int64_t [__nullable])keys
                         count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBInt64FloatDictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getFloat:(nullable float *)value forKey:(int64_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndFloatsUsingBlock:
    (void (NS_NOESCAPE ^)(int64_t key, float value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBInt64FloatDictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setFloat:(float)value forKey:(int64_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeFloatForKey:(int64_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Int64 -> Double

/**
 * Class used for map fields of <int64_t, double>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBInt64DoubleDictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithDoubles:(const double [__nullable])values
                        forKeys:(const int64_t [__nullable])keys
                          count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBInt64DoubleDictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getDouble:(nullable double *)value forKey:(int64_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndDoublesUsingBlock:
    (void (NS_NOESCAPE ^)(int64_t key, double value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBInt64DoubleDictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setDouble:(double)value forKey:(int64_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeDoubleForKey:(int64_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Int64 -> Enum

/**
 * Class used for map fields of <int64_t, int32_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBInt64EnumDictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;
/** The validation function to check if the enums are valid. */
@property(nonatomic, readonly) LCGPBEnumValidationFunc validationFunc;

/**
 * Initializes a dictionary with the given validation function.
 *
 * @param func The enum validation function for the dictionary.
 *
 * @return A newly initialized dictionary.
 **/
- (instancetype)initWithValidationFunction:(nullable LCGPBEnumValidationFunc)func;

/**
 * Initializes a dictionary with the entries given.
 *
 * @param func   The enum validation function for the dictionary.
 * @param values The raw enum values values to be placed in the dictionary.
 * @param keys   The keys under which to store the values.
 * @param count  The number of entries to store in the dictionary.
 *
 * @return A newly initialized dictionary with the keys and values in it.
 **/
- (instancetype)initWithValidationFunction:(nullable LCGPBEnumValidationFunc)func
                                 rawValues:(const int32_t [__nullable])values
                                   forKeys:(const int64_t [__nullable])keys
                                     count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes a dictionary with the entries from the given.
 * dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to the dictionary.
 *
 * @return A newly initialized dictionary with the entries from the given
 *         dictionary in it.
 **/
- (instancetype)initWithDictionary:(LCGPBInt64EnumDictionary *)dictionary;

/**
 * Initializes a dictionary with the given capacity.
 *
 * @param func     The enum validation function for the dictionary.
 * @param numItems Capacity needed for the dictionary.
 *
 * @return A newly initialized dictionary with the given capacity.
 **/
- (instancetype)initWithValidationFunction:(nullable LCGPBEnumValidationFunc)func
                                  capacity:(NSUInteger)numItems;

// These will return kLCGPBUnrecognizedEnumeratorValue if the value for the key
// is not a valid enumerator as defined by validationFunc. If the actual value is
// desired, use "raw" version of the method.

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getEnum:(nullable int32_t *)value forKey:(int64_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndEnumsUsingBlock:
    (void (NS_NOESCAPE ^)(int64_t key, int32_t value, BOOL *stop))block;

/**
 * Gets the raw enum value for the given key.
 *
 * @note This method bypass the validationFunc to enable the access of values that
 *       were not known at the time the binary was compiled.
 *
 * @param rawValue Pointer into which the value will be set, if found.
 * @param key      Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getRawValue:(nullable int32_t *)rawValue forKey:(int64_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @note This method bypass the validationFunc to enable the access of values that
 *       were not known at the time the binary was compiled.
 *
 * @param block The block to enumerate with.
 *   **key**:      The key for the current entry.
 *   **rawValue**: The value for the current entry
 *   **stop**:     A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndRawValuesUsingBlock:
    (void (NS_NOESCAPE ^)(int64_t key, int32_t rawValue, BOOL *stop))block;

/**
 * Adds the keys and raw enum values from another dictionary.
 *
 * @note This method bypass the validationFunc to enable the setting of values that
 *       were not known at the time the binary was compiled.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addRawEntriesFromDictionary:(LCGPBInt64EnumDictionary *)otherDictionary;

// If value is not a valid enumerator as defined by validationFunc, these
// methods will assert in debug, and will log in release and assign the value
// to the default value. Use the rawValue methods below to assign non enumerator
// values.

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setEnum:(int32_t)value forKey:(int64_t)key;

/**
 * Sets the raw enum value for the given key.
 *
 * @note This method bypass the validationFunc to enable the setting of values that
 *       were not known at the time the binary was compiled.
 *
 * @param rawValue The raw enum value to set.
 * @param key      The key under which to store the raw enum value.
 **/
- (void)setRawValue:(int32_t)rawValue forKey:(int64_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeEnumForKey:(int64_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Int64 -> Object

/**
 * Class used for map fields of <int64_t, ObjectType>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBInt64ObjectDictionary<__covariant ObjectType> : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param objects      The values to be placed in this dictionary.
 * @param keys         The keys under which to store the values.
 * @param count        The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithObjects:(const ObjectType __nonnull LCGPB_UNSAFE_UNRETAINED [__nullable])objects
                        forKeys:(const int64_t [__nullable])keys
                          count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBInt64ObjectDictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Fetches the object stored under the given key.
 *
 * @param key Key under which the value is stored, if present.
 *
 * @return The object if found, nil otherwise.
 **/
- (ObjectType)objectForKey:(int64_t)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:         The key for the current entry.
 *   **object**:      The value for the current entry
 *   **stop**:        A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndObjectsUsingBlock:
    (void (NS_NOESCAPE ^)(int64_t key, ObjectType object, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBInt64ObjectDictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param object     The value to set.
 * @param key        The key under which to store the value.
 **/
- (void)setObject:(ObjectType)object forKey:(int64_t)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeObjectForKey:(int64_t)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Bool -> UInt32

/**
 * Class used for map fields of <BOOL, uint32_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBBoolUInt32Dictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithUInt32s:(const uint32_t [__nullable])values
                        forKeys:(const BOOL [__nullable])keys
                          count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBBoolUInt32Dictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getUInt32:(nullable uint32_t *)value forKey:(BOOL)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndUInt32sUsingBlock:
    (void (NS_NOESCAPE ^)(BOOL key, uint32_t value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBBoolUInt32Dictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setUInt32:(uint32_t)value forKey:(BOOL)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeUInt32ForKey:(BOOL)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Bool -> Int32

/**
 * Class used for map fields of <BOOL, int32_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBBoolInt32Dictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithInt32s:(const int32_t [__nullable])values
                       forKeys:(const BOOL [__nullable])keys
                         count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBBoolInt32Dictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getInt32:(nullable int32_t *)value forKey:(BOOL)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndInt32sUsingBlock:
    (void (NS_NOESCAPE ^)(BOOL key, int32_t value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBBoolInt32Dictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setInt32:(int32_t)value forKey:(BOOL)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeInt32ForKey:(BOOL)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Bool -> UInt64

/**
 * Class used for map fields of <BOOL, uint64_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBBoolUInt64Dictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithUInt64s:(const uint64_t [__nullable])values
                        forKeys:(const BOOL [__nullable])keys
                          count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBBoolUInt64Dictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getUInt64:(nullable uint64_t *)value forKey:(BOOL)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndUInt64sUsingBlock:
    (void (NS_NOESCAPE ^)(BOOL key, uint64_t value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBBoolUInt64Dictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setUInt64:(uint64_t)value forKey:(BOOL)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeUInt64ForKey:(BOOL)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Bool -> Int64

/**
 * Class used for map fields of <BOOL, int64_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBBoolInt64Dictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithInt64s:(const int64_t [__nullable])values
                       forKeys:(const BOOL [__nullable])keys
                         count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBBoolInt64Dictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getInt64:(nullable int64_t *)value forKey:(BOOL)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndInt64sUsingBlock:
    (void (NS_NOESCAPE ^)(BOOL key, int64_t value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBBoolInt64Dictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setInt64:(int64_t)value forKey:(BOOL)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeInt64ForKey:(BOOL)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Bool -> Bool

/**
 * Class used for map fields of <BOOL, BOOL>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBBoolBoolDictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithBools:(const BOOL [__nullable])values
                      forKeys:(const BOOL [__nullable])keys
                        count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBBoolBoolDictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getBool:(nullable BOOL *)value forKey:(BOOL)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndBoolsUsingBlock:
    (void (NS_NOESCAPE ^)(BOOL key, BOOL value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBBoolBoolDictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setBool:(BOOL)value forKey:(BOOL)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeBoolForKey:(BOOL)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Bool -> Float

/**
 * Class used for map fields of <BOOL, float>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBBoolFloatDictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithFloats:(const float [__nullable])values
                       forKeys:(const BOOL [__nullable])keys
                         count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBBoolFloatDictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getFloat:(nullable float *)value forKey:(BOOL)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndFloatsUsingBlock:
    (void (NS_NOESCAPE ^)(BOOL key, float value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBBoolFloatDictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setFloat:(float)value forKey:(BOOL)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeFloatForKey:(BOOL)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Bool -> Double

/**
 * Class used for map fields of <BOOL, double>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBBoolDoubleDictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithDoubles:(const double [__nullable])values
                        forKeys:(const BOOL [__nullable])keys
                          count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBBoolDoubleDictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getDouble:(nullable double *)value forKey:(BOOL)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndDoublesUsingBlock:
    (void (NS_NOESCAPE ^)(BOOL key, double value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBBoolDoubleDictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setDouble:(double)value forKey:(BOOL)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeDoubleForKey:(BOOL)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Bool -> Enum

/**
 * Class used for map fields of <BOOL, int32_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBBoolEnumDictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;
/** The validation function to check if the enums are valid. */
@property(nonatomic, readonly) LCGPBEnumValidationFunc validationFunc;

/**
 * Initializes a dictionary with the given validation function.
 *
 * @param func The enum validation function for the dictionary.
 *
 * @return A newly initialized dictionary.
 **/
- (instancetype)initWithValidationFunction:(nullable LCGPBEnumValidationFunc)func;

/**
 * Initializes a dictionary with the entries given.
 *
 * @param func   The enum validation function for the dictionary.
 * @param values The raw enum values values to be placed in the dictionary.
 * @param keys   The keys under which to store the values.
 * @param count  The number of entries to store in the dictionary.
 *
 * @return A newly initialized dictionary with the keys and values in it.
 **/
- (instancetype)initWithValidationFunction:(nullable LCGPBEnumValidationFunc)func
                                 rawValues:(const int32_t [__nullable])values
                                   forKeys:(const BOOL [__nullable])keys
                                     count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes a dictionary with the entries from the given.
 * dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to the dictionary.
 *
 * @return A newly initialized dictionary with the entries from the given
 *         dictionary in it.
 **/
- (instancetype)initWithDictionary:(LCGPBBoolEnumDictionary *)dictionary;

/**
 * Initializes a dictionary with the given capacity.
 *
 * @param func     The enum validation function for the dictionary.
 * @param numItems Capacity needed for the dictionary.
 *
 * @return A newly initialized dictionary with the given capacity.
 **/
- (instancetype)initWithValidationFunction:(nullable LCGPBEnumValidationFunc)func
                                  capacity:(NSUInteger)numItems;

// These will return kLCGPBUnrecognizedEnumeratorValue if the value for the key
// is not a valid enumerator as defined by validationFunc. If the actual value is
// desired, use "raw" version of the method.

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getEnum:(nullable int32_t *)value forKey:(BOOL)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndEnumsUsingBlock:
    (void (NS_NOESCAPE ^)(BOOL key, int32_t value, BOOL *stop))block;

/**
 * Gets the raw enum value for the given key.
 *
 * @note This method bypass the validationFunc to enable the access of values that
 *       were not known at the time the binary was compiled.
 *
 * @param rawValue Pointer into which the value will be set, if found.
 * @param key      Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getRawValue:(nullable int32_t *)rawValue forKey:(BOOL)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @note This method bypass the validationFunc to enable the access of values that
 *       were not known at the time the binary was compiled.
 *
 * @param block The block to enumerate with.
 *   **key**:      The key for the current entry.
 *   **rawValue**: The value for the current entry
 *   **stop**:     A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndRawValuesUsingBlock:
    (void (NS_NOESCAPE ^)(BOOL key, int32_t rawValue, BOOL *stop))block;

/**
 * Adds the keys and raw enum values from another dictionary.
 *
 * @note This method bypass the validationFunc to enable the setting of values that
 *       were not known at the time the binary was compiled.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addRawEntriesFromDictionary:(LCGPBBoolEnumDictionary *)otherDictionary;

// If value is not a valid enumerator as defined by validationFunc, these
// methods will assert in debug, and will log in release and assign the value
// to the default value. Use the rawValue methods below to assign non enumerator
// values.

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setEnum:(int32_t)value forKey:(BOOL)key;

/**
 * Sets the raw enum value for the given key.
 *
 * @note This method bypass the validationFunc to enable the setting of values that
 *       were not known at the time the binary was compiled.
 *
 * @param rawValue The raw enum value to set.
 * @param key      The key under which to store the raw enum value.
 **/
- (void)setRawValue:(int32_t)rawValue forKey:(BOOL)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeEnumForKey:(BOOL)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - Bool -> Object

/**
 * Class used for map fields of <BOOL, ObjectType>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBBoolObjectDictionary<__covariant ObjectType> : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param objects      The values to be placed in this dictionary.
 * @param keys         The keys under which to store the values.
 * @param count        The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithObjects:(const ObjectType __nonnull LCGPB_UNSAFE_UNRETAINED [__nullable])objects
                        forKeys:(const BOOL [__nullable])keys
                          count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBBoolObjectDictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Fetches the object stored under the given key.
 *
 * @param key Key under which the value is stored, if present.
 *
 * @return The object if found, nil otherwise.
 **/
- (ObjectType)objectForKey:(BOOL)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:         The key for the current entry.
 *   **object**:      The value for the current entry
 *   **stop**:        A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndObjectsUsingBlock:
    (void (NS_NOESCAPE ^)(BOOL key, ObjectType object, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBBoolObjectDictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param object     The value to set.
 * @param key        The key under which to store the value.
 **/
- (void)setObject:(ObjectType)object forKey:(BOOL)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeObjectForKey:(BOOL)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - String -> UInt32

/**
 * Class used for map fields of <NSString, uint32_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBStringUInt32Dictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithUInt32s:(const uint32_t [__nullable])values
                        forKeys:(const NSString * __nonnull LCGPB_UNSAFE_UNRETAINED [__nullable])keys
                          count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBStringUInt32Dictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getUInt32:(nullable uint32_t *)value forKey:(NSString *)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndUInt32sUsingBlock:
    (void (NS_NOESCAPE ^)(NSString *key, uint32_t value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBStringUInt32Dictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setUInt32:(uint32_t)value forKey:(NSString *)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeUInt32ForKey:(NSString *)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - String -> Int32

/**
 * Class used for map fields of <NSString, int32_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBStringInt32Dictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithInt32s:(const int32_t [__nullable])values
                       forKeys:(const NSString * __nonnull LCGPB_UNSAFE_UNRETAINED [__nullable])keys
                         count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBStringInt32Dictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getInt32:(nullable int32_t *)value forKey:(NSString *)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndInt32sUsingBlock:
    (void (NS_NOESCAPE ^)(NSString *key, int32_t value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBStringInt32Dictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setInt32:(int32_t)value forKey:(NSString *)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeInt32ForKey:(NSString *)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - String -> UInt64

/**
 * Class used for map fields of <NSString, uint64_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBStringUInt64Dictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithUInt64s:(const uint64_t [__nullable])values
                        forKeys:(const NSString * __nonnull LCGPB_UNSAFE_UNRETAINED [__nullable])keys
                          count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBStringUInt64Dictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getUInt64:(nullable uint64_t *)value forKey:(NSString *)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndUInt64sUsingBlock:
    (void (NS_NOESCAPE ^)(NSString *key, uint64_t value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBStringUInt64Dictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setUInt64:(uint64_t)value forKey:(NSString *)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeUInt64ForKey:(NSString *)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - String -> Int64

/**
 * Class used for map fields of <NSString, int64_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBStringInt64Dictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithInt64s:(const int64_t [__nullable])values
                       forKeys:(const NSString * __nonnull LCGPB_UNSAFE_UNRETAINED [__nullable])keys
                         count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBStringInt64Dictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getInt64:(nullable int64_t *)value forKey:(NSString *)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndInt64sUsingBlock:
    (void (NS_NOESCAPE ^)(NSString *key, int64_t value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBStringInt64Dictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setInt64:(int64_t)value forKey:(NSString *)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeInt64ForKey:(NSString *)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - String -> Bool

/**
 * Class used for map fields of <NSString, BOOL>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBStringBoolDictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithBools:(const BOOL [__nullable])values
                      forKeys:(const NSString * __nonnull LCGPB_UNSAFE_UNRETAINED [__nullable])keys
                        count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBStringBoolDictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getBool:(nullable BOOL *)value forKey:(NSString *)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndBoolsUsingBlock:
    (void (NS_NOESCAPE ^)(NSString *key, BOOL value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBStringBoolDictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setBool:(BOOL)value forKey:(NSString *)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeBoolForKey:(NSString *)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - String -> Float

/**
 * Class used for map fields of <NSString, float>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBStringFloatDictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithFloats:(const float [__nullable])values
                       forKeys:(const NSString * __nonnull LCGPB_UNSAFE_UNRETAINED [__nullable])keys
                         count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBStringFloatDictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getFloat:(nullable float *)value forKey:(NSString *)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndFloatsUsingBlock:
    (void (NS_NOESCAPE ^)(NSString *key, float value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBStringFloatDictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setFloat:(float)value forKey:(NSString *)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeFloatForKey:(NSString *)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - String -> Double

/**
 * Class used for map fields of <NSString, double>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBStringDoubleDictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;

/**
 * Initializes this dictionary, copying the given values and keys.
 *
 * @param values      The values to be placed in this dictionary.
 * @param keys        The keys under which to store the values.
 * @param count       The number of elements to copy into the dictionary.
 *
 * @return A newly initialized dictionary with a copy of the values and keys.
 **/
- (instancetype)initWithDoubles:(const double [__nullable])values
                        forKeys:(const NSString * __nonnull LCGPB_UNSAFE_UNRETAINED [__nullable])keys
                          count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes this dictionary, copying the entries from the given dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to this dictionary.
 *
 * @return A newly initialized dictionary with the entries of the given dictionary.
 **/
- (instancetype)initWithDictionary:(LCGPBStringDoubleDictionary *)dictionary;

/**
 * Initializes this dictionary with the requested capacity.
 *
 * @param numItems Number of items needed for this dictionary.
 *
 * @return A newly initialized dictionary with the requested capacity.
 **/
- (instancetype)initWithCapacity:(NSUInteger)numItems;

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getDouble:(nullable double *)value forKey:(NSString *)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndDoublesUsingBlock:
    (void (NS_NOESCAPE ^)(NSString *key, double value, BOOL *stop))block;

/**
 * Adds the keys and values from another dictionary.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addEntriesFromDictionary:(LCGPBStringDoubleDictionary *)otherDictionary;

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setDouble:(double)value forKey:(NSString *)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeDoubleForKey:(NSString *)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

#pragma mark - String -> Enum

/**
 * Class used for map fields of <NSString, int32_t>
 * values. This performs better than boxing into NSNumbers in NSDictionaries.
 *
 * @note This class is not meant to be subclassed.
 **/
@interface LCGPBStringEnumDictionary : NSObject <NSCopying>

/** Number of entries stored in this dictionary. */
@property(nonatomic, readonly) NSUInteger count;
/** The validation function to check if the enums are valid. */
@property(nonatomic, readonly) LCGPBEnumValidationFunc validationFunc;

/**
 * Initializes a dictionary with the given validation function.
 *
 * @param func The enum validation function for the dictionary.
 *
 * @return A newly initialized dictionary.
 **/
- (instancetype)initWithValidationFunction:(nullable LCGPBEnumValidationFunc)func;

/**
 * Initializes a dictionary with the entries given.
 *
 * @param func   The enum validation function for the dictionary.
 * @param values The raw enum values values to be placed in the dictionary.
 * @param keys   The keys under which to store the values.
 * @param count  The number of entries to store in the dictionary.
 *
 * @return A newly initialized dictionary with the keys and values in it.
 **/
- (instancetype)initWithValidationFunction:(nullable LCGPBEnumValidationFunc)func
                                 rawValues:(const int32_t [__nullable])values
                                   forKeys:(const NSString * __nonnull LCGPB_UNSAFE_UNRETAINED [__nullable])keys
                                     count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;

/**
 * Initializes a dictionary with the entries from the given.
 * dictionary.
 *
 * @param dictionary Dictionary containing the entries to add to the dictionary.
 *
 * @return A newly initialized dictionary with the entries from the given
 *         dictionary in it.
 **/
- (instancetype)initWithDictionary:(LCGPBStringEnumDictionary *)dictionary;

/**
 * Initializes a dictionary with the given capacity.
 *
 * @param func     The enum validation function for the dictionary.
 * @param numItems Capacity needed for the dictionary.
 *
 * @return A newly initialized dictionary with the given capacity.
 **/
- (instancetype)initWithValidationFunction:(nullable LCGPBEnumValidationFunc)func
                                  capacity:(NSUInteger)numItems;

// These will return kLCGPBUnrecognizedEnumeratorValue if the value for the key
// is not a valid enumerator as defined by validationFunc. If the actual value is
// desired, use "raw" version of the method.

/**
 * Gets the value for the given key.
 *
 * @param value Pointer into which the value will be set, if found.
 * @param key   Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getEnum:(nullable int32_t *)value forKey:(NSString *)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @param block The block to enumerate with.
 *   **key**:        The key for the current entry.
 *   **value**:      The value for the current entry
 *   **stop**:       A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndEnumsUsingBlock:
    (void (NS_NOESCAPE ^)(NSString *key, int32_t value, BOOL *stop))block;

/**
 * Gets the raw enum value for the given key.
 *
 * @note This method bypass the validationFunc to enable the access of values that
 *       were not known at the time the binary was compiled.
 *
 * @param rawValue Pointer into which the value will be set, if found.
 * @param key      Key under which the value is stored, if present.
 *
 * @return YES if the key was found and the value was copied, NO otherwise.
 **/
- (BOOL)getRawValue:(nullable int32_t *)rawValue forKey:(NSString *)key;

/**
 * Enumerates the keys and values on this dictionary with the given block.
 *
 * @note This method bypass the validationFunc to enable the access of values that
 *       were not known at the time the binary was compiled.
 *
 * @param block The block to enumerate with.
 *   **key**:      The key for the current entry.
 *   **rawValue**: The value for the current entry
 *   **stop**:     A pointer to a boolean that when set stops the enumeration.
 **/
- (void)enumerateKeysAndRawValuesUsingBlock:
    (void (NS_NOESCAPE ^)(NSString *key, int32_t rawValue, BOOL *stop))block;

/**
 * Adds the keys and raw enum values from another dictionary.
 *
 * @note This method bypass the validationFunc to enable the setting of values that
 *       were not known at the time the binary was compiled.
 *
 * @param otherDictionary Dictionary containing entries to be added to this
 *                        dictionary.
 **/
- (void)addRawEntriesFromDictionary:(LCGPBStringEnumDictionary *)otherDictionary;

// If value is not a valid enumerator as defined by validationFunc, these
// methods will assert in debug, and will log in release and assign the value
// to the default value. Use the rawValue methods below to assign non enumerator
// values.

/**
 * Sets the value for the given key.
 *
 * @param value     The value to set.
 * @param key       The key under which to store the value.
 **/
- (void)setEnum:(int32_t)value forKey:(NSString *)key;

/**
 * Sets the raw enum value for the given key.
 *
 * @note This method bypass the validationFunc to enable the setting of values that
 *       were not known at the time the binary was compiled.
 *
 * @param rawValue The raw enum value to set.
 * @param key      The key under which to store the raw enum value.
 **/
- (void)setRawValue:(int32_t)rawValue forKey:(NSString *)key;

/**
 * Removes the entry for the given key.
 *
 * @param aKey Key to be removed from this dictionary.
 **/
- (void)removeEnumForKey:(NSString *)aKey;

/**
 * Removes all entries in this dictionary.
 **/
- (void)removeAll;

@end

// clang-format on
//%PDDM-EXPAND-END DECLARE_DICTIONARIES()

NS_ASSUME_NONNULL_END

//%PDDM-DEFINE DECLARE_DICTIONARIES()
//%DICTIONARY_INTERFACES_FOR_POD_KEY(UInt32, uint32_t)
//%DICTIONARY_INTERFACES_FOR_POD_KEY(Int32, int32_t)
//%DICTIONARY_INTERFACES_FOR_POD_KEY(UInt64, uint64_t)
//%DICTIONARY_INTERFACES_FOR_POD_KEY(Int64, int64_t)
//%DICTIONARY_INTERFACES_FOR_POD_KEY(Bool, BOOL)
//%DICTIONARY_POD_INTERFACES_FOR_KEY(String, NSString, *, OBJECT)
//%PDDM-DEFINE DICTIONARY_INTERFACES_FOR_POD_KEY(KEY_NAME, KEY_TYPE)
//%DICTIONARY_POD_INTERFACES_FOR_KEY(KEY_NAME, KEY_TYPE, , POD)
//%DICTIONARY_POD_KEY_TO_OBJECT_INTERFACE(KEY_NAME, KEY_TYPE, Object, ObjectType)
//%PDDM-DEFINE DICTIONARY_POD_INTERFACES_FOR_KEY(KEY_NAME, KEY_TYPE, KisP, KHELPER)
//%DICTIONARY_KEY_TO_POD_INTERFACE(KEY_NAME, KEY_TYPE, KisP, KHELPER, UInt32, uint32_t)
//%DICTIONARY_KEY_TO_POD_INTERFACE(KEY_NAME, KEY_TYPE, KisP, KHELPER, Int32, int32_t)
//%DICTIONARY_KEY_TO_POD_INTERFACE(KEY_NAME, KEY_TYPE, KisP, KHELPER, UInt64, uint64_t)
//%DICTIONARY_KEY_TO_POD_INTERFACE(KEY_NAME, KEY_TYPE, KisP, KHELPER, Int64, int64_t)
//%DICTIONARY_KEY_TO_POD_INTERFACE(KEY_NAME, KEY_TYPE, KisP, KHELPER, Bool, BOOL)
//%DICTIONARY_KEY_TO_POD_INTERFACE(KEY_NAME, KEY_TYPE, KisP, KHELPER, Float, float)
//%DICTIONARY_KEY_TO_POD_INTERFACE(KEY_NAME, KEY_TYPE, KisP, KHELPER, Double, double)
//%DICTIONARY_KEY_TO_ENUM_INTERFACE(KEY_NAME, KEY_TYPE, KisP, KHELPER, Enum, int32_t)
//%PDDM-DEFINE DICTIONARY_KEY_TO_POD_INTERFACE(KEY_NAME, KEY_TYPE, KisP, KHELPER, VALUE_NAME, VALUE_TYPE)
//%DICTIONARY_COMMON_INTERFACE(KEY_NAME, KEY_TYPE, KisP, KHELPER, VALUE_NAME, VALUE_TYPE, POD, VALUE_NAME, value)
//%PDDM-DEFINE DICTIONARY_POD_KEY_TO_OBJECT_INTERFACE(KEY_NAME, KEY_TYPE, VALUE_NAME, VALUE_TYPE)
//%DICTIONARY_COMMON_INTERFACE(KEY_NAME, KEY_TYPE, , POD, VALUE_NAME, VALUE_TYPE, OBJECT, Object, object)
//%PDDM-DEFINE VALUE_FOR_KEY_POD(KEY_TYPE, VALUE_TYPE, VNAME)
//%/**
//% * Gets the value for the given key.
//% *
//% * @param value Pointer into which the value will be set, if found.
//% * @param key   Key under which the value is stored, if present.
//% *
//% * @return YES if the key was found and the value was copied, NO otherwise.
//% **/
//%- (BOOL)get##VNAME##:(nullable VALUE_TYPE *)value forKey:(KEY_TYPE)key;
//%PDDM-DEFINE VALUE_FOR_KEY_OBJECT(KEY_TYPE, VALUE_TYPE, VNAME)
//%/**
//% * Fetches the object stored under the given key.
//% *
//% * @param key Key under which the value is stored, if present.
//% *
//% * @return The object if found, nil otherwise.
//% **/
//%- (VALUE_TYPE)objectForKey:(KEY_TYPE)key;
//%PDDM-DEFINE VALUE_FOR_KEY_Enum(KEY_TYPE, VALUE_TYPE, VNAME)
//%VALUE_FOR_KEY_POD(KEY_TYPE, VALUE_TYPE, VNAME)
//%PDDM-DEFINE ARRAY_ARG_MODIFIERPOD()
// Nothing
//%PDDM-DEFINE ARRAY_ARG_MODIFIEREnum()
// Nothing
//%PDDM-DEFINE ARRAY_ARG_MODIFIEROBJECT()
//%__nonnull LCGPB_UNSAFE_UNRETAINED ##
//%PDDM-DEFINE DICTIONARY_CLASS_DECLPOD(KEY_NAME, VALUE_NAME, VALUE_TYPE)
//%LCGPB##KEY_NAME##VALUE_NAME##Dictionary
//%PDDM-DEFINE DICTIONARY_CLASS_DECLEnum(KEY_NAME, VALUE_NAME, VALUE_TYPE)
//%LCGPB##KEY_NAME##VALUE_NAME##Dictionary
//%PDDM-DEFINE DICTIONARY_CLASS_DECLOBJECT(KEY_NAME, VALUE_NAME, VALUE_TYPE)
//%LCGPB##KEY_NAME##VALUE_NAME##Dictionary<__covariant VALUE_TYPE>
//%PDDM-DEFINE DICTIONARY_COMMON_INTERFACE(KEY_NAME, KEY_TYPE, KisP, KHELPER, VALUE_NAME, VALUE_TYPE, VHELPER, VNAME, VNAME_VAR)
//%#pragma mark - KEY_NAME -> VALUE_NAME
//%
//%/**
//% * Class used for map fields of <##KEY_TYPE##, ##VALUE_TYPE##>
//% * values. This performs better than boxing into NSNumbers in NSDictionaries.
//% *
//% * @note This class is not meant to be subclassed.
//% **/
//%@interface DICTIONARY_CLASS_DECL##VHELPER(KEY_NAME, VALUE_NAME, VALUE_TYPE) : NSObject <NSCopying>
//%
//%/** Number of entries stored in this dictionary. */
//%@property(nonatomic, readonly) NSUInteger count;
//%
//%/**
//% * Initializes this dictionary, copying the given values and keys.
//% *
//% * @param ##VNAME_VAR##s      The values to be placed in this dictionary.
//% * @param keys ##VNAME_VAR$S##  The keys under which to store the values.
//% * @param count ##VNAME_VAR$S## The number of elements to copy into the dictionary.
//% *
//% * @return A newly initialized dictionary with a copy of the values and keys.
//% **/
//%- (instancetype)initWith##VNAME##s:(const VALUE_TYPE ARRAY_ARG_MODIFIER##VHELPER()[__nullable])##VNAME_VAR##s
//%                ##VNAME$S##  forKeys:(const KEY_TYPE##KisP$S##KisP ARRAY_ARG_MODIFIER##KHELPER()[__nullable])keys
//%                ##VNAME$S##    count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;
//%
//%/**
//% * Initializes this dictionary, copying the entries from the given dictionary.
//% *
//% * @param dictionary Dictionary containing the entries to add to this dictionary.
//% *
//% * @return A newly initialized dictionary with the entries of the given dictionary.
//% **/
//%- (instancetype)initWithDictionary:(LCGPB##KEY_NAME##VALUE_NAME##Dictionary *)dictionary;
//%
//%/**
//% * Initializes this dictionary with the requested capacity.
//% *
//% * @param numItems Number of items needed for this dictionary.
//% *
//% * @return A newly initialized dictionary with the requested capacity.
//% **/
//%- (instancetype)initWithCapacity:(NSUInteger)numItems;
//%
//%DICTIONARY_IMMUTABLE_INTERFACE(KEY_NAME, KEY_TYPE, KisP, VALUE_NAME, VALUE_TYPE, VHELPER, VNAME, VNAME_VAR)
//%
//%/**
//% * Adds the keys and values from another dictionary.
//% *
//% * @param otherDictionary Dictionary containing entries to be added to this
//% *                        dictionary.
//% **/
//%- (void)addEntriesFromDictionary:(LCGPB##KEY_NAME##VALUE_NAME##Dictionary *)otherDictionary;
//%
//%DICTIONARY_MUTABLE_INTERFACE(KEY_NAME, KEY_TYPE, KisP, VALUE_NAME, VALUE_TYPE, VHELPER, VNAME, VNAME_VAR)
//%
//%@end
//%

//%PDDM-DEFINE DICTIONARY_KEY_TO_ENUM_INTERFACE(KEY_NAME, KEY_TYPE, KisP, KHELPER, VALUE_NAME, VALUE_TYPE)
//%DICTIONARY_KEY_TO_ENUM_INTERFACE2(KEY_NAME, KEY_TYPE, KisP, KHELPER, VALUE_NAME, VALUE_TYPE, Enum)
//%PDDM-DEFINE DICTIONARY_KEY_TO_ENUM_INTERFACE2(KEY_NAME, KEY_TYPE, KisP, KHELPER, VALUE_NAME, VALUE_TYPE, VHELPER)
//%#pragma mark - KEY_NAME -> VALUE_NAME
//%
//%/**
//% * Class used for map fields of <##KEY_TYPE##, ##VALUE_TYPE##>
//% * values. This performs better than boxing into NSNumbers in NSDictionaries.
//% *
//% * @note This class is not meant to be subclassed.
//% **/
//%@interface LCGPB##KEY_NAME##VALUE_NAME##Dictionary : NSObject <NSCopying>
//%
//%/** Number of entries stored in this dictionary. */
//%@property(nonatomic, readonly) NSUInteger count;
//%/** The validation function to check if the enums are valid. */
//%@property(nonatomic, readonly) LCGPBEnumValidationFunc validationFunc;
//%
//%/**
//% * Initializes a dictionary with the given validation function.
//% *
//% * @param func The enum validation function for the dictionary.
//% *
//% * @return A newly initialized dictionary.
//% **/
//%- (instancetype)initWithValidationFunction:(nullable LCGPBEnumValidationFunc)func;
//%
//%/**
//% * Initializes a dictionary with the entries given.
//% *
//% * @param func   The enum validation function for the dictionary.
//% * @param values The raw enum values values to be placed in the dictionary.
//% * @param keys   The keys under which to store the values.
//% * @param count  The number of entries to store in the dictionary.
//% *
//% * @return A newly initialized dictionary with the keys and values in it.
//% **/
//%- (instancetype)initWithValidationFunction:(nullable LCGPBEnumValidationFunc)func
//%                                 rawValues:(const VALUE_TYPE ARRAY_ARG_MODIFIER##VHELPER()[__nullable])values
//%                                   forKeys:(const KEY_TYPE##KisP$S##KisP ARRAY_ARG_MODIFIER##KHELPER()[__nullable])keys
//%                                     count:(NSUInteger)count NS_DESIGNATED_INITIALIZER;
//%
//%/**
//% * Initializes a dictionary with the entries from the given.
//% * dictionary.
//% *
//% * @param dictionary Dictionary containing the entries to add to the dictionary.
//% *
//% * @return A newly initialized dictionary with the entries from the given
//% *         dictionary in it.
//% **/
//%- (instancetype)initWithDictionary:(LCGPB##KEY_NAME##VALUE_NAME##Dictionary *)dictionary;
//%
//%/**
//% * Initializes a dictionary with the given capacity.
//% *
//% * @param func     The enum validation function for the dictionary.
//% * @param numItems Capacity needed for the dictionary.
//% *
//% * @return A newly initialized dictionary with the given capacity.
//% **/
//%- (instancetype)initWithValidationFunction:(nullable LCGPBEnumValidationFunc)func
//%                                  capacity:(NSUInteger)numItems;
//%
//%// These will return kLCGPBUnrecognizedEnumeratorValue if the value for the key
//%// is not a valid enumerator as defined by validationFunc. If the actual value is
//%// desired, use "raw" version of the method.
//%
//%DICTIONARY_IMMUTABLE_INTERFACE(KEY_NAME, KEY_TYPE, KisP, VALUE_NAME, VALUE_TYPE, VHELPER, Enum, value)
//%
//%/**
//% * Gets the raw enum value for the given key.
//% *
//% * @note This method bypass the validationFunc to enable the access of values that
//% *       were not known at the time the binary was compiled.
//% *
//% * @param rawValue Pointer into which the value will be set, if found.
//% * @param key      Key under which the value is stored, if present.
//% *
//% * @return YES if the key was found and the value was copied, NO otherwise.
//% **/
//%- (BOOL)getRawValue:(nullable VALUE_TYPE *)rawValue forKey:(KEY_TYPE##KisP$S##KisP)key;
//%
//%/**
//% * Enumerates the keys and values on this dictionary with the given block.
//% *
//% * @note This method bypass the validationFunc to enable the access of values that
//% *       were not known at the time the binary was compiled.
//% *
//% * @param block The block to enumerate with.
//% *   **key**:      The key for the current entry.
//% *   **rawValue**: The value for the current entry
//% *   **stop**:     A pointer to a boolean that when set stops the enumeration.
//% **/
//%- (void)enumerateKeysAndRawValuesUsingBlock:
//%    (void (NS_NOESCAPE ^)(KEY_TYPE KisP##key, VALUE_TYPE rawValue, BOOL *stop))block;
//%
//%/**
//% * Adds the keys and raw enum values from another dictionary.
//% *
//% * @note This method bypass the validationFunc to enable the setting of values that
//% *       were not known at the time the binary was compiled.
//% *
//% * @param otherDictionary Dictionary containing entries to be added to this
//% *                        dictionary.
//% **/
//%- (void)addRawEntriesFromDictionary:(LCGPB##KEY_NAME##VALUE_NAME##Dictionary *)otherDictionary;
//%
//%// If value is not a valid enumerator as defined by validationFunc, these
//%// methods will assert in debug, and will log in release and assign the value
//%// to the default value. Use the rawValue methods below to assign non enumerator
//%// values.
//%
//%DICTIONARY_MUTABLE_INTERFACE(KEY_NAME, KEY_TYPE, KisP, VALUE_NAME, VALUE_TYPE, VHELPER, Enum, value)
//%
//%@end
//%

//%PDDM-DEFINE DICTIONARY_IMMUTABLE_INTERFACE(KEY_NAME, KEY_TYPE, KisP, VALUE_NAME, VALUE_TYPE, VHELPER, VNAME, VNAME_VAR)
//%VALUE_FOR_KEY_##VHELPER(KEY_TYPE##KisP$S##KisP, VALUE_TYPE, VNAME)
//%
//%/**
//% * Enumerates the keys and values on this dictionary with the given block.
//% *
//% * @param block The block to enumerate with.
//% *   **key**: ##VNAME_VAR$S##  The key for the current entry.
//% *   **VNAME_VAR**:      The value for the current entry
//% *   **stop**: ##VNAME_VAR$S## A pointer to a boolean that when set stops the enumeration.
//% **/
//%- (void)enumerateKeysAnd##VNAME##sUsingBlock:
//%    (void (NS_NOESCAPE ^)(KEY_TYPE KisP##key, VALUE_TYPE VNAME_VAR, BOOL *stop))block;

//%PDDM-DEFINE DICTIONARY_MUTABLE_INTERFACE(KEY_NAME, KEY_TYPE, KisP, VALUE_NAME, VALUE_TYPE, VHELPER, VNAME, VNAME_VAR)
//%/**
//% * Sets the value for the given key.
//% *
//% * @param ##VNAME_VAR     The value to set.
//% * @param key ##VNAME_VAR$S## The key under which to store the value.
//% **/
//%- (void)set##VNAME##:(VALUE_TYPE)##VNAME_VAR forKey:(KEY_TYPE##KisP$S##KisP)key;
//%DICTIONARY_EXTRA_MUTABLE_METHODS_##VHELPER(KEY_NAME, KEY_TYPE, KisP, VALUE_NAME, VALUE_TYPE)
//%/**
//% * Removes the entry for the given key.
//% *
//% * @param aKey Key to be removed from this dictionary.
//% **/
//%- (void)remove##VNAME##ForKey:(KEY_TYPE##KisP$S##KisP)aKey;
//%
//%/**
//% * Removes all entries in this dictionary.
//% **/
//%- (void)removeAll;

//%PDDM-DEFINE DICTIONARY_EXTRA_MUTABLE_METHODS_POD(KEY_NAME, KEY_TYPE, KisP, VALUE_NAME, VALUE_TYPE)
// Empty
//%PDDM-DEFINE DICTIONARY_EXTRA_MUTABLE_METHODS_OBJECT(KEY_NAME, KEY_TYPE, KisP, VALUE_NAME, VALUE_TYPE)
// Empty
//%PDDM-DEFINE DICTIONARY_EXTRA_MUTABLE_METHODS_Enum(KEY_NAME, KEY_TYPE, KisP, VALUE_NAME, VALUE_TYPE)
//%
//%/**
//% * Sets the raw enum value for the given key.
//% *
//% * @note This method bypass the validationFunc to enable the setting of values that
//% *       were not known at the time the binary was compiled.
//% *
//% * @param rawValue The raw enum value to set.
//% * @param key      The key under which to store the raw enum value.
//% **/
//%- (void)setRawValue:(VALUE_TYPE)rawValue forKey:(KEY_TYPE##KisP$S##KisP)key;
//%
