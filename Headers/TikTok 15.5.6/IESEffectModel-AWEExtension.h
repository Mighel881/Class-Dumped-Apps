//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESEffectModel.h"

@class NSString, UIImage;

@interface IESEffectModel (AWEExtension)
+ (void)load;
- (id)filePathForCameraPosition:(long long)arg1;
@property(readonly, nonatomic) _Bool needServerExcute;
@property(readonly, nonatomic) _Bool isNormalFilter;
@property(readonly, nonatomic) NSString *thumbnailPath;
@property(readonly, nonatomic) NSString *pinyinName;
@property(readonly, nonatomic) NSString *resourcePath;
@property(retain, nonatomic) UIImage *acc_iconImage;
@property(retain, nonatomic) NSString *builtinResource;
@property(retain, nonatomic) NSString *builtinIcon;
- (void)setEffectNameEn:(id)arg1;
- (id)effectNameEn;
- (id)acc_effectName;
@end
