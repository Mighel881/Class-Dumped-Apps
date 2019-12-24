//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEUserBubbleView;

@interface AWEUserBubbleManager : NSObject
{
    AWEUserBubbleView *_bubbleView;
}

+ (void)showAnimation:(id)arg1 onView:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)calculateFrameForBubble:(id)arg1 forView:(id)arg2 inContainer:(id)arg3 withAnchorOffset:(struct CGPoint)arg4;
+ (void)showBubble:(id)arg1 direction:(unsigned long long)arg2 margin:(unsigned long long)arg3 offset:(double)arg4 forView:(id)arg5 inContainer:(id)arg6 withAnchorOffset:(struct CGPoint)arg7 completion:(CDUnknownBlockType)arg8;
+ (id)sharedInstance;
@property(retain, nonatomic) AWEUserBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
- (void).cxx_destruct;

@end
