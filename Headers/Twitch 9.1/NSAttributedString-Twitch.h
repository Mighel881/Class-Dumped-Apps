//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (Twitch)
+ (id)zeroWidthNoBreakSpaceStringWithAttributes:(id)arg1;
- (id)tw_withFont:(id)arg1;
- (id)tw_withForegroundColor:(id)arg1;
- (id)tw_withMinimumLineHeight:(double)arg1;
- (id)tw_attributedStringBackfilledWithMaybeFont:(id)arg1;
- (struct CGSize)tw_drawingSizeWithBoundingSize:(struct CGSize)arg1 options:(long long)arg2;
- (struct CGSize)tw_drawingSizeWithBoundingSize:(struct CGSize)arg1;
- (struct CGSize)tw_unboundedSingleLineDrawingSizeWithOptions:(long long)arg1;
@property(readonly, nonatomic) struct CGSize tw_unboundedSingleLineDrawingSize;
- (struct CGSize)tw_sizeWithBoundingSize:(struct CGSize)arg1 options:(long long)arg2;
- (struct CGSize)tw_sizeWithBoundingSize:(struct CGSize)arg1;
- (struct CGSize)tw_unboundedSingleLineSizeWithOptions:(long long)arg1;
@property(readonly, nonatomic) struct CGSize tw_unboundedSingleLineSize;
@end

