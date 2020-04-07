//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKit/PSPDFModel.h>

#import <PSPDFKit/PSPDFStylePreset-Protocol.h>

@class NSArray, NSString;

@interface PSPDFBorderStylePreset : PSPDFModel <PSPDFStylePreset>
{
    NSString *_name;
    unsigned long long _borderStyle;
    NSArray *_dashArray;
    long long _borderEffect;
    double _borderEffectIntensity;
}

+ (_Bool)supportsSecureCoding;
+ (id)cloudyEffectWithIntensity:(double)arg1 name:(id)arg2;
+ (id)presetWithDashArray:(id)arg1 name:(id)arg2;
+ (id)solidLinePresetWithName:(id)arg1;
@property(nonatomic) double borderEffectIntensity; // @synthesize borderEffectIntensity=_borderEffectIntensity;
@property(nonatomic) long long borderEffect; // @synthesize borderEffect=_borderEffect;
@property(copy, nonatomic) NSArray *dashArray; // @synthesize dashArray=_dashArray;
@property(nonatomic) unsigned long long borderStyle; // @synthesize borderStyle=_borderStyle;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)symbolImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (void)applyToAnnotation:(id)arg1;
- (_Bool)matchesAnnotation:(id)arg1;
- (id)initWithName:(id)arg1 borderStyle:(unsigned long long)arg2 borderEffect:(long long)arg3 borderEffectIntensity:(double)arg4 dashArray:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
