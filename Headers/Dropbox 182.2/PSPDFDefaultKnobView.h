//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PSPDFKitUI/PSPDFKnobView-Protocol.h>

@class NSString;

@interface PSPDFDefaultKnobView : UIView <PSPDFKnobView>
{
    unsigned long long _type;
}

+ (Class)layerClass;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)updateColorsForType:(unsigned long long)arg1;
- (void)tintColorDidChange;
- (void)setBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGSize knobSize;
- (id)shapeLayer;
- (id)initWithKnobType:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
