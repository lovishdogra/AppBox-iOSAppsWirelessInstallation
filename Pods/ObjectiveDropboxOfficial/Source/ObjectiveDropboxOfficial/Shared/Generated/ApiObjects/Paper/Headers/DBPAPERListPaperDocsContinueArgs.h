///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBPAPERListPaperDocsContinueArgs;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListPaperDocsContinueArgs` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPAPERListPaperDocsContinueArgs : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The cursor obtained from `docsList` or `docsListContinue`. Allows for
/// pagination.
@property (nonatomic, readonly, copy) NSString *cursor;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param cursor The cursor obtained from `docsList` or `docsListContinue`.
/// Allows for pagination.
///
/// @return An initialized instance.
///
- (instancetype)initWithCursor:(NSString *)cursor;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListPaperDocsContinueArgs` struct.
///
@interface DBPAPERListPaperDocsContinueArgsSerializer : NSObject

///
/// Serializes `DBPAPERListPaperDocsContinueArgs` instances.
///
/// @param instance An instance of the `DBPAPERListPaperDocsContinueArgs` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPAPERListPaperDocsContinueArgs` API object.
///
+ (NSDictionary *)serialize:(DBPAPERListPaperDocsContinueArgs *)instance;

///
/// Deserializes `DBPAPERListPaperDocsContinueArgs` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPAPERListPaperDocsContinueArgs` API object.
///
/// @return An instantiation of the `DBPAPERListPaperDocsContinueArgs` object.
///
+ (DBPAPERListPaperDocsContinueArgs *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END