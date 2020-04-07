//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBSHARINGLinkPermissions, DBSHARINGTeamMemberInfo, DBUSERSTeam, NSDate, NSString;

@interface DBSHARINGSharedLinkMetadata : NSObject <DBSerializable, NSCopying>
{
    NSString *_url;
    NSString *_id_;
    NSString *_name;
    NSDate *_expires;
    NSString *_pathLower;
    DBSHARINGLinkPermissions *_linkPermissions;
    DBSHARINGTeamMemberInfo *_teamMemberInfo;
    DBUSERSTeam *_contentOwnerTeamInfo;
    NSString *_iconUrl;
    NSString *_previewType;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, copy, nonatomic) NSString *previewType; // @synthesize previewType=_previewType;
@property(readonly, copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(readonly, nonatomic) DBUSERSTeam *contentOwnerTeamInfo; // @synthesize contentOwnerTeamInfo=_contentOwnerTeamInfo;
@property(readonly, nonatomic) DBSHARINGTeamMemberInfo *teamMemberInfo; // @synthesize teamMemberInfo=_teamMemberInfo;
@property(readonly, nonatomic) DBSHARINGLinkPermissions *linkPermissions; // @synthesize linkPermissions=_linkPermissions;
@property(readonly, copy, nonatomic) NSString *pathLower; // @synthesize pathLower=_pathLower;
@property(readonly, nonatomic) NSDate *expires; // @synthesize expires=_expires;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *id_; // @synthesize id_=_id_;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)isEqualToSharedLinkMetadata:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithUrl:(id)arg1 name:(id)arg2 linkPermissions:(id)arg3 iconUrl:(id)arg4;
- (id)initWithUrl:(id)arg1 name:(id)arg2 linkPermissions:(id)arg3 iconUrl:(id)arg4 id_:(id)arg5 expires:(id)arg6 pathLower:(id)arg7 teamMemberInfo:(id)arg8 contentOwnerTeamInfo:(id)arg9 previewType:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
