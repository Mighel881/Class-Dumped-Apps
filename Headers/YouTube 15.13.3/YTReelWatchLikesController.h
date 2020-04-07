//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTResponder-Protocol.h"

@class GIMMe, NSMutableDictionary, NSString, YTQTMButton;
@protocol YTReelWatchLikesControllerDelegate, YTResponder;

@interface YTReelWatchLikesController : NSObject <YTResponder>
{
    NSMutableDictionary *_videoIDToModelDictionary;
    NSMutableDictionary *_requestToModelDictionary;
    long long _requestNum;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    YTQTMButton *_likeButton;
    YTQTMButton *_dislikeButton;
    id <YTReelWatchLikesControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <YTReelWatchLikesControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YTQTMButton *dislikeButton; // @synthesize dislikeButton=_dislikeButton;
@property(retain, nonatomic) YTQTMButton *likeButton; // @synthesize likeButton=_likeButton;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)triggerServiceEndpointForLikeModel:(id)arg1;
- (void)didTap:(id)arg1;
- (id)likeModelForLikeButtonRenderer:(id)arg1;
- (void)toggleLikeStatus:(int)arg1 forModel:(id)arg2;
- (void)handleRollbackForVideoID:(id)arg1 requestID:(long long)arg2;
- (void)updateLikeButtonWithModel:(id)arg1 animated:(_Bool)arg2;
- (void)updateLikeButtonWithRenderer:(id)arg1;
- (int)likeStatusForRenderer:(id)arg1;
- (void)setUpResponderEventHandlers;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
