//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBFILETRANSFERSCapacityError, DBFILETRANSFERSNoPermissionError, DBFILETRANSFERSNotFoundError, DBFILETRANSFERSPasswordError, NSString;

@interface DBFILETRANSFERSErrorTypeUnion : NSObject <DBSerializable, NSCopying>
{
    DBFILETRANSFERSCapacityError *_capacityError;
    DBFILETRANSFERSPasswordError *_passwordError;
    DBFILETRANSFERSNotFoundError *_notFoundError;
    DBFILETRANSFERSNoPermissionError *_noPermissionError;
    long long _tag;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (_Bool)isEqualToErrorTypeUnion:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)tagName;
- (_Bool)isOther;
- (_Bool)isNoPermissionError;
- (_Bool)isNotFoundError;
- (_Bool)isPasswordError;
- (_Bool)isCapacityError;
@property(readonly, nonatomic) DBFILETRANSFERSNoPermissionError *noPermissionError; // @synthesize noPermissionError=_noPermissionError;
@property(readonly, nonatomic) DBFILETRANSFERSNotFoundError *notFoundError; // @synthesize notFoundError=_notFoundError;
@property(readonly, nonatomic) DBFILETRANSFERSPasswordError *passwordError; // @synthesize passwordError=_passwordError;
@property(readonly, nonatomic) DBFILETRANSFERSCapacityError *capacityError; // @synthesize capacityError=_capacityError;
- (id)initWithOther;
- (id)initWithNoPermissionError:(id)arg1;
- (id)initWithNotFoundError:(id)arg1;
- (id)initWithPasswordError:(id)arg1;
- (id)initWithCapacityError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
