//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor;

@interface ChartLegendEntry : NSObject
{
    // Error parsing type: , name: label
    // Error parsing type: , name: form
    // Error parsing type: , name: formSize
    // Error parsing type: , name: formLineWidth
    // Error parsing type: , name: formLineDashPhase
    // Error parsing type: , name: formLineDashLengths
    // Error parsing type: , name: formColor
}

- (void).cxx_destruct;
@property(nonatomic, retain) UIColor *formColor; // @synthesize formColor;
@property(nonatomic, copy) NSArray *formLineDashLengths;
@property(nonatomic) double formLineDashPhase; // @synthesize formLineDashPhase;
@property(nonatomic) double formLineWidth; // @synthesize formLineWidth;
@property(nonatomic) double formSize; // @synthesize formSize;
@property(nonatomic) long long form; // @synthesize form;
@property(nonatomic, copy) NSString *label;
- (id)initWithLabel:(id)arg1 form:(long long)arg2 formSize:(double)arg3 formLineWidth:(double)arg4 formLineDashPhase:(double)arg5 formLineDashLengths:(id)arg6 formColor:(id)arg7;
- (id)init;

@end

