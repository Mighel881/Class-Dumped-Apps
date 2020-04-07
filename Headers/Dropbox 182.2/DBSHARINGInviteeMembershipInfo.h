//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/DBSHARINGMembershipInfo.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBSHARINGInviteeInfo, DBSHARINGUserInfo, NSString;

@interface DBSHARINGInviteeMembershipInfo : DBSHARINGMembershipInfo <DBSerializable, NSCopying>
{
    DBSHARINGInviteeInfo *_invitee;
    DBSHARINGUserInfo *_user;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) DBSHARINGUserInfo *user; // @synthesize user=_user;
@property(readonly, nonatomic) DBSHARINGInviteeInfo *invitee; // @synthesize invitee=_invitee;
- (void).cxx_destruct;
- (_Bool)isEqualToInviteeMembershipInfo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithAccessType:(id)arg1 invitee:(id)arg2;
- (id)initWithAccessType:(id)arg1 invitee:(id)arg2 permissions:(id)arg3 initials:(id)arg4 isInherited:(id)arg5 inheritedAccessType:(id)arg6 user:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
