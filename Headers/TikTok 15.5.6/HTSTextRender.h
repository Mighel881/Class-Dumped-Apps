//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HTSTextRender : NSObject
{
}

+ (id)createTextAttributedString:(id)arg1;
+ (void)renderText:(id)arg1 inContext:(struct CGContext *)arg2;
+ (struct CGSize)determineTextSize:(id)arg1;
+ (struct CGPoint)determineNormalizedPosition:(id)arg1 size:(struct CGSize)arg2;

@end

