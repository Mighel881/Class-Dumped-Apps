//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface AdPersonalityPopUpCopyWritingStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *check; // @dynamic check;
@property(copy, nonatomic) NSString *confirm; // @dynamic confirm;
@property(nonatomic) _Bool hasCheck; // @dynamic hasCheck;
@property(nonatomic) _Bool hasConfirm; // @dynamic hasConfirm;
@property(nonatomic) _Bool hasSubtext; // @dynamic hasSubtext;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) NSMutableArray *policyLinkListArray; // @dynamic policyLinkListArray;
@property(readonly, nonatomic) unsigned long long policyLinkListArray_Count; // @dynamic policyLinkListArray_Count;
@property(retain, nonatomic) NSMutableArray *policyListArray; // @dynamic policyListArray;
@property(readonly, nonatomic) unsigned long long policyListArray_Count; // @dynamic policyListArray_Count;
@property(copy, nonatomic) NSString *subtext; // @dynamic subtext;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end
