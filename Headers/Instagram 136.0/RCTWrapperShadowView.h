//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/RCTShadowView.h>

@class RCTBridge;

@interface RCTWrapperShadowView : RCTShadowView
{
    RCTBridge *_bridge;
    CDUnknownBlockType _measureBlock;
    struct CGSize _intrinsicContentSize;
}

- (void).cxx_destruct;
- (void)setIntrinsicContentSize:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (_Bool)isYogaLeafNode;
- (struct CGSize)measureWithMinimumSize:(struct CGSize)arg1 maximumSize:(struct CGSize)arg2;
- (id)initWithBridge:(id)arg1;

@end

