//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDImageView.h"

#import "IESLiveWebPPlayer-Protocol.h"

@class NSString;

@interface AWELiveWebPPlayer : BDImageView <IESLiveWebPPlayer>
{
}

- (void)stopWebPAnimating;
- (void)startWebPAnimating;

// Remaining properties
@property(nonatomic) _Bool autoPlayAnimatedImage;
@property(nonatomic) unsigned long long customLoop;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool infinityLoop;
@property(readonly) Class superclass;

@end
