//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GOIDialogViewUtils : NSObject
{
}

+ (id)styledHTMLwithHTML:(id)arg1 defaultFont:(id)arg2;
+ (id)endMarker:(id)arg1;
+ (id)startMarker:(id)arg1;
+ (double)heightForAttributedText:(id)arg1 constraint:(struct CGSize)arg2;
+ (double)heightForText:(id)arg1 constraint:(struct CGSize)arg2 font:(id)arg3;
+ (void)recenterView:(id)arg1;
+ (id)attributedStringWithServerString:(id)arg1 defaultString:(id)arg2 optionalField:(_Bool)arg3;
+ (id)stringWithServerString:(id)arg1 defaultString:(id)arg2 optionalField:(_Bool)arg3;
+ (id)attributedStringFromHTML:(id)arg1 defaultFont:(id)arg2;
+ (_Bool)markdownText:(id)arg1 matchesAttributes:(id)arg2;
+ (id)attributedStringFromMarkdownText:(id)arg1;
+ (id)attributedStringFromMarkdownText:(id)arg1 links:(id)arg2 backgroundColor:(id)arg3;
+ (id)attributedStringFromText:(id)arg1 links:(id)arg2;
+ (void)addTextfield:(id)arg1 topPadding:(double)arg2 bottomPadding:(double)arg3 canvas:(id)arg4;
+ (void)resizeDialog:(id)arg1 heightDelta:(double)arg2 widthDelta:(double)arg3 recenter:(_Bool)arg4;
+ (void)resizeDialog:(id)arg1 heightDelta:(double)arg2 widthDelta:(double)arg3;
+ (void)addRowOfButtons:(id)arg1 sidePadding:(double)arg2 topPadding:(double)arg3 bottomPadding:(double)arg4 canvas:(id)arg5;
+ (void)addHorizontalLine:(id)arg1 topPadding:(double)arg2 bottomPadding:(double)arg3;
+ (void)addWideButton:(id)arg1 height:(double)arg2 sidePadding:(double)arg3 topPadding:(double)arg4 bottomPadding:(double)arg5 canvas:(id)arg6;
+ (id)addAttributedTextViewWithText:(id)arg1 textColor:(id)arg2 backgroundColor:(id)arg3 font:(id)arg4 sidePadding:(double)arg5 topPadding:(double)arg6 bottomPadding:(double)arg7 canvas:(id)arg8 recenter:(_Bool)arg9 maxHeight:(double)arg10;
+ (id)addTextViewWithText:(id)arg1 textColor:(id)arg2 backgroundColor:(id)arg3 font:(id)arg4 sidePadding:(double)arg5 topPadding:(double)arg6 bottomPadding:(double)arg7 canvas:(id)arg8 recenter:(_Bool)arg9;
+ (void)addTextViewWithText:(id)arg1 textColor:(id)arg2 backgroundColor:(id)arg3 font:(id)arg4 sidePadding:(double)arg5 topPadding:(double)arg6 bottomPadding:(double)arg7 canvas:(id)arg8;
+ (void)addView:(id)arg1 sidePadding:(double)arg2 topPadding:(double)arg3 bottomPadding:(double)arg4 canvas:(id)arg5 recenter:(_Bool)arg6;

@end
