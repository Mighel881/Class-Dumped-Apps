//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSLiveAnimation.h"

@class NSArray, NSAttributedString, UIImage;

@interface HTSLiveAnimationTopRegion : HTSLiveAnimation
{
    NSArray *_avatarURLS;
    NSAttributedString *_title;
    UIImage *_avatarImage;
}

@property(retain, nonatomic) UIImage *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(retain, nonatomic) NSAttributedString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *avatarURLS; // @synthesize avatarURLS=_avatarURLS;
- (void).cxx_destruct;
- (void)preRenderFinished:(CDUnknownBlockType)arg1;
- (id)init;

@end
