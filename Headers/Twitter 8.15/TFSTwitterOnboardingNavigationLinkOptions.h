//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface TFSTwitterOnboardingNavigationLinkOptions : NSObject
{
    NSArray *_labelConditionalText;
    NSNumber *_minEnableCount;
    NSNumber *_maxEnableCount;
}

@property(readonly, nonatomic) NSNumber *maxEnableCount; // @synthesize maxEnableCount=_maxEnableCount;
@property(readonly, nonatomic) NSNumber *minEnableCount; // @synthesize minEnableCount=_minEnableCount;
@property(readonly, nonatomic) NSArray *labelConditionalText; // @synthesize labelConditionalText=_labelConditionalText;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end
