//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSDictionary, NSString;

@protocol DBChangeValueSuggester
@property(readonly, nonatomic) NSDictionary *analyticsParams;
- (NSArray *)getSuggestionsGivenCurrentValue:(NSString *)arg1 selectionRange:(struct _NSRange)arg2;
@end
