///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMTeamFolderAccessError;
@class DBTEAMTeamFolderInvalidStatusError;
@class DBTEAMTeamFolderPermanentlyDeleteError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamFolderPermanentlyDeleteError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMTeamFolderPermanentlyDeleteError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMTeamFolderPermanentlyDeleteErrorTag` enum type represents the
/// possible tag states with which the `DBTEAMTeamFolderPermanentlyDeleteError`
/// union can exist.
typedef NS_ENUM(NSInteger, DBTEAMTeamFolderPermanentlyDeleteErrorTag) {
  /// (no description).
  DBTEAMTeamFolderPermanentlyDeleteErrorAccessError,

  /// (no description).
  DBTEAMTeamFolderPermanentlyDeleteErrorStatusError,

  /// (no description).
  DBTEAMTeamFolderPermanentlyDeleteErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMTeamFolderPermanentlyDeleteErrorTag tag;

/// (no description). @note Ensure the `isAccessError` method returns true
/// before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBTEAMTeamFolderAccessError *accessError;

/// (no description). @note Ensure the `isStatusError` method returns true
/// before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBTEAMTeamFolderInvalidStatusError *statusError;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "access_error".
///
/// @param accessError (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithAccessError:(DBTEAMTeamFolderAccessError *)accessError;

///
/// Initializes union class with tag state of "status_error".
///
/// @param statusError (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithStatusError:(DBTEAMTeamFolderInvalidStatusError *)statusError;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "access_error".
///
/// @note Call this method and ensure it returns true before accessing the
/// `accessError` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "access_error".
///
- (BOOL)isAccessError;

///
/// Retrieves whether the union's current tag state has value "status_error".
///
/// @note Call this method and ensure it returns true before accessing the
/// `statusError` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "status_error".
///
- (BOOL)isStatusError;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMTeamFolderPermanentlyDeleteError`
/// union.
///
@interface DBTEAMTeamFolderPermanentlyDeleteErrorSerializer : NSObject

///
/// Serializes `DBTEAMTeamFolderPermanentlyDeleteError` instances.
///
/// @param instance An instance of the `DBTEAMTeamFolderPermanentlyDeleteError`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMTeamFolderPermanentlyDeleteError` API object.
///
+ (NSDictionary *)serialize:(DBTEAMTeamFolderPermanentlyDeleteError *)instance;

///
/// Deserializes `DBTEAMTeamFolderPermanentlyDeleteError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMTeamFolderPermanentlyDeleteError` API object.
///
/// @return An instantiation of the `DBTEAMTeamFolderPermanentlyDeleteError`
/// object.
///
+ (DBTEAMTeamFolderPermanentlyDeleteError *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
