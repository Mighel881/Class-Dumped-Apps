//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IESEffectViewDataSource : NSObject
{
    _Bool _isStickerPickerDefaultType;
    NSArray *_categories;
    NSArray *_effects;
}

@property(nonatomic) _Bool isStickerPickerDefaultType; // @synthesize isStickerPickerDefaultType=_isStickerPickerDefaultType;
@property(copy, nonatomic) NSArray *effects; // @synthesize effects=_effects;
@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
- (void).cxx_destruct;
- (void)buryPointForCategory:(long long)arg1;
- (void)_setupCategoriesWithResponseModel:(id)arg1 whiteList:(id)arg2;
- (void)_setupWithModel:(id)arg1 whiteList:(id)arg2;
- (id)initWithResponseModel:(id)arg1 whiteList:(id)arg2 isStickerPickerDefaultType:(_Bool)arg3;

@end
