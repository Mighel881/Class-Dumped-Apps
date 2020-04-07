//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKit/PSPDFModel.h>

#import <PSPDFKit/PSPDFStylePreset-Protocol.h>

@class NSString, UIColor;

@interface PSPDFColorPreset : PSPDFModel <PSPDFStylePreset>
{
    UIColor *_color;
    UIColor *_fillColor;
    double _alpha;
}

+ (_Bool)supportsSecureCoding;
+ (id)presetWithColor:(id)arg1 fillColor:(id)arg2 alpha:(double)arg3;
+ (id)presetWithColor:(id)arg1;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) UIColor *fillColorWithAlpha;
@property(readonly, nonatomic) UIColor *colorWithAlpha;
- (id)initWithColor:(id)arg1 fillColor:(id)arg2 alpha:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
