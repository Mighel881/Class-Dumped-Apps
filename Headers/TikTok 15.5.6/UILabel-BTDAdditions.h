//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@interface UILabel (BTDAdditions)
+ (id)mj_label;
- (void)btd_setText:(id)arg1 withNeedHighlightedText:(id)arg2 highlightedColor:(id)arg3;
- (void)btd_SetText:(id)arg1 lineHeight:(double)arg2;
- (double)btd_widthWithHeight:(double)arg1;
- (double)btd_heightWithWidth:(double)arg1;
- (_Bool)isTruncated;
- (double)mj_textWith;
- (_Bool)GMSx_validateText:(id)arg1 font:(struct __CTFont *)arg2;
- (_Bool)GMSx_goo_fallbackToSystemFontIfNeeded;
- (void)awe_sizeToFitWidth:(double)arg1;
- (void)addShadowWithShadowColor:(id)arg1 shadowOffset:(struct CGSize)arg2 shadowRadius:(double)arg3;
- (id)initWithFontSize:(double)arg1 isBold:(_Bool)arg2 textColor:(id)arg3 text:(id)arg4;
- (void)acc_sizeToFitWidth:(double)arg1;
- (void)acc_addShadowWithShadowColor:(id)arg1 shadowOffset:(struct CGSize)arg2 shadowRadius:(double)arg3;
- (id)acc_initWithFontSize:(double)arg1 isBold:(_Bool)arg2 textColor:(id)arg3 text:(id)arg4;
- (void)acc_showShadow;
- (void)setStyleModel:(id)arg1;
@end
