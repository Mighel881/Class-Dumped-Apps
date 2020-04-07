//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/NSCoding-Protocol.h>

@class NSString;

@interface DBMetadataModifier : NSObject <NSCoding>
{
    NSString *_displayName;
    NSString *_email;
    NSString *_userId;
    NSString *_accountId;
}

+ (_Bool)db_equalsOrBothNil:(id)arg1 against:(id)arg2;
+ (id)modifierWithModifierDict:(id)arg1;
@property(readonly, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(readonly, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayName:(id)arg1 email:(id)arg2 userId:(id)arg3 accountId:(id)arg4;

@end
