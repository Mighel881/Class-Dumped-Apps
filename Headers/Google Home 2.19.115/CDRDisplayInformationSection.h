//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CDRIcon, CDRInformationDialog, LOGGsxVEData, NSMutableArray;

@interface CDRDisplayInformationSection : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasInformationDialog; // @dynamic hasInformationDialog;
@property(nonatomic) _Bool hasInformationIcon; // @dynamic hasInformationIcon;
@property(nonatomic) _Bool hasSectionIcon; // @dynamic hasSectionIcon;
@property(nonatomic) _Bool hasVeMetadata; // @dynamic hasVeMetadata;
@property(retain, nonatomic) NSMutableArray *htmlTextArray; // @dynamic htmlTextArray;
@property(readonly, nonatomic) unsigned long long htmlTextArray_Count; // @dynamic htmlTextArray_Count;
@property(retain, nonatomic) CDRInformationDialog *informationDialog; // @dynamic informationDialog;
@property(retain, nonatomic) CDRIcon *informationIcon; // @dynamic informationIcon;
@property(retain, nonatomic) CDRIcon *sectionIcon; // @dynamic sectionIcon;
@property(retain, nonatomic) LOGGsxVEData *veMetadata; // @dynamic veMetadata;

@end

