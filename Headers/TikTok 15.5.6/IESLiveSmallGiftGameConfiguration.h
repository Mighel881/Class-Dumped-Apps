//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveSmallGiftConfigurationProtocol-Protocol.h"

@class NSArray, NSString;
@protocol HTSLiveViewHierarchyProvider;

@interface IESLiveSmallGiftGameConfiguration : NSObject <IESLiveSmallGiftConfigurationProtocol>
{
    NSArray *giftViewFrames;
    unsigned long long smallGiftViewCount;
    unsigned long long smallGiftMode;
    double _viewSpacing;
    double _originY;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
}

@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(nonatomic) double originY; // @synthesize originY=_originY;
@property(nonatomic) double viewSpacing; // @synthesize viewSpacing=_viewSpacing;
@property(nonatomic) unsigned long long smallGiftMode; // @synthesize smallGiftMode;
@property(nonatomic) unsigned long long smallGiftViewCount; // @synthesize smallGiftViewCount;
@property(copy, nonatomic) NSArray *giftViewFrames; // @synthesize giftViewFrames;
- (void).cxx_destruct;
- (void)generateFrame;
- (void)calcOriginYWithLandscape:(_Bool)arg1;
- (void)setFrameOriginY:(double)arg1;
- (void)resetFrame;
- (void)fragmentOrientationChanged:(long long)arg1 inGame:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

