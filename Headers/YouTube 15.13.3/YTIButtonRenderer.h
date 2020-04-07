//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTClickableButton-Protocol.h>
#import <Module_Framework/YTTooltipButtonModel-Protocol.h>

@class NSData, NSMutableArray, NSString, YTIAccessibilityData, YTIAccessibilitySupportedDatas, YTIButtonColorSupportedDatas, YTICommand, YTIFormattedString, YTIHintSupportedRenderers, YTIIcon, YTIThemedBasicColorPalette;

@interface YTIButtonRenderer : GPBMessage <YTTooltipButtonModel, YTClickableButton>
{
}

+ (id)descriptor;
- (_Bool)sendEndpointsToFirstResponder:(id)arg1 entry:(id)arg2;
- (_Bool)sendEndpointsToFirstResponder:(id)arg1;
- (void)loadOntoButton:(id)arg1;
@property(readonly, nonatomic, getter=isNonEmpty) _Bool nonEmpty;
- (void)sendAllClickEventsWithFirstResponder:(id)arg1 fromView:(id)arg2 entry:(id)arg3 sendClick:(_Bool)arg4 displayTitle:(id)arg5;
- (void)sendAllClickEventsWithFirstResponder:(id)arg1 fromView:(id)arg2 entry:(id)arg3 sendClick:(_Bool)arg4;
- (void)sendAllClickEventsWithFirstResponder:(id)arg1 fromView:(id)arg2 entry:(id)arg3;
- (void)sendAllClickEventsWithFirstResponder:(id)arg1 fromView:(id)arg2;
- (_Bool)hasAnyCommand;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilityData *accessibility; // @dynamic accessibility;
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibilityData; // @dynamic accessibilityData;
@property(retain, nonatomic) YTIButtonColorSupportedDatas *colorData; // @dynamic colorData;
@property(retain, nonatomic) YTICommand *command; // @dynamic command;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *disabledTooltip; // @dynamic disabledTooltip;
@property(nonatomic) _Bool hasAccessibility; // @dynamic hasAccessibility;
@property(nonatomic) _Bool hasAccessibilityData; // @dynamic hasAccessibilityData;
@property(nonatomic) _Bool hasCommand; // @dynamic hasCommand;
@property(nonatomic) _Bool hasDisabledTooltip; // @dynamic hasDisabledTooltip;
@property(nonatomic) _Bool hasHint; // @dynamic hasHint;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasIsDisabled; // @dynamic hasIsDisabled;
@property(nonatomic) _Bool hasIsSelected; // @dynamic hasIsSelected;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasServiceEndpoint; // @dynamic hasServiceEndpoint;
@property(nonatomic) _Bool hasSize; // @dynamic hasSize;
@property(nonatomic) _Bool hasTargetId; // @dynamic hasTargetId;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasTooltip; // @dynamic hasTooltip;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTIHintSupportedRenderers *hint; // @dynamic hint;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(retain, nonatomic) NSMutableArray *impressionCommandsArray; // @dynamic impressionCommandsArray;
@property(readonly, nonatomic) unsigned long long impressionCommandsArray_Count; // @dynamic impressionCommandsArray_Count;
@property(nonatomic) _Bool isDisabled; // @dynamic isDisabled;
@property(nonatomic) _Bool isSelected; // @dynamic isSelected;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTICommand *serviceEndpoint; // @dynamic serviceEndpoint;
@property(nonatomic) int size; // @dynamic size;
@property(nonatomic) int style; // @dynamic style;
@property(readonly, nonatomic) int styleOneofOneOfCase; // @dynamic styleOneofOneOfCase;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *targetId; // @dynamic targetId;
@property(retain, nonatomic) YTIFormattedString *text; // @dynamic text;
@property(retain, nonatomic) YTIThemedBasicColorPalette *themedBasicColorPalette; // @dynamic themedBasicColorPalette;
@property(copy, nonatomic) NSString *tooltip; // @dynamic tooltip;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
