//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

#import <DropboxExtensions/DBSharedLinkPermissions-Protocol.h>

@class DBSHARINGLinkPermissions;
@protocol DBLinkAudience, DBLinkResolvedAccessLevel, DBLinkResolvedVisibility;

@interface _TtC22dbx_core_sharing_swift25SharedLinkPermissionsMock : _TtCs12_SwiftObject <DBSharedLinkPermissions>
{
    // Error parsing type: , name: resolvedVisibility
    // Error parsing type: , name: linkAudience
    // Error parsing type: , name: resolvedAccessLevel
    // Error parsing type: , name: shouldUseAudienceAndAccessLevel
    // Error parsing type: , name: stoneLinkPermissions
}

- (_Bool)matchesWithRequested:(long long)arg1;
@property(nonatomic, retain) DBSHARINGLinkPermissions *stoneLinkPermissions; // @synthesize stoneLinkPermissions;
@property(nonatomic, readonly) _Bool shouldUseAudienceAndAccessLevel; // @synthesize shouldUseAudienceAndAccessLevel;
@property(nonatomic, readonly) id <DBLinkResolvedAccessLevel> resolvedAccessLevel; // @synthesize resolvedAccessLevel;
@property(nonatomic, readonly) id <DBLinkAudience> linkAudience; // @synthesize linkAudience;
@property(nonatomic, readonly) id <DBLinkResolvedVisibility> resolvedVisibility; // @synthesize resolvedVisibility;

@end

