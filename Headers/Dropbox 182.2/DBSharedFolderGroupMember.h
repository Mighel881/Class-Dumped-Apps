//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface DBSharedFolderGroupMember : NSObject
{
    NSSet *_groupActions;
    _Bool _sameTeam;
    _Bool _isTeamGroup;
    long long _accessType;
    NSString *_displayName;
    NSString *_groupId;
    unsigned long long _memberCount;
    NSString *_sharedFolderId;
}

+ (id)jsonShape;
+ (id)createWithDictionary:(id)arg1 sharedFolderId:(id)arg2 error:(id *)arg3;
+ (id)groupMembersFromDictionaries:(id)arg1 sharedFolderId:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSString *sharedFolderId; // @synthesize sharedFolderId=_sharedFolderId;
@property(readonly, nonatomic) _Bool isTeamGroup; // @synthesize isTeamGroup=_isTeamGroup;
@property(readonly, nonatomic) _Bool sameTeam; // @synthesize sameTeam=_sameTeam;
@property(readonly, nonatomic) unsigned long long memberCount; // @synthesize memberCount=_memberCount;
@property(readonly, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) long long accessType; // @synthesize accessType=_accessType;
- (void).cxx_destruct;
- (_Bool)hasGroupMemberAction:(long long)arg1;
- (id)initWithDictionary:(id)arg1 sharedFolderId:(id)arg2;

@end
