//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL;

@interface T1URTTimelineListViewModel : NSObject
{
    // Error parsing type: , name: entryID
    // Error parsing type: , name: twitterList
    // Error parsing type: , name: listOwner
    // Error parsing type: , name: clientEventInfo
    // Error parsing type: , name: feedbackContext
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *scribeComponent;
@property(nonatomic, readonly) _Bool ownerIsVerifiedUser;
@property(nonatomic, readonly) _Bool showAvatarView;
@property(nonatomic, readonly) _Bool isSphere;
@property(nonatomic, readonly) NSString *text;
@property(nonatomic, readonly) NSURL *bannerImageUrl;
- (id)legacyList;
@property(nonatomic, readonly) NSString *ownerDisplayFullName;
@property(nonatomic, readonly) NSString *ownerUsername;
@property(nonatomic, readonly) NSNumber *ownerUserIDNumber;
@property(nonatomic, readonly) long long ownerUserID;
@property(nonatomic, readonly) unsigned long long followingState;
@property(nonatomic, readonly) _Bool requiresLegacyHydration;
@property(nonatomic, readonly) _Bool isPrivate;
@property(nonatomic, readonly) long long subscriberCount;
@property(nonatomic, readonly) long long memberCount;
@property(nonatomic, readonly) NSString *desc;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSString *displayName;
@property(nonatomic, readonly) NSNumber *listIDNumber;
@property(nonatomic, readonly) long long listID;

@end
