//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DBSharedContentMemberCardController, DBSharedContentMembershipInfo;

@protocol DBSharedContentMemberCardDelegate <NSObject>
- (void)updateSharedContentMetadata;
- (void)sharedContentMemberCardController:(DBSharedContentMemberCardController *)arg1 removedMember:(DBSharedContentMembershipInfo *)arg2;
- (void)sharedContentMemberCardController:(DBSharedContentMemberCardController *)arg1 updatedMember:(DBSharedContentMembershipInfo *)arg2 shouldDismissCardController:(_Bool)arg3;
@end

