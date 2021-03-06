//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSUtilities/NSCoding-Protocol.h>
#import <TFSUtilities/TFSActiveTextRange-Protocol.h>

@class NSString;

@interface TFSFlavoredRange : NSObject <TFSActiveTextRange, NSCoding>
{
    long long _rangeFlavor;
    NSString *_displayString;
    struct _NSRange _rangeValue;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;
@property(readonly, nonatomic) long long rangeFlavor; // @synthesize rangeFlavor=_rangeFlavor;
@property(readonly, nonatomic) struct _NSRange rangeValue; // @synthesize rangeValue=_rangeValue;
- (long long)compare:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)accessibilityText;
- (id)activeTextRangeWithRangeValue:(struct _NSRange)arg1;
- (id)initWithRangeValue:(struct _NSRange)arg1;
- (id)initWithRangeValue:(struct _NSRange)arg1 rangeFlavor:(long long)arg2;
- (id)initWithRangeValue:(struct _NSRange)arg1 rangeFlavor:(long long)arg2 displayString:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

