//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface AWEUserCommercePermissionModel : MTLModel <MTLJSONSerializing>
{
    _Bool _businessPortalPermission;
    long long _videoTopPermission;
    long long _linkAdPermission;
    long long _starAtlasPermission;
    long long _enterpriseAccount;
    long long _enterpriseHeadImage;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool businessPortalPermission; // @synthesize businessPortalPermission=_businessPortalPermission;
@property(nonatomic) long long enterpriseHeadImage; // @synthesize enterpriseHeadImage=_enterpriseHeadImage;
@property(nonatomic) long long enterpriseAccount; // @synthesize enterpriseAccount=_enterpriseAccount;
@property(nonatomic) long long starAtlasPermission; // @synthesize starAtlasPermission=_starAtlasPermission;
@property(nonatomic) long long linkAdPermission; // @synthesize linkAdPermission=_linkAdPermission;
@property(nonatomic) long long videoTopPermission; // @synthesize videoTopPermission=_videoTopPermission;
- (_Bool)shouldAuthorizedLinkAdAuthorize;
- (_Bool)shouldShowLinkAdAuthorize;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
