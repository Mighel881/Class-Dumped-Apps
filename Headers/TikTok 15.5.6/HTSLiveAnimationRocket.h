//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSLiveAnimation.h"

@class NSArray, NSAttributedString;

@interface HTSLiveAnimationRocket : HTSLiveAnimation
{
    float _width;
    float _height;
    NSAttributedString *_title;
    NSArray *_backgroundUrlList;
    NSArray *_flexSetting;
}

@property(retain, nonatomic) NSArray *flexSetting; // @synthesize flexSetting=_flexSetting;
@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) float width; // @synthesize width=_width;
@property(copy, nonatomic) NSArray *backgroundUrlList; // @synthesize backgroundUrlList=_backgroundUrlList;
@property(retain, nonatomic) NSAttributedString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

