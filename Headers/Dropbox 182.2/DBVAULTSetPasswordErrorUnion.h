//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBVAULTInvalidCredentialError, NSString;

@interface DBVAULTSetPasswordErrorUnion : NSObject <DBSerializable, NSCopying>
{
    DBVAULTInvalidCredentialError *_invalidCredential;
    long long _tag;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (_Bool)isEqualToSetPasswordErrorUnion:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)tagName;
- (_Bool)isOther;
- (_Bool)isInvalidNewPassword;
- (_Bool)isInvalidCredential;
- (_Bool)isNoVault;
@property(readonly, nonatomic) DBVAULTInvalidCredentialError *invalidCredential; // @synthesize invalidCredential=_invalidCredential;
- (id)initWithOther;
- (id)initWithInvalidNewPassword;
- (id)initWithInvalidCredential:(id)arg1;
- (id)initWithNoVault;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

